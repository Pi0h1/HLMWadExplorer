#include "PAKPanel.h"

#include <wx/filedlg.h>
#include <wx/stdpaths.h>
#include <wx/anidecod.h>
#include <wx/wfstream.h>
#include <wx/sstream.h>
#include <wx/mstream.h>

PAKPanel::PAKPanel(wxWindow* parent, bool child)
	:
	BasePAKPanel(parent)
{

	wxPanel* genPanel = new wxPanel(m_previewCtrl2);
	wxSizer* genSizer = new wxBoxSizer(wxVERTICAL);
	m_hexView = new HexView(genPanel);
	genSizer->Add(m_hexView, wxSizerFlags(1).Expand());
	genPanel->SetSizer(genSizer);

	m_previewCtrl2->AddPage(genPanel, "General", true);
	m_previewCtrl2->AddPage(new ImagePanel(m_previewCtrl2), "PAK Image", false);
	if (!child) {
		m_previewCtrl2->AddPage(new PAKPanel(m_previewCtrl2, true), "PAK PAK", false);
	}
	isChild = child;
	
}

void PAKPanel::LoadPAK(wxInputStream& iStr, wxInt64 size)
{
	wxLogDebug("Loading PAK");
	files.clear();
	m_pakListBox->Freeze();
	m_pakListBox->Clear();
	pakSize = size;
	wxUint32 fileCount;
	iStr.Read(&fileCount, sizeof(fileCount));

	wxVector<wxUint32> offsets;
	offsets.reserve(fileCount);
	for (int i = 0; i < fileCount; ++i)
	{
		wxUint32 offset;
		iStr.Read(&offset, sizeof(offset));
		offsets.push_back(offset);
	}
	offsets.push_back(size);
	iStr.SeekI(offsets[0]);

	for (int i = 0; i < fileCount; i++) {
		wxCharBuffer entryNameBuf(offsets[i+1] - offsets[i]);
		iStr.Read(entryNameBuf.data(), offsets[i + 1] - offsets[i]);

		files.push_back(entryNameBuf);

		wxString stringnumber = wxString::Format(wxT("%d"), (int)i);
		m_pakListBox->Append(stringnumber);
	}

	m_pakListBox->Thaw();
	m_pakListBox->Select(0);
	wxCommandEvent evt;
	OnPAKListBoxSelected(evt);
}

void PAKPanel::OnPAKListBoxSelected(wxCommandEvent& event)
{
	int i = m_pakListBox->GetSelection();


	wxCharBuffer cb = files[i];
	
	wxMemoryInputStream mis(cb.data(), cb.length());

	wxLogNull logNo;
	wxImage img(mis);
	if (img.IsOk()) {

		m_previewCtrl2->ChangeSelection(1);
		ImagePanel* imgPanel = (ImagePanel*)m_previewCtrl2->GetCurrentPage();
		
		imgPanel->m_previewBitmap->SetBitmap(wxBitmap(img));
		imgPanel->Layout();
	}
	else if (!isChild && isPak(mis)) {
		OutputDebugStringA("IS PAK\n");
		m_previewCtrl2->ChangeSelection(2);
		PAKPanel* pakPanel = (PAKPanel*)m_previewCtrl2->GetCurrentPage();
		pakPanel->LoadPAK(mis, cb.length());

	}
	else {
		m_previewCtrl2->ChangeSelection(0);
		m_hexView->Load(mis);
	}
}

bool PAKPanel::isPak(wxInputStream &in) {
	wxUint32 fileCount;
	in.Read(&fileCount, sizeof(fileCount));
	if (fileCount > 255 || fileCount <= 0) {
		in.SeekI(0);
		return false;
	}
	wxVector<wxUint32> offsets;
	offsets.reserve(fileCount);
	for (int i = 0; i < fileCount; ++i)
	{
		wxUint32 offset;
		in.Read(&offset, sizeof(offset));

		if (offset < 0) {
			in.SeekI(0);
			return false;
		}

		if (i > 0 && offset < offsets[i - 1]) {
			in.SeekI(0);
			return false;
		}

		offsets.push_back(offset);

	}
	if (offsets[0] % 16 != 0) {
		in.SeekI(0);
		return false;
	}
	in.SeekI(0);
	return true;

}

