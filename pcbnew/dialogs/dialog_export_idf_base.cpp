///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "widgets/text_ctrl_eval.h"

#include "dialog_export_idf_base.h"

///////////////////////////////////////////////////////////////////////////

DIALOG_EXPORT_IDF3_BASE::DIALOG_EXPORT_IDF3_BASE( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : DIALOG_SHIM( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizerIDFFile;
	bSizerIDFFile = new wxBoxSizer( wxVERTICAL );

	m_txtBrdFile = new wxStaticText( this, wxID_ANY, _("File name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_txtBrdFile->Wrap( -1 );
	bSizerIDFFile->Add( m_txtBrdFile, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxTOP, 5 );

	m_filePickerIDF = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, _("Select an IDF export filename"), _("*.emn"), wxDefaultPosition, wxSize( 450,-1 ), wxFLP_OVERWRITE_PROMPT|wxFLP_SAVE|wxFLP_USE_TEXTCTRL );
	bSizerIDFFile->Add( m_filePickerIDF, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, _("Grid reference point:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer3->Add( m_staticText2, 0, wxALL, 5 );

	m_cbAutoAdjustOffset = new wxCheckBox( this, wxID_ANY, _("Adjust automatically"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	bSizer3->Add( m_cbAutoAdjustOffset, 0, wxALL, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, _("Units:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer6->Add( m_staticText5, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	wxString m_IDF_RefUnitChoiceChoices[] = { _("mm"), _("inch") };
	int m_IDF_RefUnitChoiceNChoices = sizeof( m_IDF_RefUnitChoiceChoices ) / sizeof( wxString );
	m_IDF_RefUnitChoice = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_IDF_RefUnitChoiceNChoices, m_IDF_RefUnitChoiceChoices, 0 );
	m_IDF_RefUnitChoice->SetSelection( 0 );
	bSizer6->Add( m_IDF_RefUnitChoice, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer3->Add( bSizer6, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, _("X position:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer4->Add( m_staticText3, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_IDF_Xref = new TEXT_CTRL_EVAL( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_IDF_Xref->HasFlag( wxTE_MULTILINE ) )
	{
	m_IDF_Xref->SetMaxLength( 8 );
	}
	#else
	m_IDF_Xref->SetMaxLength( 8 );
	#endif
	bSizer4->Add( m_IDF_Xref, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer3->Add( bSizer4, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, _("Y position:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer5->Add( m_staticText4, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_IDF_Yref = new TEXT_CTRL_EVAL( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_IDF_Yref->HasFlag( wxTE_MULTILINE ) )
	{
	m_IDF_Yref->SetMaxLength( 8 );
	}
	#else
	m_IDF_Yref->SetMaxLength( 8 );
	#endif
	bSizer5->Add( m_IDF_Yref, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer3->Add( bSizer5, 1, wxEXPAND, 5 );


	bSizer2->Add( bSizer3, 1, wxEXPAND|wxLEFT, 5 );

	wxString m_rbUnitSelectionChoices[] = { _("Millimeters"), _("Mils") };
	int m_rbUnitSelectionNChoices = sizeof( m_rbUnitSelectionChoices ) / sizeof( wxString );
	m_rbUnitSelection = new wxRadioBox( this, wxID_ANY, _("Output Units"), wxDefaultPosition, wxDefaultSize, m_rbUnitSelectionNChoices, m_rbUnitSelectionChoices, 1, wxRA_SPECIFY_COLS );
	m_rbUnitSelection->SetSelection( 0 );
	bSizer2->Add( m_rbUnitSelection, 0, wxALL, 5 );

	wxStaticBoxSizer* sbOtherOptions;
	sbOtherOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Other Options") ), wxVERTICAL );

	m_cbRemoveDNP = new wxCheckBox( sbOtherOptions->GetStaticBox(), wxID_ANY, _("Ignore 'Do not populate' components"), wxDefaultPosition, wxDefaultSize, 0 );
	sbOtherOptions->Add( m_cbRemoveDNP, 0, wxALL, 5 );

	m_cbRemoveUnspecified = new wxCheckBox( sbOtherOptions->GetStaticBox(), wxID_ANY, _("Ignore 'Unspecified' components"), wxDefaultPosition, wxDefaultSize, 0 );
	sbOtherOptions->Add( m_cbRemoveUnspecified, 0, wxALL, 5 );


	bSizer2->Add( sbOtherOptions, 1, wxEXPAND|wxLEFT|wxRIGHT, 10 );


	bSizerIDFFile->Add( bSizer2, 1, wxEXPAND, 5 );

	m_sdbSizer = new wxStdDialogButtonSizer();
	m_sdbSizerOK = new wxButton( this, wxID_OK );
	m_sdbSizer->AddButton( m_sdbSizerOK );
	m_sdbSizerCancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer->AddButton( m_sdbSizerCancel );
	m_sdbSizer->Realize();

	bSizerIDFFile->Add( m_sdbSizer, 0, wxBOTTOM|wxEXPAND|wxLEFT|wxTOP, 5 );


	this->SetSizer( bSizerIDFFile );
	this->Layout();
	bSizerIDFFile->Fit( this );

	this->Centre( wxBOTH );
}

DIALOG_EXPORT_IDF3_BASE::~DIALOG_EXPORT_IDF3_BASE()
{
}
