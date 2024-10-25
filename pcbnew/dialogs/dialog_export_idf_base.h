///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
class TEXT_CTRL_EVAL;

#include "dialog_shim.h"
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/filepicker.h>
#include <wx/checkbox.h>
#include <wx/choice.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/valtext.h>
#include <wx/radiobox.h>
#include <wx/statbox.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class DIALOG_EXPORT_IDF3_BASE
///////////////////////////////////////////////////////////////////////////////
class DIALOG_EXPORT_IDF3_BASE : public DIALOG_SHIM
{
	private:

	protected:
		wxStaticText* m_txtBrdFile;
		wxFilePickerCtrl* m_filePickerIDF;
		wxStaticText* m_staticText2;
		wxCheckBox* m_cbAutoAdjustOffset;
		wxStaticText* m_staticText5;
		wxChoice* m_IDF_RefUnitChoice;
		wxStaticText* m_staticText3;
		TEXT_CTRL_EVAL* m_IDF_Xref;
		wxStaticText* m_staticText4;
		TEXT_CTRL_EVAL* m_IDF_Yref;
		wxRadioBox* m_rbUnitSelection;
		wxCheckBox* m_cbRemoveDNP;
		wxCheckBox* m_cbRemoveUnspecified;
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerOK;
		wxButton* m_sdbSizerCancel;

	public:

		DIALOG_EXPORT_IDF3_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Export IDFv3"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );

		~DIALOG_EXPORT_IDF3_BASE();

};

