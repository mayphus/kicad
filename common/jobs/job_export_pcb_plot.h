/*
 * This program source code file is part of KiCad, a free EDA CAD application.
 *
 * Copyright (C) 2022 Mark Roszko <mark.roszko@gmail.com>
 * Copyright (C) 1992-2023 KiCad Developers, see AUTHORS.txt for contributors.
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

#pragma once

#include <kicommon.h>
#include <kicommon.h>
#include <layer_ids.h>
#include <lseq.h>
#include <wx/string.h>
#include "job.h"

class KICOMMON_API JOB_EXPORT_PCB_PLOT : public JOB
{
public:
    enum class PLOT_FORMAT
    {
        HPGL,
        GERBER,
        POST,
        DXF,
        PDF,
        SVG
    };

    JOB_EXPORT_PCB_PLOT( PLOT_FORMAT aFormat, const std::string& aType, bool aOutputIsDirectory, bool aIsCli );

    PLOT_FORMAT m_plotFormat;

    wxString m_filename;
    wxString m_colorTheme;
    wxString m_drawingSheet;

    /**
     * Common Options
     */
    bool m_mirror;
    bool m_blackAndWhite;
    bool m_negative;

    bool m_sketchPadsOnFabLayers;
    bool m_hideDNPFPsOnFabLayers;
    bool m_sketchDNPFPsOnFabLayers;
    bool m_crossoutDNPFPsOnFabLayers;

    bool m_plotFootprintValues;
    bool m_plotRefDes;
    bool m_plotDrawingSheet;

    LSEQ m_printMaskLayer;

    // How holes in pads/vias are plotted:
    // 0 = no hole, 1 = small shape, 2 = actual shape
    int m_drillShapeOption;
};