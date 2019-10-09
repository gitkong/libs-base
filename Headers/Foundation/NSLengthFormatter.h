
/* Definition of class NSLengthFormatter
   Copyright (C) 2019 Free Software Foundation, Inc.
   
   By: heron
   Date: Tue Oct  8 13:30:33 EDT 2019

   This file is part of the GNUstep Library.
   
   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.
   
   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02111 USA.
*/

#ifndef _NSLengthFormatter_h_GNUSTEP_BASE_INCLUDE
#define _NSLengthFormatter_h_GNUSTEP_BASE_INCLUDE

#include <Foundation/NSFormatter.h>

#if	defined(__cplusplus)
extern "C" {
#endif

#if OS_API_VERSION(MAC_OS_X_VERSION_10_0, GS_API_LATEST)

@interface NSLengthFormatter : NSFormatter

@end

#if	defined(__cplusplus)
}
#endif

#endif	/* GS_API_MACOSX */

#endif	/* _NSLengthFormatter_h_GNUSTEP_BASE_INCLUDE */

