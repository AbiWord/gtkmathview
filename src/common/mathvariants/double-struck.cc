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

// WARNING: do not edit! This file has been generated automatically


#include <Char.hh>

  
typedef struct TableEntry
{
  Char16 normal;
  Char32 variant;
} TableEntry;

static TableEntry table[] =
{
  { 0x00030, 0x1D7D8 }, 
  { 0x00031, 0x1D7D9 }, 
  { 0x00032, 0x1D7DA }, 
  { 0x00033, 0x1D7DB }, 
  { 0x00034, 0x1D7DC }, 
  { 0x00035, 0x1D7DD }, 
  { 0x00036, 0x1D7DE }, 
  { 0x00037, 0x1D7DF }, 
  { 0x00038, 0x1D7E0 }, 
  { 0x00039, 0x1D7E1 }, 
  { 0x00041, 0x1D538 }, 
  { 0x00042, 0x1D539 }, 
  { 0x00043, 0x02102 }, 
  { 0x00044, 0x1D53B }, 
  { 0x00045, 0x1D53C }, 
  { 0x00046, 0x1D53D }, 
  { 0x00047, 0x1D53E }, 
  { 0x00048, 0x0210D }, 
  { 0x00049, 0x1D540 }, 
  { 0x0004A, 0x1D541 }, 
  { 0x0004B, 0x1D542 }, 
  { 0x0004C, 0x1D543 }, 
  { 0x0004D, 0x1D544 }, 
  { 0x0004E, 0x02115 }, 
  { 0x0004F, 0x1D546 }, 
  { 0x00050, 0x02119 }, 
  { 0x00051, 0x0211A }, 
  { 0x00052, 0x0211D }, 
  { 0x00053, 0x1D54A }, 
  { 0x00054, 0x1D54B }, 
  { 0x00055, 0x1D54C }, 
  { 0x00056, 0x1D54D }, 
  { 0x00057, 0x1D54E }, 
  { 0x00058, 0x1D54F }, 
  { 0x00059, 0x1D550 }, 
  { 0x0005A, 0x02124 }, 
  { 0x00061, 0x1D552 }, 
  { 0x00062, 0x1D553 }, 
  { 0x00063, 0x1D554 }, 
  { 0x00064, 0x1D555 }, 
  { 0x00065, 0x1D556 }, 
  { 0x00066, 0x1D557 }, 
  { 0x00067, 0x1D558 }, 
  { 0x00068, 0x1D559 }, 
  { 0x00069, 0x1D55A }, 
  { 0x0006A, 0x1D55B }, 
  { 0x0006B, 0x1D55C }, 
  { 0x0006C, 0x1D55D }, 
  { 0x0006D, 0x1D55E }, 
  { 0x0006E, 0x1D55F }, 
  { 0x0006F, 0x1D560 }, 
  { 0x00070, 0x1D561 }, 
  { 0x00071, 0x1D562 }, 
  { 0x00072, 0x1D563 }, 
  { 0x00073, 0x1D564 }, 
  { 0x00074, 0x1D565 }, 
  { 0x00075, 0x1D566 }, 
  { 0x00076, 0x1D567 }, 
  { 0x00077, 0x1D568 }, 
  { 0x00078, 0x1D569 }, 
  { 0x00079, 0x1D56A }, 
  { 0x0007A, 0x1D56B }, 
  { 0, 0 }
};

Char32 
map_variant_double_struck
(Char32 ch)
{
  if (ch >= 0x0030 and ch <= 0x0039) return table[ch - 0x0030].variant;
  if (ch >= 0x0041 and ch <= 0x005A) return table[ch - 0x0037].variant;
  if (ch >= 0x0061 and ch <= 0x007A) return table[ch - 0x003D].variant;
  return ch;
}
