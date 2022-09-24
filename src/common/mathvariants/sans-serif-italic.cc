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
  { 0x00041, 0x1D608 }, 
  { 0x00042, 0x1D609 }, 
  { 0x00043, 0x1D60A }, 
  { 0x00044, 0x1D60B }, 
  { 0x00045, 0x1D60C }, 
  { 0x00046, 0x1D60D }, 
  { 0x00047, 0x1D60E }, 
  { 0x00048, 0x1D60F }, 
  { 0x00049, 0x1D610 }, 
  { 0x0004A, 0x1D611 }, 
  { 0x0004B, 0x1D612 }, 
  { 0x0004C, 0x1D613 }, 
  { 0x0004D, 0x1D614 }, 
  { 0x0004E, 0x1D615 }, 
  { 0x0004F, 0x1D616 }, 
  { 0x00050, 0x1D617 }, 
  { 0x00051, 0x1D618 }, 
  { 0x00052, 0x1D619 }, 
  { 0x00053, 0x1D61A }, 
  { 0x00054, 0x1D61B }, 
  { 0x00055, 0x1D61C }, 
  { 0x00056, 0x1D61D }, 
  { 0x00057, 0x1D61E }, 
  { 0x00058, 0x1D61F }, 
  { 0x00059, 0x1D620 }, 
  { 0x0005A, 0x1D621 }, 
  { 0x00061, 0x1D622 }, 
  { 0x00062, 0x1D623 }, 
  { 0x00063, 0x1D624 }, 
  { 0x00064, 0x1D625 }, 
  { 0x00065, 0x1D626 }, 
  { 0x00066, 0x1D627 }, 
  { 0x00067, 0x1D628 }, 
  { 0x00068, 0x1D629 }, 
  { 0x00069, 0x1D62A }, 
  { 0x0006A, 0x1D62B }, 
  { 0x0006B, 0x1D62C }, 
  { 0x0006C, 0x1D62D }, 
  { 0x0006D, 0x1D62E }, 
  { 0x0006E, 0x1D62F }, 
  { 0x0006F, 0x1D630 }, 
  { 0x00070, 0x1D631 }, 
  { 0x00071, 0x1D632 }, 
  { 0x00072, 0x1D633 }, 
  { 0x00073, 0x1D634 }, 
  { 0x00074, 0x1D635 }, 
  { 0x00075, 0x1D636 }, 
  { 0x00076, 0x1D637 }, 
  { 0x00077, 0x1D638 }, 
  { 0x00078, 0x1D639 }, 
  { 0x00079, 0x1D63A }, 
  { 0x0007A, 0x1D63B }, 
  { 0, 0 }
};

Char32 
map_variant_sans_serif_italic
(Char32 ch)
{
  if (ch >= 0x0041 and ch <= 0x005A) return table[ch - 0x0041].variant;
  if (ch >= 0x0061 and ch <= 0x007A) return table[ch - 0x0047].variant;
  return ch;
}
