///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/srchctrl.h>
#include <wx/checkbox.h>
#include <wx/toolbar.h>
#include <wx/timer.h>
#include <wx/panel.h>
#include <wx/dataview.h>
#include <wx/sizer.h>
#include <wx/simplebook.h>
#include <wx/splitter.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/filepicker.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/listbox.h>
#include <wx/spinctrl.h>
#include <wx/clrpicker.h>
#include <wx/statbmp.h>
#include <wx/statbox.h>
#include <wx/textctrl.h>
#include <wx/grid.h>

///////////////////////////////////////////////////////////////////////////

#define ID_MERGE 1000
#define ID_OPEN_BASE_WAD 1001
#define ID_RESTORE_BASE_WAD 1002
#define ID_EXTRACT 1003
#define ID_EXTRACT_PAK 1004
#define ID_REPLACE 1005
#define ID_REMOVE 1006

///////////////////////////////////////////////////////////////////////////////
/// Class BaseExploreFrame
///////////////////////////////////////////////////////////////////////////////
class BaseExploreFrame : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_menubar;
		wxMenu* m_fileMenu;
		wxMenu* resource;
		wxMenu* help;
		wxToolBar* m_toolBar;
		wxSearchCtrl* m_searchCtrl;
		wxCheckBox* m_searchBox;
		wxTimer m_searchTimer;
		wxPanel* m_toolbarSeperatorPanel;
		wxSplitterWindow* m_mainSplitter;
		wxPanel* m_listPanel;
		wxDataViewCtrl* m_fileListCtrl;
		wxPanel* m_splitterSeperatorPanel;
		wxPanel* m_previewPanel;
		wxSimplebook* m_previewBookCtrl;

		// Virtual event handlers, overide them in your derived class
		virtual void OnWindowClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnOpenClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveAsClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMergeClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSwitchBaseWadClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRestoreClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnQuitClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExtractClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExtractPAKClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnReplaceClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemoveClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAddClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDeleteClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAboutClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSearchCtrlButton( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSearchCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSearchCtrlEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSearchTimer( wxTimerEvent& event ) { event.Skip(); }
		virtual void OnFileListSelectionChanged( wxDataViewEvent& event ) { event.Skip(); }
		virtual void OnFileListDoubleClick( wxMouseEvent& event ) { event.Skip(); }


	public:

		BaseExploreFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 886,484 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseExploreFrame();

		void m_mainSplitterOnIdle( wxIdleEvent& )
		{
			m_mainSplitter->SetSashPosition( 402 );
			m_mainSplitter->Disconnect( wxEVT_IDLE, wxIdleEventHandler( BaseExploreFrame::m_mainSplitterOnIdle ), NULL, this );
		}

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseMergeDialog
///////////////////////////////////////////////////////////////////////////////
class BaseMergeDialog : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText11;
		wxFilePickerCtrl* m_baseFilePicker;
		wxStaticText* m_staticText12;
		wxFilePickerCtrl* m_patchFilePicker;
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerOK;
		wxButton* m_sdbSizerCancel;

	public:

		BaseMergeDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Merge Patch"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~BaseMergeDialog();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseTexturePackPanel
///////////////////////////////////////////////////////////////////////////////
class BaseTexturePackPanel : public wxPanel
{
	private:

	protected:
		wxSplitterWindow* m_splitter2;
		wxPanel* m_panel3;
		wxListBox* m_textureListBox;
		wxPanel* m_splitterSeperatorPanel;
		wxPanel* m_panel4;
		wxStaticText* m_staticText1;
		wxSpinCtrl* m_frameSpinCtrl;
		wxStaticText* m_staticText2;
		wxColourPickerCtrl* m_colourPicker;
		wxPanel* m_framePanel;
		wxStaticBitmap* m_frameBitmap;
		wxStaticText* m_staticText8;
		wxSpinCtrl* m_frameDelaySpinCtrl;
		wxButton* m_exportGIFButton;
		wxBoxSizer* m_infoSizer;
		wxStaticText* m_staticText3;
		wxSpinCtrl* m_zoomSpinCtrl;
		wxStaticText* m_staticText9;
		wxStaticText* m_uvStaticText;
		wxStaticText* m_staticText4;
		wxStaticText* m_sizeStaticText;
		wxStaticText* m_staticText41;
		wxStaticText* m_offsetStaticText;

		// Virtual event handlers, overide them in your derived class
		virtual void OnTextureListBoxSelected( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFrameSpinCtrlChanged( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnFrameSpinCtrlEnterPressed( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnColourPickerChanged( wxColourPickerEvent& event ) { event.Skip(); }
		virtual void OnExportGIFClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnZoomSpinCtrlChanged( wxSpinEvent& event ) { event.Skip(); }


	public:

		BaseTexturePackPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~BaseTexturePackPanel();

		void m_splitter2OnIdle( wxIdleEvent& )
		{
			m_splitter2->SetSashPosition( 180 );
			m_splitter2->Disconnect( wxEVT_IDLE, wxIdleEventHandler( BaseTexturePackPanel::m_splitter2OnIdle ), NULL, this );
		}

};

///////////////////////////////////////////////////////////////////////////////
/// Class ImagePanel
///////////////////////////////////////////////////////////////////////////////
class ImagePanel : public wxPanel
{
	private:

	protected:

	public:
		wxStaticBitmap* m_previewBitmap;

		ImagePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~ImagePanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class TextPanel
///////////////////////////////////////////////////////////////////////////////
class TextPanel : public wxPanel
{
	private:

	protected:

	public:
		wxTextCtrl* m_textCtrl;

		TextPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~TextPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseStringTablePanel
///////////////////////////////////////////////////////////////////////////////
class BaseStringTablePanel : public wxPanel
{
	private:

	protected:
		wxGrid* m_grid;

	public:

		BaseStringTablePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~BaseStringTablePanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BasePAKPanel
///////////////////////////////////////////////////////////////////////////////
class BasePAKPanel : public wxPanel
{
	private:

	protected:
		wxSplitterWindow* m_splitter3;
		wxPanel* m_panel9;
		wxListBox* m_pakListBox;
		wxPanel* m_panel10;
		wxSimplebook* m_previewCtrl2;

		// Virtual event handlers, overide them in your derived class
		virtual void OnPAKListBoxSelected( wxCommandEvent& event ) { event.Skip(); }


	public:

		BasePAKPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~BasePAKPanel();

		void m_splitter3OnIdle( wxIdleEvent& )
		{
			m_splitter3->SetSashPosition( 0 );
			m_splitter3->Disconnect( wxEVT_IDLE, wxIdleEventHandler( BasePAKPanel::m_splitter3OnIdle ), NULL, this );
		}

};

