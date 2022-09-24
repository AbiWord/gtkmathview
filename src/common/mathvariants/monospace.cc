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
  { 0x00030, 0x1D7F6 }, 
  { 0x00031, 0x1D7F7 }, 
  { 0x00032, 0x1D7F8 }, 
  { 0x00033, 0x1D7F9 }, 
  { 0x00034, 0x1D7FA }, 
  { 0x00035, 0x1D7FB }, 
  { 0x00036, 0x1D7FC }, 
  { 0x00037, 0x1D7FD }, 
  { 0x00038, 0x1D7FE }, 
  { 0x00039, 0x1D7FF }, 
  { 0x00041, 0x1D670 }, 
  { 0x00042, 0x1D671 }, 
  { 0x00043, 0x1D672 }, 
  { 0x00044, 0x1D673 }, 
  { 0x00045, 0x1D674 }, 
  { 0x00046, 0x1D675 }, 
  { 0x00047, 0x1D676 }, 
  { 0x00048, 0x1D677 }, 
  { 0x00049, 0x1D678 }, 
  { 0x0004A, 0x1D679 }, 
  { 0x0004B, 0x1D67A }, 
  { 0x0004C, 0x1D67B }, 
  { 0x0004D, 0x1D67C }, 
  { 0x0004E, 0x1D67D }, 
  { 0x0004F, 0x1D67E }, 
  { 0x00050, 0x1D67F }, 
  { 0x00051, 0x1D680 }, 
  { 0x00052, 0x1D681 }, 
  { 0x00053, 0x1D682 }, 
  { 0x00054, 0x1D683 }, 
  { 0x00055, 0x1D684 }, 
  { 0x00056, 0x1D685 }, 
  { 0x00057, 0x1D686 }, 
  { 0x00058, 0x1D687 }, 
  { 0x00059, 0x1D688 }, 
  { 0x0005A, 0x1D689 }, 
  { 0x00061, 0x1D68A }, 
  { 0x00062, 0x1D68B }, 
  { 0x00063, 0x1D68C }, 
  { 0x00064, 0x1D68D }, 
  { 0x00065, 0x1D68E }, 
  { 0x00066, 0x1D68F }, 
  { 0x00067, 0x1D690 }, 
  { 0x00068, 0x1D691 }, 
  { 0x00069, 0x1D692 }, 
  { 0x0006A, 0x1D693 }, 
  { 0x0006B, 0x1D694 }, 
  { 0x0006C, 0x1D695 }, 
  { 0x0006D, 0x1D696 }, 
  { 0x0006E, 0x1D697 }, 
  { 0x0006F, 0x1D698 }, 
  { 0x00070, 0x1D699 }, 
  { 0x00071, 0x1D69A }, 
  { 0x00072, 0x1D69B }, 
  { 0x00073, 0x1D69C }, 
  { 0x00074, 0x1D69D }, 
  { 0x00075, 0x1D69E }, 
  { 0x00076, 0x1D69F }, 
  { 0x00077, 0x1D6A0 }, 
  { 0x00078, 0x1D6A1 }, 
  { 0x00079, 0x1D6A2 }, 
  { 0x0007A, 0x1D6A3 }, 
  { 0, 0 }
};

Char32 
map_variant_monospace
(Char32 ch)
{
  if (ch >= 0x0030 and ch <= 0x0039) return table[ch - 0x0030].variant;
  if (ch >= 0x0041 and ch <= 0x005A) return table[ch - 0x0037].variant;
  if (ch >= 0x0061 and ch <= 0x007A) return table[ch - 0x003D].variant;
  return ch;
}
