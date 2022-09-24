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
  { 0x00041, 0x1D4D0 }, 
  { 0x00042, 0x1D4D1 }, 
  { 0x00043, 0x1D4D2 }, 
  { 0x00044, 0x1D4D3 }, 
  { 0x00045, 0x1D4D4 }, 
  { 0x00046, 0x1D4D5 }, 
  { 0x00047, 0x1D4D6 }, 
  { 0x00048, 0x1D4D7 }, 
  { 0x00049, 0x1D4D8 }, 
  { 0x0004A, 0x1D4D9 }, 
  { 0x0004B, 0x1D4DA }, 
  { 0x0004C, 0x1D4DB }, 
  { 0x0004D, 0x1D4DC }, 
  { 0x0004E, 0x1D4DD }, 
  { 0x0004F, 0x1D4DE }, 
  { 0x00050, 0x1D4DF }, 
  { 0x00051, 0x1D4E0 }, 
  { 0x00052, 0x1D4E1 }, 
  { 0x00053, 0x1D4E2 }, 
  { 0x00054, 0x1D4E3 }, 
  { 0x00055, 0x1D4E4 }, 
  { 0x00056, 0x1D4E5 }, 
  { 0x00057, 0x1D4E6 }, 
  { 0x00058, 0x1D4E7 }, 
  { 0x00059, 0x1D4E8 }, 
  { 0x0005A, 0x1D4E9 }, 
  { 0x00061, 0x1D4EA }, 
  { 0x00062, 0x1D4EB }, 
  { 0x00063, 0x1D4EC }, 
  { 0x00064, 0x1D4ED }, 
  { 0x00065, 0x1D4EE }, 
  { 0x00066, 0x1D4EF }, 
  { 0x00067, 0x1D4F0 }, 
  { 0x00068, 0x1D4F1 }, 
  { 0x00069, 0x1D4F2 }, 
  { 0x0006A, 0x1D4F3 }, 
  { 0x0006B, 0x1D4F4 }, 
  { 0x0006C, 0x1D4F5 }, 
  { 0x0006D, 0x1D4F6 }, 
  { 0x0006E, 0x1D4F7 }, 
  { 0x0006F, 0x1D4F8 }, 
  { 0x00070, 0x1D4F9 }, 
  { 0x00071, 0x1D4FA }, 
  { 0x00072, 0x1D4FB }, 
  { 0x00073, 0x1D4FC }, 
  { 0x00074, 0x1D4FD }, 
  { 0x00075, 0x1D4FE }, 
  { 0x00076, 0x1D4FF }, 
  { 0x00077, 0x1D500 }, 
  { 0x00078, 0x1D501 }, 
  { 0x00079, 0x1D502 }, 
  { 0x0007A, 0x1D503 }, 
  { 0, 0 }
};

Char32 
map_variant_bold_script
(Char32 ch)
{
  if (ch >= 0x0041 and ch <= 0x005A) return table[ch - 0x0041].variant;
  if (ch >= 0x0061 and ch <= 0x007A) return table[ch - 0x0047].variant;
  return ch;
}
