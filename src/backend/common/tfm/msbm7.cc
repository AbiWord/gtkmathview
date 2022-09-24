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

#include "TFM.hh"

static TFM::Font font = {
"MSBM",

  0xf0,
  "TeX math symbols",
  0x00700000,
  0x7179c081,
  22,
  128
};

static TFM::Dimension dimension[] = {
  { 0x01, "slant", 0x00040000 },
  { 0x02, "space", 0x0004ccd0 },
  { 0x03, "space_stretch", 0x00026660 },
  { 0x04, "space_shrink", 0x000199a0 },
  { 0x05, "x_height", 0x00076847 },
  { 0x06, "quad", 0x00100000 },
  { 0x07, "extra_space", 0x000199a0 },
  { 0x08, "num1", 0x000bb78e },
  { 0x09, "num2", 0x00062477 },
  { 0x0a, "num3", 0x00078a0e },
  { 0x0b, "denom1", 0x000c08ce },
  { 0x0c, "denom2", 0x000581e7 },
  { 0x0d, "sup1", 0x00080a6b },
  { 0x0e, "sup2", 0x0006e5d9 },
  { 0x0f, "sup3", 0x00049249 },
  { 0x10, "sub1", 0x00024925 },
  { 0x11, "sub2", 0x00049249 },
  { 0x12, "supdrop", 0x0005a697 },
  { 0x13, "subdrop", 0x00012492 },
  { 0x14, "delim1", 0x001b3332 },
  { 0x15, "delim2", 0x001283a9 },
  { 0x16, "axis_height", 0x00040000 }
};



static TFM::Character character[] = {
  { 0x00, 0x000e4929, 0x000d3219, 0x00051cdb, 0x00000000, 0, 0, 0, 0 },
  { 0x01, 0x000e4929, 0x000d3219, 0x00051cdb, 0x00000000, 0, 0, 0, 0 },
  { 0x02, 0x000e4929, 0x000df3a9, 0x0005f3a9, 0x00000000, 0, 0, 0, 0 },
  { 0x03, 0x000e4929, 0x000df3a9, 0x0005f3a9, 0x00000000, 0, 0, 0, 0 },
  { 0x04, 0x000e4929, 0x000c14e2, 0x000414e2, 0x00000000, 0, 0, 0, 0 },
  { 0x05, 0x000e4929, 0x000c14e2, 0x000414e2, 0x00000000, 0, 0, 0, 0 },
  { 0x06, 0x000e4929, 0x000c14e2, 0x000414e2, 0x00000000, 0, 0, 0, 0 },
  { 0x07, 0x000e4929, 0x000c14e2, 0x000414e2, 0x00000000, 0, 0, 0, 0 },
  { 0x08, 0x000e4929, 0x000d3219, 0x00051cdb, 0x00000000, 0, 0, 0, 0 },
  { 0x09, 0x000e4929, 0x000d3219, 0x00051cdb, 0x00000000, 0, 0, 0, 0 },
  { 0x0a, 0x000e4929, 0x000df3a9, 0x0005f3a9, 0x00000000, 0, 0, 0, 0 },
  { 0x0b, 0x000e4929, 0x000df3a9, 0x0005f3a9, 0x00000000, 0, 0, 0, 0 },
  { 0x0c, 0x000e4929, 0x000b05b0, 0x00030a10, 0x00000000, 0, 0, 0, 0 },
  { 0x0d, 0x000e4929, 0x000b05b0, 0x00030a10, 0x00000000, 0, 0, 0, 0 },
  { 0x0e, 0x000e4929, 0x000df3a9, 0x0005f3a9, 0x00000000, 0, 0, 0, 0 },
  { 0x0f, 0x000e4929, 0x000df3a9, 0x0005f3a9, 0x00000000, 0, 0, 0, 0 },
  { 0x10, 0x000e4929, 0x000c75a7, 0x000475a7, 0x00000000, 0, 0, 0, 0 },
  { 0x11, 0x000e4929, 0x000cafd9, 0x0004afd9, 0x00000000, 0, 0, 0, 0 },
  { 0x12, 0x000e4929, 0x000c75a7, 0x000475a7, 0x00000000, 0, 0, 0, 0 },
  { 0x13, 0x000e4929, 0x000cafd9, 0x0004afd9, 0x00000000, 0, 0, 0, 0 },
  { 0x14, 0x000e4929, 0x001010ab, 0x000810ab, 0x00000000, 0, 0, 0, 0 },
  { 0x15, 0x000e4929, 0x001010ab, 0x000810ab, 0x00000000, 0, 0, 0, 0 },
  { 0x16, 0x000e4929, 0x000d3219, 0x00051cdb, 0x00000000, 0, 0, 0, 0 },
  { 0x17, 0x000e4929, 0x000d3219, 0x00051cdb, 0x00000000, 0, 0, 0, 0 },
  { 0x18, 0x000e4929, 0x000d3219, 0x00054759, 0x00000000, 0, 0, 0, 0 },
  { 0x19, 0x000e4929, 0x000d3219, 0x00054759, 0x00000000, 0, 0, 0, 0 },
  { 0x1a, 0x000e4929, 0x000d3219, 0x00054759, 0x00000000, 0, 0, 0, 0 },
  { 0x1b, 0x000e4929, 0x000d3219, 0x00054759, 0x00000000, 0, 0, 0, 0 },
  { 0x1c, 0x000e4929, 0x00062530, 0xfffe2530, 0x00000000, 0, 0, 0, 0 },
  { 0x1d, 0x000e4929, 0x000df3a9, 0x0005f3a9, 0x00000000, 0, 0, 0, 0 },
  { 0x1e, 0x00104109, 0x000b05b0, 0x00030a10, 0x00000000, 0, 0, 0, 0 },
  { 0x1f, 0x00104109, 0x000c14e2, 0x00030a10, 0x00000000, 0, 0, 0, 0 },
  { 0x20, 0x000e4929, 0x000b05b0, 0x00030a10, 0x00000000, 0, 0, 0, 0 },
  { 0x21, 0x000e4929, 0x000b05b0, 0x00030a10, 0x00000000, 0, 0, 0, 0 },
  { 0x22, 0x000e4929, 0x000d3219, 0x00051cdb, 0x00000000, 0, 0, 0, 0 },
  { 0x23, 0x000e4929, 0x000d3219, 0x00051cdb, 0x00000000, 0, 0, 0, 0 },
  { 0x24, 0x000e4929, 0x000db145, 0x0005b145, 0x00000000, 0, 0, 0, 0 },
  { 0x25, 0x000e4929, 0x000db145, 0x0005b145, 0x00000000, 0, 0, 0, 0 },
  { 0x26, 0x000e4929, 0x000d3219, 0x00051cdb, 0x00000000, 0, 0, 0, 0 },
  { 0x27, 0x000e4929, 0x000d3219, 0x00051cdb, 0x00000000, 0, 0, 0, 0 },
  { 0x28, 0x000e4929, 0x000b05b0, 0x00030a10, 0x00000000, 0, 0, 0, 0 },
  { 0x29, 0x000e4929, 0x000b05b0, 0x00030a10, 0x00000000, 0, 0, 0, 0 },
  { 0x2a, 0x000e4929, 0x000df3a9, 0x0005f3a9, 0x00000000, 0, 0, 0, 0 },
  { 0x2b, 0x000e4929, 0x000df3a9, 0x0005f3a9, 0x00000000, 0, 0, 0, 0 },
  { 0x2c, 0x00095d79, 0x000c14e2, 0x000414e2, 0x00000000, 0, 0, 0, 0 },
  { 0x2d, 0x00056db9, 0x000c14e2, 0x000414e2, 0x00000000, 0, 0, 0, 0 },
  { 0x2e, 0x000471c9, 0x0009f515, 0x0001f515, 0x00000000, 0, 0, 0, 0 },
  { 0x2f, 0x00076599, 0x0009f515, 0x0001f515, 0x00000000, 0, 0, 0, 0 },
  { 0x30, 0x000b5559, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x31, 0x000d4d39, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x32, 0x000b5559, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x33, 0x000d4d39, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x34, 0x000e4929, 0x000df3a9, 0x0005f3a9, 0x00000000, 0, 0, 0, 0 },
  { 0x35, 0x000e4929, 0x000df3a9, 0x0005f3a9, 0x00000000, 0, 0, 0, 0 },
  { 0x36, 0x000e4929, 0x000c14e2, 0x000414e2, 0x00000000, 0, 0, 0, 0 },
  { 0x37, 0x000e4929, 0x000c14e2, 0x000414e2, 0x00000000, 0, 0, 0, 0 },
  { 0x38, 0x001238e9, 0x00062530, 0xfffe2530, 0x00000000, 0, 0, 0, 0 },
  { 0x39, 0x001238e9, 0x00062530, 0xfffe2530, 0x00000000, 0, 0, 0, 0 },
  { 0x3a, 0x001238e9, 0x00062530, 0xfffe2530, 0x00000000, 0, 0, 0, 0 },
  { 0x3b, 0x001238e9, 0x00062530, 0xfffe2530, 0x00000000, 0, 0, 0, 0 },
  { 0x3c, 0x001238e9, 0x00062530, 0xfffe2530, 0x00000000, 0, 0, 0, 0 },
  { 0x3d, 0x001238e9, 0x00062530, 0xfffe2530, 0x00000000, 0, 0, 0, 0 },
  { 0x3e, 0x000e4929, 0x0009f515, 0x0001f515, 0x00000000, 0, 0, 0, 0 },
  { 0x3f, 0x000e4929, 0x0009f515, 0x0001f515, 0x00000000, 0, 0, 0, 0 },
  { 0x40, 0x000a5969, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x41, 0x000b8e32, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x42, 0x000aaaa5, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x43, 0x000b8e32, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x44, 0x000b8e32, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x45, 0x000aaaa5, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x46, 0x0009c717, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x47, 0x000c71c0, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x48, 0x000c71c0, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x49, 0x000638e0, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x4a, 0x0007fffb, 0x000b05b0, 0x0002aaa9, 0x00000000, 0, 0, 0, 0 },
  { 0x4b, 0x000c71c0, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x4c, 0x000aaaa5, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x4d, 0x000f1c69, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x4e, 0x000b8e32, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x4f, 0x000c71c0, 0x000b05b0, 0x0002aaa9, 0x00000000, 0, 0, 0, 0 },
  { 0x50, 0x0009c717, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x51, 0x000c71c0, 0x000b05b0, 0x0002aaa9, 0x00000000, 0, 0, 0, 0 },
  { 0x52, 0x000b8e32, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x53, 0x0008e389, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x54, 0x000aaaa5, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x55, 0x000b8e32, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x56, 0x000b8e32, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x57, 0x000ffff7, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x58, 0x000b8e32, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x59, 0x000b8e32, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x5a, 0x000aaaa5, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x5b, 0x0021f7e9, 0x000d3219, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x5c, 0x0029d769, 0x000d3219, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x5d, 0x0021f7e9, 0x000d3219, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x5e, 0x0029d769, 0x000e6665, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x5f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x60, 0x000a5969, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x61, 0x000bd350, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x62, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x63, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x64, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x65, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x66, 0x000d4d39, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x67, 0x000a5969, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x68, 0x000e4929, 0x0007e6e5, 0xffffe6e5, 0x00000000, 0, 0, 0, 0 },
  { 0x69, 0x000c5149, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x6a, 0x00086189, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x6b, 0x000c5149, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x6c, 0x000e4929, 0x000935f7, 0x000135f7, 0x00000000, 0, 0, 0, 0 },
  { 0x6d, 0x000e4929, 0x000935f7, 0x000135f7, 0x00000000, 0, 0, 0, 0 },
  { 0x6e, 0x000e4929, 0x0009f515, 0x0001f515, 0x00000000, 0, 0, 0, 0 },
  { 0x6f, 0x000e4929, 0x0009f515, 0x0001f515, 0x00000000, 0, 0, 0, 0 },
  { 0x70, 0x000471c9, 0x0009f515, 0x0001f515, 0x00000000, 0, 0, 0, 0 },
  { 0x71, 0x00076599, 0x0009f515, 0x0001f515, 0x00000000, 0, 0, 0, 0 },
  { 0x72, 0x000e4929, 0x0009f515, 0x0001f515, 0x00000000, 0, 0, 0, 0 },
  { 0x73, 0x000e4929, 0x00062530, 0xfffe2530, 0x00000000, 0, 0, 0, 0 },
  { 0x74, 0x000e4929, 0x000840d5, 0x000040d5, 0x00000000, 0, 0, 0, 0 },
  { 0x75, 0x000e4929, 0x0009f515, 0x0001f515, 0x00000000, 0, 0, 0, 0 },
  { 0x76, 0x000e4929, 0x000d3219, 0x00054759, 0x00000000, 0, 0, 0, 0 },
  { 0x77, 0x000e4929, 0x000d3219, 0x00054759, 0x00000000, 0, 0, 0, 0 },
  { 0x78, 0x001238e9, 0x0006e38e, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x79, 0x001238e9, 0x0006e38e, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x7a, 0x000e4929, 0x0009f515, 0x0001f515, 0x00000000, 0, 0, 0, 0 },
  { 0x7b, 0x000c5149, 0x0006e38e, 0x00000000, 0x0000c30e, 0, 0, 0, 0 },
  { 0x7c, 0x0008e389, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x7d, 0x000a2087, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x7e, 0x000a2087, 0x000b05b0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x7f, 0x00081c75, 0x0006e38e, 0x00000000, 0x00000000, 0, 0, 0, 0 }
};

void
msbm7_tables(TFM::Font*& _font, TFM::Dimension*& _dimension, TFM::Character*& _character)
{
  _font = &font;
  _dimension = dimension;
  _character = character;
}