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
  { 0x00030, 0x1D7E2 }, 
  { 0x00031, 0x1D7E3 }, 
  { 0x00032, 0x1D7E4 }, 
  { 0x00033, 0x1D7E5 }, 
  { 0x00034, 0x1D7E6 }, 
  { 0x00035, 0x1D7E7 }, 
  { 0x00036, 0x1D7E8 }, 
  { 0x00037, 0x1D7E9 }, 
  { 0x00038, 0x1D7EA }, 
  { 0x00039, 0x1D7EB }, 
  { 0x00041, 0x1D5A0 }, 
  { 0x00042, 0x1D5A1 }, 
  { 0x00043, 0x1D5A2 }, 
  { 0x00044, 0x1D5A3 }, 
  { 0x00045, 0x1D5A4 }, 
  { 0x00046, 0x1D5A5 }, 
  { 0x00047, 0x1D5A6 }, 
  { 0x00048, 0x1D5A7 }, 
  { 0x00049, 0x1D5A8 }, 
  { 0x0004A, 0x1D5A9 }, 
  { 0x0004B, 0x1D5AA }, 
  { 0x0004C, 0x1D5AB }, 
  { 0x0004D, 0x1D5AC }, 
  { 0x0004E, 0x1D5AD }, 
  { 0x0004F, 0x1D5AE }, 
  { 0x00050, 0x1D5AF }, 
  { 0x00051, 0x1D5B0 }, 
  { 0x00052, 0x1D5B1 }, 
  { 0x00053, 0x1D5B2 }, 
  { 0x00054, 0x1D5B3 }, 
  { 0x00055, 0x1D5B4 }, 
  { 0x00056, 0x1D5B5 }, 
  { 0x00057, 0x1D5B6 }, 
  { 0x00058, 0x1D5B7 }, 
  { 0x00059, 0x1D5B8 }, 
  { 0x0005A, 0x1D5B9 }, 
  { 0x00061, 0x1D5BA }, 
  { 0x00062, 0x1D5BB }, 
  { 0x00063, 0x1D5BC }, 
  { 0x00064, 0x1D5BD }, 
  { 0x00065, 0x1D5BE }, 
  { 0x00066, 0x1D5BF }, 
  { 0x00067, 0x1D5C0 }, 
  { 0x00068, 0x1D5C1 }, 
  { 0x00069, 0x1D5C2 }, 
  { 0x0006A, 0x1D5C3 }, 
  { 0x0006B, 0x1D5C4 }, 
  { 0x0006C, 0x1D5C5 }, 
  { 0x0006D, 0x1D5C6 }, 
  { 0x0006E, 0x1D5C7 }, 
  { 0x0006F, 0x1D5C8 }, 
  { 0x00070, 0x1D5C9 }, 
  { 0x00071, 0x1D5CA }, 
  { 0x00072, 0x1D5CB }, 
  { 0x00073, 0x1D5CC }, 
  { 0x00074, 0x1D5CD }, 
  { 0x00075, 0x1D5CE }, 
  { 0x00076, 0x1D5CF }, 
  { 0x00077, 0x1D5D0 }, 
  { 0x00078, 0x1D5D1 }, 
  { 0x00079, 0x1D5D2 }, 
  { 0x0007A, 0x1D5D3 }, 
  { 0, 0 }
};

Char32 
map_variant_sans_serif
(Char32 ch)
{
  if (ch >= 0x0030 and ch <= 0x0039) return table[ch - 0x0030].variant;
  if (ch >= 0x0041 and ch <= 0x005A) return table[ch - 0x0037].variant;
  if (ch >= 0x0061 and ch <= 0x007A) return table[ch - 0x003D].variant;
  return ch;
}
