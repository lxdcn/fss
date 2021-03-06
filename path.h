/*
 * Path string operate routines
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
n * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with fss.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _FSS_PATH_H_
#define _FSS_PATH_H_

#include <stdio.h>

#define PATH_SEP "/"

#define IS_HIDDEN(s) (*get_tail((s)) == '.')


void set_basepath(const char *p); // set global variable then trim p

const char *get_tail(const char *path);

char *pathncat(char *path0, const char *path1, size_t size);
char *pathncat2(char *, const char *, const char *, size_t);

char *full2rela(char *fullname);
char *rela2full(const char *relaname, char *fullname, size_t size);


#endif

  
    
