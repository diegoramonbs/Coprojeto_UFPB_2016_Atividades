/*****************************************************************************

  The following code is derived, directly or indirectly, from the SystemC
  source code Copyright (c) 1996-2014 by all Contributors.
  All Rights reserved.

  The contents of this file are subject to the restrictions and limitations
  set forth in the SystemC Open Source License (the "License");
  You may not use this file except in compliance with such restrictions and
  limitations. You may obtain instructions on how to receive a copy of the
  License at http://www.accellera.org/. Software distributed by Contributors
  under the License is distributed on an "AS IS" basis, WITHOUT WARRANTY OF
  ANY KIND, either express or implied. See the License for the specific
  language governing rights and limitations under the License.

 *****************************************************************************/

/*****************************************************************************

  simple_bus_types.h : The common types.

  Original Author: Ric Hilderink, Synopsys, Inc., 2001-10-11

 *****************************************************************************/

/*****************************************************************************

  MODIFICATION LOG - modifiers, enter your name, affiliation, date and
  changes you are making here.

      Name, Affiliation, Date:
  Description of Modification:

 *****************************************************************************/

#ifndef __simple_bus_types_h
#define __simple_bus_types_h

#include <stdio.h>
#include <systemc.h>

enum simple_bus_status { SIMPLE_BUS_OK = 0
, SIMPLE_BUS_REQUEST
, SIMPLE_BUS_WAIT
, SIMPLE_BUS_ERROR
                       };

// needed for more readable debug output
extern char simple_bus_status_str[4][20];

struct simple_bus_request;
typedef std::vector<simple_bus_request *> simple_bus_request_vec;

extern int sb_fprintf(FILE *, const char *, ...);

#endif