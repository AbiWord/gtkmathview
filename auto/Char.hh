// Copyright (C) 2000-2007, Luca Padovani <padovani@sti.uniurb.it>.
// 
// This file is part of GtkMathView, a flexible, high-quality rendering
// engine for MathML documents.
// 
// GtkMathView is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License as published
// by the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
// 
// GtkMathView is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef __Char_hh__
#define __Char_hh__

typedef char Char;

#if 1 == 0
#define GTKMATHVIEW_CHAR_UNSIGNED    1
#endif

#if 1 == 1
  typedef char Char8;
#ifdef GTKMATHVIEW_CHAR_UNSIGNED
  typedef char UChar8;
#else
  typedef unsigned char UChar8;
#endif
#define CHAR8 1
#else
#error "could not define type Char8"
#endif
  
#if 2 == 1
  typedef char Char16;
#define CHAR16 1
#elif 2 == 4
  typedef wchar_t Char16;
#else
#if 2 == 2
  typedef unsigned short Char16;
#elif 2 == 4
  typedef unsigned int Char16;
#elif 2 == 4
  typedef unsigned long Char16;
#else
#error "could not define type Char16"
#endif
#endif

#if 4 == 1
  typedef char Char32;
#define CHAR32 1
#elif 4 == 4
  typedef wchar_t Char32;
#else
#if 4 == 4
  typedef unsigned int Char32;
#elif 4 == 4
  typedef unsigned long Char32;
#elif 4 == 8
  typedef unsigned long long Char32;
#else
#error "could not define type Char32"
#endif
#endif

#endif // __Char_hh__

