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
  { 0x00041, 0x1D504 }, 
  { 0x00042, 0x1D505 }, 
  { 0x00043, 0x0212D }, 
  { 0x00044, 0x1D507 }, 
  { 0x00045, 0x1D508 }, 
  { 0x00046, 0x1D509 }, 
  { 0x00047, 0x1D50A }, 
  { 0x00048, 0x0210C }, 
  { 0x00049, 0x02111 }, 
  { 0x0004A, 0x1D50D }, 
  { 0x0004B, 0x1D50E }, 
  { 0x0004C, 0x1D50F }, 
  { 0x0004D, 0x1D510 }, 
  { 0x0004E, 0x1D511 }, 
  { 0x0004F, 0x1D512 }, 
  { 0x00050, 0x1D513 }, 
  { 0x00051, 0x1D514 }, 
  { 0x00052, 0x0211C }, 
  { 0x00053, 0x1D516 }, 
  { 0x00054, 0x1D517 }, 
  { 0x00055, 0x1D518 }, 
  { 0x00056, 0x1D519 }, 
  { 0x00057, 0x1D51A }, 
  { 0x00058, 0x1D51B }, 
  { 0x00059, 0x1D51C }, 
  { 0x0005A, 0x02128 }, 
  { 0x00061, 0x1D51E }, 
  { 0x00062, 0x1D51F }, 
  { 0x00063, 0x1D520 }, 
  { 0x00064, 0x1D521 }, 
  { 0x00065, 0x1D522 }, 
  { 0x00066, 0x1D523 }, 
  { 0x00067, 0x1D524 }, 
  { 0x00068, 0x1D525 }, 
  { 0x00069, 0x1D526 }, 
  { 0x0006A, 0x1D527 }, 
  { 0x0006B, 0x1D528 }, 
  { 0x0006C, 0x1D529 }, 
  { 0x0006D, 0x1D52A }, 
  { 0x0006E, 0x1D52B }, 
  { 0x0006F, 0x1D52C }, 
  { 0x00070, 0x1D52D }, 
  { 0x00071, 0x1D52E }, 
  { 0x00072, 0x1D52F }, 
  { 0x00073, 0x1D530 }, 
  { 0x00074, 0x1D531 }, 
  { 0x00075, 0x1D532 }, 
  { 0x00076, 0x1D533 }, 
  { 0x00077, 0x1D534 }, 
  { 0x00078, 0x1D535 }, 
  { 0x00079, 0x1D536 }, 
  { 0x0007A, 0x1D537 }, 
  { 0, 0 }
};

Char32 
map_variant_fraktur
(Char32 ch)
{
  if (ch >= 0x0041 and ch <= 0x005A) return table[ch - 0x0041].variant;
  if (ch >= 0x0061 and ch <= 0x007A) return table[ch - 0x0047].variant;
  return ch;
}
