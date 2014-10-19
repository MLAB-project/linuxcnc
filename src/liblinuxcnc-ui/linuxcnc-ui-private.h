//
// Copyright (C) 2014 Sebastian Kuzminsky
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the
// Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
// Boston, MA  02110-1301, USA.
//

#ifndef LIBLINUXCNC_UI_PRIVATE
#define LIBLINUXCNC_UI_PRIVATE

#include "linuxcnc-ui.h"

// old yucky stuff
#include "cmd_msg.hh"    // RCS_CMD_CHANNEL
#include "stat_msg.hh"   // RCS_STAT_CHANNEL
#include "emc_nml.hh"    // EMC_STAT
#include "nml.hh"        // NML
#include "nml_oi.hh"     // nmlErrorFormat
#include "emcglb.h"      // emc_debug
#include "debugflags.h"  // EMC_DEBUG_*
#include "rcs_print.hh"  // set_rcs_print_destination(), RCS_PRINT_TO_NULL


typedef struct lui {
    RCS_CMD_CHANNEL *command_nml;
    RCS_STAT_CHANNEL *status_nml;
    EMC_STAT *status;
    NML *error_nml;
} lui_t;

#endif  // LIBLINUXCNC_UI_PRIVATE
