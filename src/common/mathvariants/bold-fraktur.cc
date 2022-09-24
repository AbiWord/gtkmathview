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
  { 0x00041, 0x1D56C }, 
  { 0x00042, 0x1D56D }, 
  { 0x00043, 0x1D56E }, 
  { 0x00044, 0x1D56F }, 
  { 0x00045, 0x1D570 }, 
  { 0x00046, 0x1D571 }, 
  { 0x00047, 0x1D572 }, 
  { 0x00048, 0x1D573 }, 
  { 0x00049, 0x1D574 }, 
  { 0x0004A, 0x1D575 }, 
  { 0x0004B, 0x1D576 }, 
  { 0x0004C, 0x1D577 }, 
  { 0x0004D, 0x1D578 }, 
  { 0x0004E, 0x1D579 }, 
  { 0x0004F, 0x1D57A }, 
  { 0x00050, 0x1D57B }, 
  { 0x00051, 0x1D57C }, 
  { 0x00052, 0x1D57D }, 
  { 0x00053, 0x1D57E }, 
  { 0x00054, 0x1D57F }, 
  { 0x00055, 0x1D580 }, 
  { 0x00056, 0x1D581 }, 
  { 0x00057, 0x1D582 }, 
  { 0x00058, 0x1D583 }, 
  { 0x00059, 0x1D584 }, 
  { 0x0005A, 0x1D585 }, 
  { 0x00061, 0x1D586 }, 
  { 0x00062, 0x1D587 }, 
  { 0x00063, 0x1D588 }, 
  { 0x00064, 0x1D589 }, 
  { 0x00065, 0x1D58A }, 
  { 0x00066, 0x1D58B }, 
  { 0x00067, 0x1D58C }, 
  { 0x00068, 0x1D58D }, 
  { 0x00069, 0x1D58E }, 
  { 0x0006A, 0x1D58F }, 
  { 0x0006B, 0x1D590 }, 
  { 0x0006C, 0x1D591 }, 
  { 0x0006D, 0x1D592 }, 
  { 0x0006E, 0x1D593 }, 
  { 0x0006F, 0x1D594 }, 
  { 0x00070, 0x1D595 }, 
  { 0x00071, 0x1D596 }, 
  { 0x00072, 0x1D597 }, 
  { 0x00073, 0x1D598 }, 
  { 0x00074, 0x1D599 }, 
  { 0x00075, 0x1D59A }, 
  { 0x00076, 0x1D59B }, 
  { 0x00077, 0x1D59C }, 
  { 0x00078, 0x1D59D }, 
  { 0x00079, 0x1D59E }, 
  { 0x0007A, 0x1D59F }, 
  { 0, 0 }
};

Char32 
map_variant_bold_fraktur
(Char32 ch)
{
  if (ch >= 0x0041 and ch <= 0x005A) return table[ch - 0x0041].variant;
  if (ch >= 0x0061 and ch <= 0x007A) return table[ch - 0x0047].variant;
  return ch;
}
