/*
 * Entry function of server side
 *
 * Copyright (c) 2010, 2011 lxd <i@lxd.me>
 * 
 * This file is part of File Synchronization System(fss).
 *
 * fss is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, 
 * (at your option) any later version.
 *
 * fss is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with fss.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef _FSS_SERVER_H
#define _FSS_SERVER_H

#include "options.h"

#ifndef INFTIM
#define INFTIM -1
#endif

void entry_server(const struct options *o);



#endif
