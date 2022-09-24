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
"CMR",

  0xf4,
  "TeX text without f-ligatures",
  0x00500000,
  0x86039b5a,
  7,
  128
};

static TFM::Dimension dimension[] = {
  { 0x01, "slant", 0x00000000 },
  { 0x02, "space", 0x00078e40 },
  { 0x03, "space_stretch", 0x0003555a },
  { 0x04, "space_shrink", 0x000238e6 },
  { 0x05, "x_height", 0x0006e38d },
  { 0x06, "quad", 0x0015c733 },
  { 0x07, "extra_space", 0x000238e6 }
};


static TFM::Kerning C_20_Kerning[] = {
  { 0x4c, 0xfff8d276 },
  { 0x6c, 0xfff98e33 }
};

static TFM::Kerning C_27_Kerning[] = {
  { 0x21, 0x000238e6 },
  { 0x3f, 0x000238e6 }
};

static TFM::Kerning C_41_Kerning[] = {
  { 0x43, 0xffff71c6 },
  { 0x47, 0xffff71c6 },
  { 0x4f, 0xffff71c6 },
  { 0x51, 0xffff71c6 },
  { 0x54, 0xfffe5553 },
  { 0x55, 0xffff71c6 },
  { 0x56, 0xfffdc71a },
  { 0x57, 0xfffdc71a },
  { 0x59, 0xfffe5553 },
  { 0x74, 0xffff71c6 }
};

static TFM::Kerning C_44_Kerning[] = {
  { 0x41, 0xffff71c6 },
  { 0x56, 0xffff71c6 },
  { 0x57, 0xffff71c6 },
  { 0x58, 0xffff71c6 },
  { 0x59, 0xffff71c6 }
};

static TFM::Kerning C_46_Kerning[] = {
  { 0x41, 0xfffdc71a },
  { 0x43, 0xffff71c6 },
  { 0x47, 0xffff71c6 },
  { 0x4f, 0xffff71c6 },
  { 0x51, 0xffff71c6 },
  { 0x61, 0xfffe5553 },
  { 0x65, 0xfffe5553 },
  { 0x6f, 0xfffe5553 },
  { 0x72, 0xfffe5553 },
  { 0x75, 0xfffe5553 }
};

static TFM::Kerning C_49_Kerning[] = {
  { 0x49, 0x00008e3a }
};

static TFM::Kerning C_4b_Kerning[] = {
  { 0x43, 0xffff71c6 },
  { 0x47, 0xffff71c6 },
  { 0x4f, 0xffff71c6 },
  { 0x51, 0xffff71c6 }
};

static TFM::Kerning C_4c_Kerning[] = {
  { 0x54, 0xfffe5553 },
  { 0x56, 0xfffdc71a },
  { 0x57, 0xfffdc71a },
  { 0x59, 0xfffe5553 }
};

static TFM::Kerning C_4f_Kerning[] = {
  { 0x41, 0xffff71c6 },
  { 0x56, 0xffff71c6 },
  { 0x57, 0xffff71c6 },
  { 0x58, 0xffff71c6 },
  { 0x59, 0xffff71c6 }
};

static TFM::Kerning C_50_Kerning[] = {
  { 0x2c, 0xfffe5553 },
  { 0x2e, 0xfffe5553 },
  { 0x41, 0xfffe5553 },
  { 0x61, 0xffff71c6 },
  { 0x65, 0xffff71c6 },
  { 0x6f, 0xffff71c6 }
};

static TFM::Kerning C_52_Kerning[] = {
  { 0x43, 0xffff71c6 },
  { 0x47, 0xffff71c6 },
  { 0x4f, 0xffff71c6 },
  { 0x51, 0xffff71c6 },
  { 0x54, 0xfffe5553 },
  { 0x55, 0xffff71c6 },
  { 0x56, 0xfffdc71a },
  { 0x57, 0xfffdc71a },
  { 0x59, 0xfffe5553 },
  { 0x74, 0xffff71c6 }
};

static TFM::Kerning C_54_Kerning[] = {
  { 0x41, 0xfffe5553 },
  { 0x61, 0xfffe5553 },
  { 0x65, 0xfffe5553 },
  { 0x6f, 0xfffe5553 },
  { 0x72, 0xfffe5553 },
  { 0x75, 0xfffe5553 },
  { 0x79, 0xffff71c6 }
};

static TFM::Kerning C_56_Kerning[] = {
  { 0x41, 0xfffdc71a },
  { 0x43, 0xffff71c6 },
  { 0x47, 0xffff71c6 },
  { 0x4f, 0xffff71c6 },
  { 0x51, 0xffff71c6 },
  { 0x61, 0xfffe5553 },
  { 0x65, 0xfffe5553 },
  { 0x6f, 0xfffe5553 },
  { 0x72, 0xfffe5553 },
  { 0x75, 0xfffe5553 }
};

static TFM::Kerning C_57_Kerning[] = {
  { 0x41, 0xfffdc71a },
  { 0x43, 0xffff71c6 },
  { 0x47, 0xffff71c6 },
  { 0x4f, 0xffff71c6 },
  { 0x51, 0xffff71c6 },
  { 0x61, 0xfffe5553 },
  { 0x65, 0xfffe5553 },
  { 0x6f, 0xfffe5553 },
  { 0x72, 0xfffe5553 },
  { 0x75, 0xfffe5553 }
};

static TFM::Kerning C_58_Kerning[] = {
  { 0x43, 0xffff71c6 },
  { 0x47, 0xffff71c6 },
  { 0x4f, 0xffff71c6 },
  { 0x51, 0xffff71c6 }
};

static TFM::Kerning C_59_Kerning[] = {
  { 0x41, 0xfffe5553 },
  { 0x61, 0xfffe5553 },
  { 0x65, 0xfffe5553 },
  { 0x6f, 0xfffe5553 },
  { 0x72, 0xfffe5553 },
  { 0x75, 0xfffe5553 }
};

static TFM::Kerning C_61_Kerning[] = {
  { 0x6a, 0x00011c73 },
  { 0x76, 0xffff71c6 },
  { 0x77, 0xffff71c6 },
  { 0x79, 0xffff71c6 }
};

static TFM::Kerning C_62_Kerning[] = {
  { 0x63, 0x00008e3a },
  { 0x64, 0x00008e3a },
  { 0x65, 0x00008e3a },
  { 0x6a, 0x00011c73 },
  { 0x6f, 0x00008e3a },
  { 0x71, 0x00008e3a },
  { 0x76, 0xffff71c6 },
  { 0x77, 0xffff71c6 },
  { 0x78, 0xffff71c6 },
  { 0x79, 0xffff71c6 }
};

static TFM::Kerning C_63_Kerning[] = {
  { 0x68, 0xffff71c6 },
  { 0x6b, 0xffff71c6 }
};

static TFM::Kerning C_67_Kerning[] = {
  { 0x6a, 0x00008e3a }
};

static TFM::Kerning C_68_Kerning[] = {
  { 0x62, 0xffff71c6 },
  { 0x74, 0xffff71c6 },
  { 0x75, 0xffff71c6 },
  { 0x76, 0xffff71c6 },
  { 0x77, 0xffff71c6 },
  { 0x79, 0xffff71c6 }
};

static TFM::Kerning C_6b_Kerning[] = {
  { 0x61, 0xfffee38d },
  { 0x61, 0xffff71c6 },
  { 0x63, 0xffff71c6 },
  { 0x65, 0xffff71c6 },
  { 0x6f, 0xffff71c6 }
};

static TFM::Kerning C_6d_Kerning[] = {
  { 0x62, 0xffff71c6 },
  { 0x74, 0xffff71c6 },
  { 0x75, 0xffff71c6 },
  { 0x76, 0xffff71c6 },
  { 0x77, 0xffff71c6 },
  { 0x79, 0xffff71c6 }
};

static TFM::Kerning C_6e_Kerning[] = {
  { 0x62, 0xffff71c6 },
  { 0x74, 0xffff71c6 },
  { 0x75, 0xffff71c6 },
  { 0x76, 0xffff71c6 },
  { 0x77, 0xffff71c6 },
  { 0x79, 0xffff71c6 }
};

static TFM::Kerning C_6f_Kerning[] = {
  { 0x63, 0x00008e3a },
  { 0x64, 0x00008e3a },
  { 0x65, 0x00008e3a },
  { 0x6a, 0x00011c73 },
  { 0x6f, 0x00008e3a },
  { 0x71, 0x00008e3a },
  { 0x76, 0xffff71c6 },
  { 0x77, 0xffff71c6 },
  { 0x78, 0xffff71c6 },
  { 0x79, 0xffff71c6 }
};

static TFM::Kerning C_70_Kerning[] = {
  { 0x63, 0x00008e3a },
  { 0x64, 0x00008e3a },
  { 0x65, 0x00008e3a },
  { 0x6a, 0x00011c73 },
  { 0x6f, 0x00008e3a },
  { 0x71, 0x00008e3a },
  { 0x76, 0xffff71c6 },
  { 0x77, 0xffff71c6 },
  { 0x78, 0xffff71c6 },
  { 0x79, 0xffff71c6 }
};

static TFM::Kerning C_74_Kerning[] = {
  { 0x77, 0xffff71c6 },
  { 0x79, 0xffff71c6 }
};

static TFM::Kerning C_75_Kerning[] = {
  { 0x77, 0xffff71c6 }
};

static TFM::Kerning C_76_Kerning[] = {
  { 0x61, 0xfffee38d },
  { 0x61, 0xffff71c6 },
  { 0x63, 0xffff71c6 },
  { 0x65, 0xffff71c6 },
  { 0x6f, 0xffff71c6 }
};

static TFM::Kerning C_77_Kerning[] = {
  { 0x61, 0xffff71c6 },
  { 0x63, 0xffff71c6 },
  { 0x65, 0xffff71c6 },
  { 0x6f, 0xffff71c6 }
};

static TFM::Kerning C_79_Kerning[] = {
  { 0x2c, 0xfffe5553 },
  { 0x2e, 0xfffe5553 },
  { 0x61, 0xffff71c6 },
  { 0x65, 0xffff71c6 },
  { 0x6f, 0xffff71c6 }
};

static TFM::Ligature C_21_Ligature[] = {
  { 0x60, 0x00, 0x0e }
};

static TFM::Ligature C_27_Ligature[] = {
  { 0x27, 0x00, 0x22 }
};

static TFM::Ligature C_2d_Ligature[] = {
  { 0x2d, 0x00, 0x7b }
};

static TFM::Ligature C_3f_Ligature[] = {
  { 0x60, 0x00, 0x0f }
};

static TFM::Ligature C_60_Ligature[] = {
  { 0x60, 0x00, 0x5c }
};

static TFM::Ligature C_7b_Ligature[] = {
  { 0x2d, 0x00, 0x7c }
};


static TFM::Character character[] = {
  { 0x00, 0x000d4a03, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x01, 0x00118e4d, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x02, 0x001071da, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x03, 0x000e93fa, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x04, 0x000e38f3, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x05, 0x000fb06d, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x06, 0x000f5566, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x07, 0x001071da, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x08, 0x000f5566, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x09, 0x001071da, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x0a, 0x000f5566, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x0b, 0x000ae39a, 0x000b1c73, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x0c, 0x000ae39a, 0x000b1c73, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x0d, 0x000671cd, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x0e, 0x000671cd, 0x00080000, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x0f, 0x000a5560, 0x00080000, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x10, 0x000671cd, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x11, 0x00070006, 0x0006e38d, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x12, 0x000ae39a, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x13, 0x000ae39a, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x14, 0x000ae39a, 0x000a0e3a, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x15, 0x000ae39a, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x16, 0x000ae39a, 0x000949f3, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x17, 0x000fb06d, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x18, 0x0009c726, 0x00000000, 0x0002b8e6, 0x00000000, 0, 0, 0, 0 },
  { 0x19, 0x000ae39a, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x1a, 0x000f5566, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x1b, 0x001071da, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x1c, 0x000ae39a, 0x000871c6, 0x00018e3a, 0x00000000, 0, 0, 0, 0 },
  { 0x1d, 0x0012d843, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x1e, 0x0015112a, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x1f, 0x001071da, 0x000bb60d, 0x0000c71d, 0x00000000, 0, 0, 0, 0 },
  { 0x20, 0x000671cd, 0x0006e38d, 0x00000000, 0x00000000, 2, C_20_Kerning, 0, 0 },
  { 0x21, 0x000671cd, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 1, C_21_Ligature },
  { 0x22, 0x000ae39a, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x23, 0x00118e4d, 0x000b1c73, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x24, 0x000ae39a, 0x000c0000, 0x0000e38d, 0x00000000, 0, 0, 0, 0 },
  { 0x25, 0x00118e4d, 0x000c0000, 0x0000e38d, 0x00000000, 0, 0, 0, 0 },
  { 0x26, 0x001071da, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x27, 0x000671cd, 0x000b1c73, 0x00000000, 0x00000000, 2, C_27_Kerning, 1, C_27_Ligature },
  { 0x28, 0x0008aab3, 0x000c0000, 0x00040000, 0x00000000, 0, 0, 0, 0 },
  { 0x29, 0x0008aab3, 0x000c0000, 0x00040000, 0x00000000, 0, 0, 0, 0 },
  { 0x2a, 0x000ae39a, 0x000c0000, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x2b, 0x001071da, 0x000aaab3, 0x0002aab3, 0x00000000, 0, 0, 0, 0 },
  { 0x2c, 0x000671cd, 0x0001f4a0, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x2d, 0x00078e40, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 1, C_2d_Ligature },
  { 0x2e, 0x000671cd, 0x0001f4a0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x2f, 0x000ae39a, 0x000c0000, 0x00040000, 0x00000000, 0, 0, 0, 0 },
  { 0x30, 0x000ae39a, 0x000a4fa6, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x31, 0x000ae39a, 0x000a4fa6, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x32, 0x000ae39a, 0x000a4fa6, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x33, 0x000ae39a, 0x000a4fa6, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x34, 0x000ae39a, 0x000a4fa6, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x35, 0x000ae39a, 0x000a4fa6, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x36, 0x000ae39a, 0x000a4fa6, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x37, 0x000ae39a, 0x000a4fa6, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x38, 0x000ae39a, 0x000a4fa6, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x39, 0x000ae39a, 0x000a4fa6, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x3a, 0x000671cd, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x3b, 0x000671cd, 0x0006e38d, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x3c, 0x001071da, 0x00099d5a, 0x00019d5a, 0x00000000, 0, 0, 0, 0 },
  { 0x3d, 0x001071da, 0x000657ad, 0xfffe57ad, 0x00000000, 0, 0, 0, 0 },
  { 0x3e, 0x001071da, 0x00099d5a, 0x00019d5a, 0x00000000, 0, 0, 0, 0 },
  { 0x3f, 0x000a5560, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 1, C_3f_Ligature },
  { 0x40, 0x001071da, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x41, 0x000fb06d, 0x000ae04d, 0x00000000, 0x00000000, 10, C_41_Kerning, 0, 0 },
  { 0x42, 0x000ef4b0, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x43, 0x000f5566, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x44, 0x00101123, 0x000ae04d, 0x00000000, 0x00000000, 5, C_44_Kerning, 0, 0 },
  { 0x45, 0x000e6676, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x46, 0x000dd83d, 0x000ae04d, 0x00000000, 0x00000000, 10, C_46_Kerning, 0, 0 },
  { 0x47, 0x0010889d, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x48, 0x000fb06d, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x49, 0x0007e946, 0x000ae04d, 0x00000000, 0x00000000, 1, C_49_Kerning, 0, 0 },
  { 0x4a, 0x000b111d, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x4b, 0x00103ea6, 0x000ae04d, 0x00000000, 0x00000000, 4, C_4b_Kerning, 0, 0 },
  { 0x4c, 0x000d4a03, 0x000ae04d, 0x00000000, 0x00000000, 4, C_4c_Kerning, 0, 0 },
  { 0x4d, 0x001305c6, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x4e, 0x000fb06d, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x4f, 0x001071da, 0x000ae04d, 0x00000000, 0x00000000, 5, C_4f_Kerning, 0, 0 },
  { 0x50, 0x000e6676, 0x000ae04d, 0x00000000, 0x00000000, 6, C_50_Kerning, 0, 0 },
  { 0x51, 0x001071da, 0x000ae04d, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x52, 0x000f82ea, 0x000ae04d, 0x00000000, 0x00000000, 10, C_52_Kerning, 0, 0 },
  { 0x53, 0x000c000d, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x54, 0x000f5566, 0x000ae04d, 0x00000000, 0x00000000, 7, C_54_Kerning, 0, 0 },
  { 0x55, 0x000fb06d, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x56, 0x000fb06d, 0x000ae04d, 0x00000000, 0x0000471d, 10, C_56_Kerning, 0, 0 },
  { 0x57, 0x00153ead, 0x000ae04d, 0x00000000, 0x0000471d, 10, C_57_Kerning, 0, 0 },
  { 0x58, 0x000fb06d, 0x000ae04d, 0x00000000, 0x00000000, 4, C_58_Kerning, 0, 0 },
  { 0x59, 0x000fb06d, 0x000ae04d, 0x00000000, 0x00008000, 6, C_59_Kerning, 0, 0 },
  { 0x5a, 0x000d1c80, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x5b, 0x000671cd, 0x000c0000, 0x00040000, 0x00000000, 0, 0, 0, 0 },
  { 0x5c, 0x000ae39a, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x5d, 0x000671cd, 0x000c0000, 0x00040000, 0x00000000, 0, 0, 0, 0 },
  { 0x5e, 0x000ae39a, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x5f, 0x000671cd, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x60, 0x000671cd, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 1, C_60_Ligature },
  { 0x61, 0x000ae39a, 0x0006e38d, 0x00000000, 0x00000000, 4, C_61_Kerning, 0, 0 },
  { 0x62, 0x000c000d, 0x000b1c73, 0x00000000, 0x00000000, 10, C_62_Kerning, 0, 0 },
  { 0x63, 0x0009c726, 0x0006e38d, 0x00000000, 0x00000000, 2, C_63_Kerning, 0, 0 },
  { 0x64, 0x000c000d, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x65, 0x0009c726, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x66, 0x00070006, 0x000b1c73, 0x00000000, 0x0001693d, 0, 0, 0, 0 },
  { 0x67, 0x000ae39a, 0x0006e38d, 0x00031c73, 0x0000471d, 1, C_67_Kerning, 0, 0 },
  { 0x68, 0x000c000d, 0x000b1c73, 0x00000000, 0x00000000, 6, C_68_Kerning, 0, 0 },
  { 0x69, 0x000671cd, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x6a, 0x00070006, 0x000ae04d, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x6b, 0x000b71d3, 0x000b1c73, 0x00000000, 0x00000000, 5, C_6b_Kerning, 0, 0 },
  { 0x6c, 0x000671cd, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x6d, 0x00118e4d, 0x0006e38d, 0x00000000, 0x00000000, 6, C_6d_Kerning, 0, 0 },
  { 0x6e, 0x000c000d, 0x0006e38d, 0x00000000, 0x00000000, 6, C_6e_Kerning, 0, 0 },
  { 0x6f, 0x000ae39a, 0x0006e38d, 0x00000000, 0x00000000, 10, C_6f_Kerning, 0, 0 },
  { 0x70, 0x000c000d, 0x0006e38d, 0x00031c73, 0x00000000, 10, C_70_Kerning, 0, 0 },
  { 0x71, 0x000b71d3, 0x0006e38d, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x72, 0x0008aab3, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x73, 0x0008c726, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x74, 0x0008aab3, 0x0009d75d, 0x00000000, 0x00000000, 2, C_74_Kerning, 0, 0 },
  { 0x75, 0x000c000d, 0x0006e38d, 0x00000000, 0x00000000, 1, C_75_Kerning, 0, 0 },
  { 0x76, 0x000b71d3, 0x0006e38d, 0x00000000, 0x0000471d, 5, C_76_Kerning, 0, 0 },
  { 0x77, 0x000f5566, 0x0006e38d, 0x00000000, 0x0000471d, 4, C_77_Kerning, 0, 0 },
  { 0x78, 0x000b71d3, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x79, 0x000b71d3, 0x0006e38d, 0x00031c73, 0x0000471d, 5, C_79_Kerning, 0, 0 },
  { 0x7a, 0x0009c726, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x7b, 0x000ae39a, 0x0006e38d, 0x00000000, 0x00008e3a, 0, 0, 1, C_7b_Ligature },
  { 0x7c, 0x0015c733, 0x0006e38d, 0x00000000, 0x00008e3a, 0, 0, 0, 0 },
  { 0x7d, 0x000ae39a, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x7e, 0x000ae39a, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x7f, 0x000ae39a, 0x000ae04d, 0x00000000, 0x00000000, 0, 0, 0, 0 }
};

void
cmr5_tables(TFM::Font*& _font, TFM::Dimension*& _dimension, TFM::Character*& _character)
{
  _font = &font;
  _dimension = dimension;
  _character = character;
}