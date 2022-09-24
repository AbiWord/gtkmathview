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
  { 0x00041, 0x1D49C }, 
  { 0x00042, 0x0212C }, 
  { 0x00043, 0x1D49E }, 
  { 0x00044, 0x1D49F }, 
  { 0x00045, 0x02130 }, 
  { 0x00046, 0x02131 }, 
  { 0x00047, 0x1D4A2 }, 
  { 0x00048, 0x0210B }, 
  { 0x00049, 0x02110 }, 
  { 0x0004A, 0x1D4A5 }, 
  { 0x0004B, 0x1D4A6 }, 
  { 0x0004C, 0x02112 }, 
  { 0x0004D, 0x02133 }, 
  { 0x0004E, 0x1D4A9 }, 
  { 0x0004F, 0x1D4AA }, 
  { 0x00050, 0x1D4AB }, 
  { 0x00051, 0x1D4AC }, 
  { 0x00052, 0x0211B }, 
  { 0x00053, 0x1D4AE }, 
  { 0x00054, 0x1D4AF }, 
  { 0x00055, 0x1D4B0 }, 
  { 0x00056, 0x1D4B1 }, 
  { 0x00057, 0x1D4B2 }, 
  { 0x00058, 0x1D4B3 }, 
  { 0x00059, 0x1D4B4 }, 
  { 0x0005A, 0x1D4B5 }, 
  { 0x00061, 0x1D4B6 }, 
  { 0x00062, 0x1D4B7 }, 
  { 0x00063, 0x1D4B8 }, 
  { 0x00064, 0x1D4B9 }, 
  { 0x00065, 0x0212F }, 
  { 0x00066, 0x1D4BB }, 
  { 0x00067, 0x0210A }, 
  { 0x00068, 0x1D4BD }, 
  { 0x00069, 0x1D4BE }, 
  { 0x0006A, 0x1D4BF }, 
  { 0x0006B, 0x1D4C0 }, 
  { 0x0006C, 0x02113 }, 
  { 0x0006D, 0x1D4C2 }, 
  { 0x0006E, 0x1D4C3 }, 
  { 0x0006F, 0x02134 }, 
  { 0x00070, 0x1D4C5 }, 
  { 0x00071, 0x1D4C6 }, 
  { 0x00072, 0x1D4C7 }, 
  { 0x00073, 0x1D4C8 }, 
  { 0x00074, 0x1D4C9 }, 
  { 0x00075, 0x1D4CA }, 
  { 0x00076, 0x1D4CB }, 
  { 0x00077, 0x1D4CC }, 
  { 0x00078, 0x1D4CD }, 
  { 0x00079, 0x1D4CE }, 
  { 0x0007A, 0x1D4CF }, 
  { 0, 0 }
};

Char32 
map_variant_script
(Char32 ch)
{
  if (ch >= 0x0041 and ch <= 0x005A) return table[ch - 0x0041].variant;
  if (ch >= 0x0061 and ch <= 0x007A) return table[ch - 0x0047].variant;
  return ch;
}
