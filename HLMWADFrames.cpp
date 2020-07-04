///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
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
	open = new wxMenuItem( m_fileMenu, wxID_OPEN, wxString( wxEmptyString ) , wxEmptyString, wxITEM_NORMAL );
	m_fileMenu->Append( open );
	
	wxMenuItem* save;
	save = new wxMenuItem( m_fileMenu, wxID_SAVE, wxString( wxEmptyString ) , wxEmptyString, wxITEM_NORMAL );
	m_fileMenu->Append( save );
	
	wxMenuItem* saveas;
	saveas = new wxMenuItem( m_fileMenu, wxID_SAVEAS, wxString( wxEmptyString ) , wxEmptyString, wxITEM_NORMAL );
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
	restoreBaseWad = new wxMenuItem(m_fileMenu, ID_RESTORE_BASE_WAD, wxString(_("Restore base wad...")), wxEmptyString, wxITEM_NORMAL);
	m_fileMenu->Append(restoreBaseWad);
	
	m_fileMenu->AppendSeparator();
	
	wxMenuItem* quit;
	quit = new wxMenuItem( m_fileMenu, wxID_EXIT, wxString( wxEmptyString ) , wxEmptyString, wxITEM_NORMAL );
	m_fileMenu->Append( quit );
	
	m_menubar->Append( m_fileMenu, _("&File") ); 
	
	resource = new wxMenu();
	wxMenuItem* extract;
	extract = new wxMenuItem( resource, ID_EXTRACT, wxString( _("&Extract...") ) + wxT('\t') + wxT("Ctrl+E"), wxEmptyString, wxITEM_NORMAL );
	resource->Append( extract );
	extract->Enable( false );

	wxMenuItem* extractPAK;
	extractPAK = new wxMenuItem(resource, ID_EXTRACT_PAK, wxString(_("&Extract PAK contents...")) + wxT('\t') + wxT("Ctrl+Q"), wxEmptyString, wxITEM_NORMAL);
	resource->Append(extractPAK);
	extractPAK->Enable(false);
	
	wxMenuItem* replace;
	replace = new wxMenuItem( resource, ID_REPLACE, wxString( _("&Replace...") ) + wxT('\t') + wxT("Ctrl+R"), wxEmptyString, wxITEM_NORMAL );
	resource->Append( replace );
	replace->Enable( false );
	
	wxMenuItem* remove;
	remove = new wxMenuItem(resource, ID_REMOVE, wxString(_("&Revert...")) + wxT('\t') + wxT("Ctrl+D"), wxEmptyString, wxITEM_NORMAL);
	resource->Append(remove);
	remove->Enable(true);

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
	
	m_fileListCtrl = new wxDataViewCtrl( m_listPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxDV_MULTIPLE|wxNO_BORDER );
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
	m_mainSplitter->SplitVertically( m_listPanel, m_previewPanel, 400 );
	bSizer2->Add( m_mainSplitter, 1, wxEXPAND, 5 );
	
	
	bSizer14->Add( bSizer2, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer14 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( BaseExploreFrame::OnWindowClose ) );
	this->Connect( open->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnOpenClicked ) );
	this->Connect( save->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnSaveClicked ) );
	this->Connect( saveas->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnSaveAsClicked ) );
	this->Connect( mergePatch->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnMergeClicked ) );
	this->Connect( openBaseWad->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnSwitchBaseWadClicked ) );
	this->Connect( restoreBaseWad->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(BaseExploreFrame::OnRestoreClicked));
	this->Connect( quit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnQuitClicked ) );
	this->Connect( extract->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnExtractClicked ) );
	this->Connect( extractPAK->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(BaseExploreFrame::OnExtractPAKClicked));
	this->Connect( replace->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnReplaceClicked ) );
	this->Connect( remove->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(BaseExploreFrame::OnRemoveClicked));
	this->Connect( add->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnAddClicked ) );
	this->Connect( deleteMenuItem->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnDeleteClicked ) );
	this->Connect( about->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnAboutClicked ) );
	m_searchCtrl->Connect( wxEVT_COMMAND_SEARCHCTRL_SEARCH_BTN, wxCommandEventHandler( BaseExploreFrame::OnSearchCtrlButton ), NULL, this );
	m_searchCtrl->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( BaseExploreFrame::OnSearchCtrlText ), NULL, this );
	m_searchCtrl->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BaseExploreFrame::OnSearchCtrlEnter ), NULL, this );
	this->Connect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( BaseExploreFrame::OnSearchTimer ) );
	this->Connect( wxID_ANY, wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler( BaseExploreFrame::OnFileListSelectionChanged ) );
	m_fileListCtrl->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( BaseExploreFrame::OnFileListDoubleClick ), NULL, this );
}

BaseExploreFrame::~BaseExploreFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( BaseExploreFrame::OnWindowClose ) );
	this->Disconnect( wxID_OPEN, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnOpenClicked ) );
	this->Disconnect( wxID_SAVE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnSaveClicked ) );
	this->Disconnect( wxID_SAVEAS, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnSaveAsClicked ) );
	this->Disconnect( ID_MERGE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnMergeClicked ) );
	this->Disconnect( ID_OPEN_BASE_WAD, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnSwitchBaseWadClicked ) );
	this->Disconnect(ID_RESTORE_BASE_WAD, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(BaseExploreFrame::OnRestoreClicked));
	this->Disconnect( wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnQuitClicked ) );
	this->Disconnect( ID_EXTRACT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnExtractClicked ) );
	this->Disconnect( ID_EXTRACT_PAK, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(BaseExploreFrame::OnExtractPAKClicked));
	this->Disconnect( ID_REPLACE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnReplaceClicked ) );
	this->Disconnect( ID_REMOVE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(BaseExploreFrame::OnRemoveClicked));
	this->Disconnect( wxID_ADD, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnAddClicked ) );
	this->Disconnect( wxID_DELETE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnDeleteClicked ) );
	this->Disconnect( wxID_ABOUT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( BaseExploreFrame::OnAboutClicked ) );
	m_searchCtrl->Disconnect( wxEVT_COMMAND_SEARCHCTRL_SEARCH_BTN, wxCommandEventHandler( BaseExploreFrame::OnSearchCtrlButton ), NULL, this );
	m_searchCtrl->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( BaseExploreFrame::OnSearchCtrlText ), NULL, this );
	m_searchCtrl->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BaseExploreFrame::OnSearchCtrlEnter ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( BaseExploreFrame::OnSearchTimer ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler( BaseExploreFrame::OnFileListSelectionChanged ) );
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
	
	m_baseFilePicker = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*.wad"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE|wxFLP_FILE_MUST_EXIST );
	bSizer15->Add( m_baseFilePicker, 0, wxEXPAND|wxLEFT|wxRIGHT, 5 );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, _("Patch WAD:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer15->Add( m_staticText12, 0, wxALL, 5 );
	
	m_patchFilePicker = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*.patchwad"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE|wxFLP_FILE_MUST_EXIST );
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

BaseTexturePackPanel::BaseTexturePackPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	m_splitter2 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_LIVE_UPDATE );
	m_splitter2->Connect( wxEVT_IDLE, wxIdleEventHandler( BaseTexturePackPanel::m_splitter2OnIdle ), NULL, this );
	
	m_panel3 = new wxPanel( m_splitter2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	m_textureListBox = new wxListBox( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0|wxNO_BORDER ); 
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
	
	m_staticText8 = new wxStaticText( m_panel4, wxID_ANY, _("Frame delay:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	sbSizer1->Add( m_staticText8, 0, wxLEFT, 5 );
	
	m_frameDelaySpinCtrl = new wxSpinCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 10, 10000, 250 );
	m_frameDelaySpinCtrl->SetMaxSize( wxSize( 70,-1 ) );
	
	sbSizer1->Add( m_frameDelaySpinCtrl, 0, wxLEFT, 5 );
	
	m_exportGIFButton = new wxButton( m_panel4, wxID_ANY, _("Export"), wxDefaultPosition, wxDefaultSize, 0 );
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

ImagePanel::ImagePanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
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

TextPanel::TextPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	m_textCtrl = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY );
	m_textCtrl->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 76, 90, 90, false, wxEmptyString ) );
	
	bSizer12->Add( m_textCtrl, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer12 );
	this->Layout();
}

TextPanel::~TextPanel()
{
}

BaseStringTablePanel::BaseStringTablePanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
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
	m_grid->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grid->EnableDragRowSize( true );
	m_grid->SetRowLabelSize( 180 );
	m_grid->SetRowLabelAlignment( wxALIGN_LEFT, wxALIGN_CENTRE );
	
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
