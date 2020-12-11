///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "HLMWADFrames.h"

#include "art_embedded/ark_extract.png.h"

///////////////////////////////////////////////////////////////////////////

BaseExploreFrame::BaseExploreFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );

	m_menubar = new wxMenuBar( 0 );
	m_fileMenu = new wxMenu();
	wxMenuItem* open;
	open = new wxMenuItem( m_fileMenu, wxID_OPEN, wxString( _("&Open") ) + wxT('\t') + wxT("Ctrl+O"), wxEmptyString, wxITEM_NORMAL );
	m_fileMenu->Append( open );

	wxMenuItem* save;
	save = new wxMenuItem( m_fileMenu, wxID_SAVE, wxString( _("&Save") ) + wxT('\t') + wxT("Ctrl+S"), wxEmptyString, wxITEM_NORMAL );
	m_fileMenu->Append( save );

	wxMenuItem* saveas;
	saveas = new wxMenuItem( m_fileMenu, wxID_SAVEAS, wxString( _("&Save As...") ) , wxEmptyString, wxITEM_NORMAL );
	m_fileMenu->Append( saveas );

	m_fileMenu->AppendSeparator();

	wxMenuItem* mergePatch;
	mergePatch = new wxMenuItem( m_fileMenu, ID_MERGE, wxString( _("&Merge patch...") ) + wxT('\t') + wxT("Ctrl+M"), wxEmptyString, wxITEM_NORMAL );
	m_fileMenu->Append( mergePatch );

	m_fileMenu->AppendSeparator();

	wxMenuItem* openBaseWad;
	openBaseWad = new wxMenuItem( m_fileMenu, ID_OPEN_BASE_WAD, wxString( _("Switch base wad...") ) , wxEmptyString, wxITEM_NORMAL );
	m_fileMenu->Append( openBaseWad );

	wxMenuItem* restoreBaseWad;
	restoreBaseWad = new wxMenuItem( m_fileMenu, ID_RESTORE_BASE_WAD, wxString( _("Restore Base Wad...") ) , wxEmptyString, wxITEM_NORMAL );
	m_fileMenu->Append( restoreBaseWad );

	m_fileMenu->AppendSeparator();

	wxMenuItem* quit;
	quit = new wxMenuItem( m_fileMenu, wxID_EXIT, wxString( _("&Quit") ) , wxEmptyString, wxITEM_NORMAL );
	m_fileMenu->Append( quit );

	m_menubar->Append( m_fileMenu, _("&File") );

	resource = new wxMenu();
	wxMenuItem* extract;
	extract = new wxMenuItem( resource, ID_EXTRACT, wxString( _("&Extract...") ) + wxT('\t') + wxT("Ctrl+E"), wxEmptyString, wxITEM_NORMAL );
	resource->Append( extract );
	extract->Enable( false );

	wxMenuItem* extractPak;
	extractPak = new wxMenuItem( resource, ID_EXTRACT_PAK, wxString( _("&Extract PAK Contents...") ) + wxT('\t') + wxT("Ctrl+Q"), wxEmptyString, wxITEM_NORMAL );
	resource->Append( extractPak );
	extractPak->Enable( false );

	wxMenuItem* replace;
	replace = new wxMenuItem( resource, ID_REPLACE, wxString( _("&Replace...") ) + wxT('\t') + wxT("Ctrl+R"), wxEmptyString, wxITEM_NORMAL );
	resource->Append( replace );
	replace->Enable( false );

	wxMenuItem* remove;
	remove = new wxMenuItem( resource, ID_REMOVE, wxString( _("&Revert") ) + wxT('\t') + wxT("Ctrl+D"), wxEmptyString, wxITEM_NORMAL );
	resource->Append( remove );
	remove->Enable( false );

	resource->AppendSeparator();

	wxMenuItem* add;
	add = new wxMenuItem( resource, wxID_ADD, wxString( _("&Add...") ) + wxT('\t') + wxT("Ctrl+A"), wxEmptyString, wxITEM_NORMAL );
	resource->Append( add );
	add->Enable( false );

	wxMenuItem* deleteMenuItem;
	deleteMenuItem = new wxMenuItem( resource, wxID_DELETE, wxString( _("&Delete") ) + wxT('\t') + wxT("Del"), wxEmptyString, wxITEM_NORMAL );
	resource->Append( deleteMenuItem );
	deleteMenuItem->Enable( false );

	m_menubar->Append( resource, _("&Resource") );

	help = new wxMenu();
	wxMenuItem* about;
	about = new wxMenuItem( help, wxID_ABOUT, wxString( wxEmptyString ) , wxEmptyString, wxITEM_NORMAL );
	help->Append( about );

	m_menubar->Append( help, _("&Help") );

	this->SetMenuBar( m_menubar );

	m_toolBar = this->CreateToolBar( wxTB_HORIZONTAL|wxTB_NODIVIDER, wxID_ANY );
	wxToolBarToolBase* openTool;
	openTool = m_toolBar->AddTool( wxID_OPEN, _("Open"), wxArtProvider::GetBitmap( wxART_FILE_OPEN, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, _("Open"), wxEmptyString, NULL );

	wxToolBarToolBase* saveTool;
	saveTool = m_toolBar->AddTool( wxID_SAVE, _("Save"), wxArtProvider::GetBitmap( wxART_FILE_SAVE, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, _("Save"), wxEmptyString, NULL );

	m_toolBar->AddSeparator();

	wxToolBarToolBase* extractTool;
	extractTool = m_toolBar->AddTool( ID_EXTRACT, _("Extract"), ark_extract_png_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, _("Extract"), wxEmptyString, NULL );

	m_toolBar->AddSeparator();

	m_searchCtrl = new wxSearchCtrl( m_toolBar, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	#ifndef __WXMAC__
	m_searchCtrl->ShowSearchButton( true );
	#endif
	m_searchCtrl->ShowCancelButton( true );
	m_toolBar->AddControl( m_searchCtrl );
	m_searchBox = new wxCheckBox( m_toolBar, wxID_ANY, _("Show Modified Only"), wxPoint( -1,-1 ), wxDefaultSize, 0 );
	m_toolBar->AddControl( m_searchBox );
	m_toolBar->Realize();

	m_searchTimer.SetOwner( this, wxID_ANY );
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_toolbarSeperatorPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,1 ), wxTAB_TRAVERSAL );
	m_toolbarSeperatorPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );

	bSizer14->Add( m_toolbarSeperatorPanel, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_mainSplitter = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_LIVE_UPDATE );
	m_mainSplitter->Connect( wxEVT_IDLE, wxIdleEventHandler( BaseExploreFrame::m_mainSplitterOnIdle ), NULL, this );

	m_listPanel = new wxPanel( m_mainSplitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_fileListCtrl = new wxDataViewCtrl( m_listPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxDV_MULTIPLE|wxBORDER_NONE );
	bSizer3->Add( m_fileListCtrl, 1, wxEXPAND, 5 );

	m_splitterSeperatorPanel = new wxPanel( m_listPanel, wxID_ANY, wxDefaultPosition, wxSize( 1,-1 ), wxTAB_TRAVERSAL );
	m_splitterSeperatorPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );

	bSizer3->Add( m_splitterSeperatorPanel, 0, wxEXPAND, 5 );


	m_listPanel->SetSizer( bSizer3 );
	m_listPanel->Layout();
	bSizer3->Fit( m_listPanel );
	m_previewPanel = new wxPanel( m_mainSplitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_previewBookCtrl = new wxSimplebook(m_previewPanel, wxID_ANY);
	bSizer4->Add( m_previewBookCtrl, 1, wxEXPAND, 5 );


	m_previewPanel->SetSizer( bSizer4 );
	m_previewPanel->Layout();
	bSizer4->Fit( m_previewPanel );
	m_mainSplitter->SplitVertically( m_listPanel, m_previewPanel, 402 );
	bSizer2->Add( m_mainSplitter, 1, wxEXPAND, 5 );


	bSizer14->Add( bSizer2, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer14 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( BaseExploreFrame::OnWindowClose ) );
	m_fileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnOpenClicked ), this, open->GetId());
	m_fileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnSaveClicked ), this, save->GetId());
	m_fileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnSaveAsClicked ), this, saveas->GetId());
	m_fileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnMergeClicked ), this, mergePatch->GetId());
	m_fileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnSwitchBaseWadClicked ), this, openBaseWad->GetId());
	m_fileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnRestoreClicked ), this, restoreBaseWad->GetId());
	m_fileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnQuitClicked ), this, quit->GetId());
	resource->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnExtractClicked ), this, extract->GetId());
	resource->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnExtractPAKClicked ), this, extractPak->GetId());
	resource->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnReplaceClicked ), this, replace->GetId());
	resource->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnRemoveClicked ), this, remove->GetId());
	resource->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnAddClicked ), this, add->GetId());
	resource->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnDeleteClicked ), this, deleteMenuItem->GetId());
	help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnAboutClicked ), this, about->GetId());
	m_searchCtrl->Connect( wxEVT_COMMAND_SEARCHCTRL_SEARCH_BTN, wxCommandEventHandler( BaseExploreFrame::OnSearchCtrlButton ), NULL, this );
	m_searchCtrl->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( BaseExploreFrame::OnSearchCtrlText ), NULL, this );
	m_searchCtrl->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BaseExploreFrame::OnSearchCtrlEnter ), NULL, this );
	this->Connect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( BaseExploreFrame::OnSearchTimer ) );
	m_fileListCtrl->Connect( wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler( BaseExploreFrame::OnFileListSelectionChanged ), NULL, this );
	m_fileListCtrl->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( BaseExploreFrame::OnFileListDoubleClick ), NULL, this );
}

BaseExploreFrame::~BaseExploreFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( BaseExploreFrame::OnWindowClose ) );
	m_searchCtrl->Disconnect( wxEVT_COMMAND_SEARCHCTRL_SEARCH_BTN, wxCommandEventHandler( BaseExploreFrame::OnSearchCtrlButton ), NULL, this );
	m_searchCtrl->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( BaseExploreFrame::OnSearchCtrlText ), NULL, this );
	m_searchCtrl->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BaseExploreFrame::OnSearchCtrlEnter ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( BaseExploreFrame::OnSearchTimer ) );
	m_fileListCtrl->Disconnect( wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler( BaseExploreFrame::OnFileListSelectionChanged ), NULL, this );
	m_fileListCtrl->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( BaseExploreFrame::OnFileListDoubleClick ), NULL, this );

}

BaseMergeDialog::BaseMergeDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, _("Base WAD File:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer15->Add( m_staticText11, 0, wxALL, 5 );

	m_baseFilePicker = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, _("Select a file"), _("*.wad"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE|wxFLP_FILE_MUST_EXIST );
	bSizer15->Add( m_baseFilePicker, 0, wxEXPAND|wxLEFT|wxRIGHT, 5 );

	m_staticText12 = new wxStaticText( this, wxID_ANY, _("Patch WAD:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer15->Add( m_staticText12, 0, wxALL, 5 );

	m_patchFilePicker = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, _("Select a file"), _("*.patchwad"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE|wxFLP_FILE_MUST_EXIST );
	bSizer15->Add( m_patchFilePicker, 0, wxEXPAND|wxLEFT|wxRIGHT, 5 );

	m_sdbSizer = new wxStdDialogButtonSizer();
	m_sdbSizerOK = new wxButton( this, wxID_OK );
	m_sdbSizer->AddButton( m_sdbSizerOK );
	m_sdbSizerCancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer->AddButton( m_sdbSizerCancel );
	m_sdbSizer->Realize();

	bSizer15->Add( m_sdbSizer, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer15 );
	this->Layout();
	bSizer15->Fit( this );

	this->Centre( wxBOTH );
}

BaseMergeDialog::~BaseMergeDialog()
{
}

BaseTexturePackPanel::BaseTexturePackPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_splitter2 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_LIVE_UPDATE );
	m_splitter2->Connect( wxEVT_IDLE, wxIdleEventHandler( BaseTexturePackPanel::m_splitter2OnIdle ), NULL, this );

	m_panel3 = new wxPanel( m_splitter2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_textureListBox = new wxListBox( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0|wxBORDER_NONE );
	bSizer5->Add( m_textureListBox, 1, wxEXPAND, 5 );

	m_splitterSeperatorPanel = new wxPanel( m_panel3, wxID_ANY, wxDefaultPosition, wxSize( 1,-1 ), wxTAB_TRAVERSAL );
	m_splitterSeperatorPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );

	bSizer5->Add( m_splitterSeperatorPanel, 0, wxEXPAND, 5 );


	m_panel3->SetSizer( bSizer5 );
	m_panel3->Layout();
	bSizer5->Fit( m_panel3 );
	m_panel4 = new wxPanel( m_splitter2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1 = new wxStaticText( m_panel4, wxID_ANY, _("Frame:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer7->Add( m_staticText1, 0, wxALIGN_CENTER|wxALL, 5 );

	m_frameSpinCtrl = new wxSpinCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP|wxTE_PROCESS_ENTER, 0, 10, 0 );
	bSizer7->Add( m_frameSpinCtrl, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText2 = new wxStaticText( m_panel4, wxID_ANY, _("Background:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer7->Add( m_staticText2, 0, wxALIGN_CENTER|wxALL, 5 );

	m_colourPicker = new wxColourPickerCtrl( m_panel4, wxID_ANY, wxColour( 255, 255, 255 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	bSizer7->Add( m_colourPicker, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer6->Add( bSizer7, 0, wxEXPAND, 5 );

	m_framePanel = new wxPanel( m_panel4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	m_frameBitmap = new wxStaticBitmap( m_framePanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_frameBitmap, 0, wxALL, 5 );


	m_framePanel->SetSizer( bSizer11 );
	m_framePanel->Layout();
	bSizer11->Fit( m_framePanel );
	bSizer6->Add( m_framePanel, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer111;
	bSizer111 = new wxBoxSizer( wxHORIZONTAL );


	bSizer111->Add( 0, 0, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( m_panel4, wxID_ANY, _("Animated GIF") ), wxVERTICAL );

	m_staticText8 = new wxStaticText( sbSizer1->GetStaticBox(), wxID_ANY, _("Frame delay:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	sbSizer1->Add( m_staticText8, 0, wxLEFT, 5 );

	m_frameDelaySpinCtrl = new wxSpinCtrl( sbSizer1->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 10, 10000, 250 );
	m_frameDelaySpinCtrl->SetMaxSize( wxSize( 70,-1 ) );

	sbSizer1->Add( m_frameDelaySpinCtrl, 0, wxLEFT, 5 );

	m_exportGIFButton = new wxButton( sbSizer1->GetStaticBox(), wxID_ANY, _("Export"), wxDefaultPosition, wxDefaultSize, 0 );
	m_exportGIFButton->Enable( false );

	sbSizer1->Add( m_exportGIFButton, 0, wxALL, 5 );


	bSizer111->Add( sbSizer1, 0, wxALL|wxEXPAND, 5 );


	bSizer6->Add( bSizer111, 0, wxEXPAND, 5 );

	m_infoSizer = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( m_panel4, wxID_ANY, _("Zoom:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_infoSizer->Add( m_staticText3, 0, wxALIGN_CENTER|wxALL, 5 );

	m_zoomSpinCtrl = new wxSpinCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 20, 1 );
	m_infoSizer->Add( m_zoomSpinCtrl, 0, wxALL, 5 );


	m_infoSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText9 = new wxStaticText( m_panel4, wxID_ANY, _("UV:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	m_infoSizer->Add( m_staticText9, 0, wxALIGN_CENTER|wxALL, 5 );

	m_uvStaticText = new wxStaticText( m_panel4, wxID_ANY, _("-"), wxDefaultPosition, wxDefaultSize, 0 );
	m_uvStaticText->Wrap( -1 );
	m_infoSizer->Add( m_uvStaticText, 0, wxALIGN_CENTER|wxALL, 5 );


	m_infoSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText4 = new wxStaticText( m_panel4, wxID_ANY, _("Size:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_infoSizer->Add( m_staticText4, 0, wxALIGN_CENTER|wxALL, 5 );

	m_sizeStaticText = new wxStaticText( m_panel4, wxID_ANY, _("-"), wxDefaultPosition, wxDefaultSize, 0 );
	m_sizeStaticText->Wrap( -1 );
	m_infoSizer->Add( m_sizeStaticText, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText41 = new wxStaticText( m_panel4, wxID_ANY, _("Offset:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	m_infoSizer->Add( m_staticText41, 0, wxALIGN_CENTER|wxALL, 5 );

	m_offsetStaticText = new wxStaticText( m_panel4, wxID_ANY, _("-"), wxDefaultPosition, wxDefaultSize, 0 );
	m_offsetStaticText->Wrap( -1 );
	m_infoSizer->Add( m_offsetStaticText, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer6->Add( m_infoSizer, 0, wxEXPAND, 5 );


	m_panel4->SetSizer( bSizer6 );
	m_panel4->Layout();
	bSizer6->Fit( m_panel4 );
	m_splitter2->SplitVertically( m_panel3, m_panel4, 180 );
	bSizer4->Add( m_splitter2, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	// Connect Events
	m_textureListBox->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( BaseTexturePackPanel::OnTextureListBoxSelected ), NULL, this );
	m_frameSpinCtrl->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( BaseTexturePackPanel::OnFrameSpinCtrlChanged ), NULL, this );
	m_frameSpinCtrl->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BaseTexturePackPanel::OnFrameSpinCtrlEnterPressed ), NULL, this );
	m_colourPicker->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( BaseTexturePackPanel::OnColourPickerChanged ), NULL, this );
	m_exportGIFButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseTexturePackPanel::OnExportGIFClicked ), NULL, this );
	m_zoomSpinCtrl->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( BaseTexturePackPanel::OnZoomSpinCtrlChanged ), NULL, this );
}

BaseTexturePackPanel::~BaseTexturePackPanel()
{
	// Disconnect Events
	m_textureListBox->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( BaseTexturePackPanel::OnTextureListBoxSelected ), NULL, this );
	m_frameSpinCtrl->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( BaseTexturePackPanel::OnFrameSpinCtrlChanged ), NULL, this );
	m_frameSpinCtrl->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BaseTexturePackPanel::OnFrameSpinCtrlEnterPressed ), NULL, this );
	m_colourPicker->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( BaseTexturePackPanel::OnColourPickerChanged ), NULL, this );
	m_exportGIFButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseTexturePackPanel::OnExportGIFClicked ), NULL, this );
	m_zoomSpinCtrl->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( BaseTexturePackPanel::OnZoomSpinCtrlChanged ), NULL, this );

}

ImagePanel::ImagePanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	m_previewBitmap = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_previewBitmap, 0, wxALIGN_CENTER, 5 );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();
}

ImagePanel::~ImagePanel()
{
}

TextPanel::TextPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );

	m_textCtrl = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY );
	m_textCtrl->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer12->Add( m_textCtrl, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer12 );
	this->Layout();
}

TextPanel::~TextPanel()
{
}

BaseStringTablePanel::BaseStringTablePanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	m_grid = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid->CreateGrid( 1, 1 );
	m_grid->EnableEditing( false );
	m_grid->EnableGridLines( true );
	m_grid->EnableDragGridSize( false );
	m_grid->SetMargins( 0, 0 );

	// Columns
	m_grid->EnableDragColMove( false );
	m_grid->EnableDragColSize( true );
	m_grid->SetColLabelSize( 30 );
	m_grid->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid->EnableDragRowSize( true );
	m_grid->SetRowLabelSize( 180 );
	m_grid->SetRowLabelAlignment( wxALIGN_LEFT, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer13->Add( m_grid, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer13 );
	this->Layout();
}

BaseStringTablePanel::~BaseStringTablePanel()
{
}

BasePAKPanel::BasePAKPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	m_splitter3 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_splitter3->Connect( wxEVT_IDLE, wxIdleEventHandler( BasePAKPanel::m_splitter3OnIdle ), NULL, this );

	m_panel9 = new wxPanel( m_splitter3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );

	m_pakListBox = new wxListBox( m_panel9, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, 0 );
	bSizer17->Add( m_pakListBox, 1, wxEXPAND, 5 );


	m_panel9->SetSizer( bSizer17 );
	m_panel9->Layout();
	bSizer17->Fit( m_panel9 );
	m_panel10 = new wxPanel( m_splitter3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxVERTICAL );

	m_previewCtrl2 = new wxSimplebook(m_panel10, wxID_ANY);
	bSizer18->Add(m_previewCtrl2, 1, wxEXPAND, 5 );


	m_panel10->SetSizer( bSizer18 );
	m_panel10->Layout();
	bSizer18->Fit( m_panel10 );
	m_splitter3->SplitVertically( m_panel9, m_panel10, 0 );
	bSizer16->Add( m_splitter3, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer16 );
	this->Layout();

	// Connect Events
	m_pakListBox->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( BasePAKPanel::OnPAKListBoxSelected ), NULL, this );
}

BasePAKPanel::~BasePAKPanel()
{
	// Disconnect Events
	m_pakListBox->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( BasePAKPanel::OnPAKListBoxSelected ), NULL, this );

}
