/*
 * This program source code file is part of KiCad, a free EDA CAD application.
 *
 * Copyright (C) 2019 Ian McInerney <Ian.S.McInerney@ieee.org>
 * Copyright The KiCad Developers, see AUTHORS.txt for contributors.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CVPCB_ASSOCIATION_TOOL_H_
#define CVPCB_ASSOCIATION_TOOL_H_

#include <tool/tool_interactive.h>

#include <cvpcb_mainframe.h>


/**
 * Handles action in  main CvPcb window.
 */

class CVPCB_ASSOCIATION_TOOL : public TOOL_INTERACTIVE
{
public:
    CVPCB_ASSOCIATION_TOOL();
    ~CVPCB_ASSOCIATION_TOOL() {}

    /// @copydoc TOOL_INTERACTIVE::Reset()
    void Reset( RESET_REASON aReason ) override;

    /**
     * Undo the footprint associations most recently done.
     *
     * @param aEvent is the event generated by the tool framework.
     */
    int Undo( const TOOL_EVENT& aEvent );

    /**
     * Redo the footprint associations most recently done.
     *
     * @param aEvent is the event generated by the tool framework.
     */
    int Redo( const TOOL_EVENT& aEvent );

    /**
     * Associate the selected footprint with the currently selected components.
     *
     * @param aEvent is the event generated by the tool framework.
     */
    int Associate( const TOOL_EVENT& aEvent );

    /**
     * Perform automatic footprint association.
     *
     * @param aEvent is the event generated by the tool framework.
     */
    int AutoAssociate( const TOOL_EVENT& aEvent );

    /**
     * Delete all associations.
     *
     * @param aEvent is the event generated by the tool framework.
     */
    int DeleteAll( const TOOL_EVENT& aEvent );

    /**
     * Delete the selected associations.
     *
     * @param aEvent is the event generated by the tool framework.
     */
    int DeleteAssoc( const TOOL_EVENT& aEvent );

    /**
     * Copy the selected associations to the clipboard.
     *
     * @param aEvent is the event generated by the tool framework.
     */
    int CopyAssoc( const TOOL_EVENT& aEvent );

    /**
     * Cut the selected associations to the clipboard.
     *
     * @param aEvent is the event generated by the tool framework.
     */
    int CutAssoc( const TOOL_EVENT& aEvent );

    /**
     * Paste the clipboard onto the current selection.
     *
     * @param aEvent is the event generated by the tool framework.
     */
    int PasteAssoc( const TOOL_EVENT& aEvent );

    /**
     * Set up handlers for various events.
     */
    void setTransitions() override;

private:
    CVPCB_MAINFRAME* m_frame;
};

#endif
