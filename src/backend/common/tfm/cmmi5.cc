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
"CMMI",

  0xf4,
  "TeX math italic",
  0x00500000,
  0x4f0dda5c,
  7,
  128
};

static TFM::Dimension dimension[] = {
  { 0x01, "slant", 0x00040000 },
  { 0x02, "space", 0x00000000 },
  { 0x03, "space_stretch", 0x00000000 },
  { 0x04, "space_shrink", 0x00000000 },
  { 0x05, "x_height", 0x0006e38d },
  { 0x06, "quad", 0x00178e4d },
  { 0x07, "extra_space", 0x00000000 }
};


static TFM::Kerning C_00_Kerning[] = {
  { 0x3a, 0xfffdc71a },
  { 0x3b, 0xfffdc71a },
  { 0x3d, 0xfffee38d },
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_01_Kerning[] = {
  { 0x7f, 0x0003555a }
};

static TFM::Kerning C_02_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_03_Kerning[] = {
  { 0x7f, 0x0003555a }
};

static TFM::Kerning C_04_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_05_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x3d, 0xfffee38d },
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_06_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_07_Kerning[] = {
  { 0x3a, 0xfffdc71a },
  { 0x3b, 0xfffdc71a },
  { 0x3d, 0xfffee38d },
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_08_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_09_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x3d, 0xfffee38d },
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_0a_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_0b_Kerning[] = {
  { 0x7f, 0x00008e3a }
};

static TFM::Kerning C_0c_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_0e_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_0f_Kerning[] = {
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_10_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_11_Kerning[] = {
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_12_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_13_Kerning[] = {
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_16_Kerning[] = {
  { 0x7f, 0x00008e3a }
};

static TFM::Kerning C_17_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x7f, 0x00008e3a }
};

static TFM::Kerning C_18_Kerning[] = {
  { 0x7f, 0x000238e6 }
};

static TFM::Kerning C_1a_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_1b_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d }
};

static TFM::Kerning C_1c_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x7f, 0x00008e3a }
};

static TFM::Kerning C_1d_Kerning[] = {
  { 0x7f, 0x00008e3a }
};

static TFM::Kerning C_1e_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_1f_Kerning[] = {
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_20_Kerning[] = {
  { 0x7f, 0x000238e6 }
};

static TFM::Kerning C_22_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_23_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_25_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_26_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_27_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_3d_Kerning[] = {
  { 0x01, 0xfffee38d },
  { 0x41, 0xfffee38d },
  { 0x4d, 0xfffee38d },
  { 0x4e, 0xfffee38d },
  { 0x59, 0x00011c73 },
  { 0x5a, 0xfffee38d }
};

static TFM::Kerning C_40_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_41_Kerning[] = {
  { 0x7f, 0x0002c720 }
};

static TFM::Kerning C_42_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_43_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x3d, 0xffff71c6 },
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_44_Kerning[] = {
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_45_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_46_Kerning[] = {
  { 0x3a, 0xfffdc71a },
  { 0x3b, 0xfffdc71a },
  { 0x3d, 0xfffee38d },
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_47_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_48_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x3d, 0xfffee38d },
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_49_Kerning[] = {
  { 0x7f, 0x000238e6 }
};

static TFM::Kerning C_4a_Kerning[] = {
  { 0x3a, 0xfffdc71a },
  { 0x3b, 0xfffdc71a },
  { 0x3d, 0xfffee38d },
  { 0x7f, 0x0003555a }
};

static TFM::Kerning C_4b_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x3d, 0xfffee38d },
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_4c_Kerning[] = {
  { 0x7f, 0x00008e3a }
};

static TFM::Kerning C_4d_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x3d, 0xfffee38d },
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_4e_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x3d, 0xfffe5553 },
  { 0x3d, 0xffff71c6 },
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_4f_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_50_Kerning[] = {
  { 0x3a, 0xfffdc71a },
  { 0x3b, 0xfffdc71a },
  { 0x3d, 0xfffee38d },
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_51_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_52_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_53_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x3d, 0xfffee38d },
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_54_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x3d, 0xffff71c6 },
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_55_Kerning[] = {
  { 0x3a, 0xfffdc71a },
  { 0x3b, 0xfffdc71a },
  { 0x3d, 0xfffee38d },
  { 0x7f, 0x00008e3a }
};

static TFM::Kerning C_56_Kerning[] = {
  { 0x3a, 0xfffcaaa6 },
  { 0x3b, 0xfffcaaa6 },
  { 0x3d, 0xfffdc71a }
};

static TFM::Kerning C_57_Kerning[] = {
  { 0x3a, 0xfffcaaa6 },
  { 0x3b, 0xfffcaaa6 },
  { 0x3d, 0xfffdc71a }
};

static TFM::Kerning C_58_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x3d, 0xfffe5553 },
  { 0x3d, 0xffff71c6 },
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_59_Kerning[] = {
  { 0x3a, 0xfffcaaa6 },
  { 0x3b, 0xfffcaaa6 },
  { 0x3d, 0xfffdc71a }
};

static TFM::Kerning C_5a_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x3d, 0xfffee38d },
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_60_Kerning[] = {
  { 0x7f, 0x000238e6 }
};

static TFM::Kerning C_63_Kerning[] = {
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_64_Kerning[] = {
  { 0x59, 0x00011c73 },
  { 0x5a, 0xfffee38d },
  { 0x66, 0xfffcaaa6 },
  { 0x6a, 0xfffdc71a },
  { 0x7f, 0x0003555a }
};

static TFM::Kerning C_65_Kerning[] = {
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_66_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x7f, 0x0003555a }
};

static TFM::Kerning C_67_Kerning[] = {
  { 0x7f, 0x00008e3a }
};

static TFM::Kerning C_68_Kerning[] = {
  { 0x7f, 0xffff71c6 }
};

static TFM::Kerning C_6a_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d }
};

static TFM::Kerning C_6c_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_6f_Kerning[] = {
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_70_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_71_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_72_Kerning[] = {
  { 0x3a, 0xfffee38d },
  { 0x3b, 0xfffee38d },
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_73_Kerning[] = {
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_74_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_75_Kerning[] = {
  { 0x7f, 0x00008e3a }
};

static TFM::Kerning C_76_Kerning[] = {
  { 0x7f, 0x00008e3a }
};

static TFM::Kerning C_77_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_78_Kerning[] = {
  { 0x7f, 0x00008e3a }
};

static TFM::Kerning C_79_Kerning[] = {
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_7a_Kerning[] = {
  { 0x7f, 0x00011c73 }
};

static TFM::Kerning C_7b_Kerning[] = {
  { 0x7f, 0x00008e3a }
};

static TFM::Kerning C_7c_Kerning[] = {
  { 0x7f, 0x0001aaad }
};

static TFM::Kerning C_7d_Kerning[] = {
  { 0x7f, 0x000238e6 }
};


static TFM::Character character[] = {
  { 0x00, 0x000d5286, 0x000aeef0, 0x00000000, 0x0000d27d, 4, C_00_Kerning, 0, 0 },
  { 0x01, 0x001271da, 0x000aeef0, 0x00000000, 0x00000000, 1, C_01_Kerning, 0, 0 },
  { 0x02, 0x0010c29d, 0x000aeef0, 0x00000000, 0x00008e3a, 1, C_02_Kerning, 0, 0 },
  { 0x03, 0x000f7786, 0x000aeef0, 0x00000000, 0x00000000, 1, C_03_Kerning, 0, 0 },
  { 0x04, 0x00104896, 0x000aeef0, 0x00000000, 0x0000425d, 1, C_04_Kerning, 0, 0 },
  { 0x05, 0x0011c453, 0x000aeef0, 0x00000000, 0x00004aaa, 4, C_05_Kerning, 0, 0 },
  { 0x06, 0x00110b70, 0x000aeef0, 0x00000000, 0x0000d27d, 1, C_06_Kerning, 0, 0 },
  { 0x07, 0x000d71d3, 0x000aeef0, 0x00000000, 0x0000d27d, 4, C_07_Kerning, 0, 0 },
  { 0x08, 0x000f1c80, 0x000aeef0, 0x00000000, 0x00000000, 1, C_08_Kerning, 0, 0 },
  { 0x09, 0x000e4bb6, 0x000aeef0, 0x00000000, 0x0000bf4a, 4, C_09_Kerning, 0, 0 },
  { 0x0a, 0x0010f83d, 0x000aeef0, 0x00000000, 0x0000bf4a, 1, C_0a_Kerning, 0, 0 },
  { 0x0b, 0x000e9cf6, 0x0006e38d, 0x00000000, 0x00000000, 1, C_0b_Kerning, 0, 0 },
  { 0x0c, 0x000ca670, 0x000b1c73, 0x00031c73, 0x0000d27d, 1, C_0c_Kerning, 0, 0 },
  { 0x0d, 0x000bf353, 0x0006e38d, 0x00031c73, 0x00011c73, 0, 0, 0, 0 },
  { 0x0e, 0x000a777d, 0x000b1c73, 0x00000000, 0x00008443, 3, C_0e_Kerning, 0, 0 },
  { 0x0f, 0x0009d116, 0x0006e38d, 0x00000000, 0x00000000, 1, C_0f_Kerning, 0, 0 },
  { 0x10, 0x000aaab3, 0x000b1c73, 0x00031c73, 0x0000d8e3, 1, C_10_Kerning, 0, 0 },
  { 0x11, 0x000be673, 0x0006e38d, 0x00031c73, 0x000092f6, 1, C_11_Kerning, 0, 0 },
  { 0x12, 0x000ad55a, 0x000b1c73, 0x00000000, 0x00008e3a, 1, C_12_Kerning, 0, 0 },
  { 0x13, 0x0008cbe0, 0x0006e38d, 0x00000000, 0x00000000, 1, C_13_Kerning, 0, 0 },
  { 0x14, 0x000d3dad, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x15, 0x000d71d3, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x16, 0x000d98b3, 0x0006e38d, 0x00031c73, 0x00000000, 1, C_16_Kerning, 0, 0 },
  { 0x17, 0x000b648a, 0x0006e38d, 0x00000000, 0x00000000, 3, C_17_Kerning, 0, 0 },
  { 0x18, 0x000aaab3, 0x000b1c73, 0x00031c73, 0x00004aaa, 1, C_18_Kerning, 0, 0 },
  { 0x19, 0x000d4c60, 0x0006e38d, 0x00000000, 0x000092f6, 0, 0, 0, 0 },
  { 0x1a, 0x000b9de6, 0x0006e38d, 0x00031c73, 0x00000000, 1, C_1a_Kerning, 0, 0 },
  { 0x1b, 0x000d0af0, 0x0006e38d, 0x00000000, 0x000092f6, 2, C_1b_Kerning, 0, 0 },
  { 0x1c, 0x000ae7dd, 0x0006e38d, 0x00000000, 0x000092f6, 3, C_1c_Kerning, 0, 0 },
  { 0x1d, 0x000caab6, 0x0006e38d, 0x00000000, 0x000092f6, 1, C_1d_Kerning, 0, 0 },
  { 0x1e, 0x000d7780, 0x000b1c73, 0x00031c73, 0x00000000, 1, C_1e_Kerning, 0, 0 },
  { 0x1f, 0x000dd560, 0x0006e38d, 0x00031c73, 0x00000000, 1, C_1f_Kerning, 0, 0 },
  { 0x20, 0x000ee39d, 0x000b1c73, 0x00031c73, 0x000092f6, 1, C_20_Kerning, 0, 0 },
  { 0x21, 0x000e2e83, 0x0006e38d, 0x00000000, 0x000092f6, 0, 0, 0, 0 },
  { 0x22, 0x000acb66, 0x0006e38d, 0x00000000, 0x00000000, 1, C_22_Kerning, 0, 0 },
  { 0x23, 0x000daf76, 0x000b1c73, 0x00000000, 0x00000000, 1, C_23_Kerning, 0, 0 },
  { 0x24, 0x00125123, 0x0006e38d, 0x00000000, 0x00008e3a, 0, 0, 0, 0 },
  { 0x25, 0x000b9de6, 0x0006e38d, 0x00031c73, 0x00000000, 1, C_25_Kerning, 0, 0 },
  { 0x26, 0x00094006, 0x0006e38d, 0x00018e3a, 0x000006c0, 1, C_26_Kerning, 0, 0 },
  { 0x27, 0x000eb066, 0x0006e38d, 0x00031c73, 0x00000000, 1, C_27_Kerning, 0, 0 },
  { 0x28, 0x0015c733, 0x000657ad, 0xfffe57ad, 0x00000000, 0, 0, 0, 0 },
  { 0x29, 0x0015c733, 0x000657ad, 0xfffe57ad, 0x00000000, 0, 0, 0, 0 },
  { 0x2a, 0x0015c733, 0x000657ad, 0xfffe57ad, 0x00000000, 0, 0, 0, 0 },
  { 0x2b, 0x0015c733, 0x000657ad, 0xfffe57ad, 0x00000000, 0, 0, 0, 0 },
  { 0x2c, 0x0007555a, 0x00083ca6, 0x00003ca6, 0x00000000, 0, 0, 0, 0 },
  { 0x2d, 0x0007555a, 0x00083ca6, 0x00003ca6, 0x00000000, 0, 0, 0, 0 },
  { 0x2e, 0x000bc726, 0x000771c6, 0xffff71c6, 0x00000000, 0, 0, 0, 0 },
  { 0x2f, 0x000bc726, 0x000771c6, 0xffff71c6, 0x00000000, 0, 0, 0, 0 },
  { 0x30, 0x000bc726, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x31, 0x000bc726, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x32, 0x000bc726, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x33, 0x000bc726, 0x0006e38d, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x34, 0x000bc726, 0x0006e38d, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x35, 0x000bc726, 0x0006e38d, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x36, 0x000bc726, 0x000a4fa6, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x37, 0x000bc726, 0x0006e38d, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x38, 0x000bc726, 0x000a4fa6, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x39, 0x000bc726, 0x0006e38d, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x3a, 0x0007555a, 0x0001f4a0, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x3b, 0x0007555a, 0x0001f4a0, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x3c, 0x00115566, 0x00099d5a, 0x00019d5a, 0x00000000, 0, 0, 0, 0 },
  { 0x3d, 0x000bc726, 0x000c0000, 0x00040000, 0x00000000, 6, C_3d_Kerning, 0, 0 },
  { 0x3e, 0x00115566, 0x00099d5a, 0x00019d5a, 0x00000000, 0, 0, 0, 0 },
  { 0x3f, 0x000bc726, 0x000771c6, 0xffff71c6, 0x00000000, 0, 0, 0, 0 },
  { 0x40, 0x000bfbc0, 0x000b1c73, 0x00000000, 0x00011c73, 1, C_40_Kerning, 0, 0 },
  { 0x41, 0x001093fa, 0x000aeef0, 0x00000000, 0x00000000, 1, C_41_Kerning, 0, 0 },
  { 0x42, 0x00109786, 0x000aeef0, 0x00000000, 0x0000bf4a, 1, C_42_Kerning, 0, 0 },
  { 0x43, 0x000fef90, 0x000aeef0, 0x00000000, 0x000116c0, 4, C_43_Kerning, 0, 0 },
  { 0x44, 0x0011c20d, 0x000aeef0, 0x00000000, 0x00008e3a, 1, C_44_Kerning, 0, 0 },
  { 0x45, 0x00101c80, 0x000aeef0, 0x00000000, 0x0000d27d, 1, C_45_Kerning, 0, 0 },
  { 0x46, 0x000de0c0, 0x000aeef0, 0x00000000, 0x0000d27d, 4, C_46_Kerning, 0, 0 },
  { 0x47, 0x00110650, 0x000aeef0, 0x00000000, 0x00000000, 1, C_47_Kerning, 0, 0 },
  { 0x48, 0x0011c453, 0x000aeef0, 0x00000000, 0x00004aaa, 4, C_48_Kerning, 0, 0 },
  { 0x49, 0x000a0723, 0x000aeef0, 0x00000000, 0x00006e3a, 1, C_49_Kerning, 0, 0 },
  { 0x4a, 0x000c5de6, 0x000aeef0, 0x00000000, 0x00008443, 4, C_4a_Kerning, 0, 0 },
  { 0x4b, 0x001238f6, 0x000aeef0, 0x00000000, 0x000116c0, 4, C_4b_Kerning, 0, 0 },
  { 0x4c, 0x000f4a03, 0x000aeef0, 0x00000000, 0x00000000, 1, C_4c_Kerning, 0, 0 },
  { 0x4d, 0x00148b73, 0x000aeef0, 0x00000000, 0x00008e3a, 4, C_4d_Kerning, 0, 0 },
  { 0x4e, 0x0011361a, 0x000aeef0, 0x00000000, 0x00008e3a, 5, C_4e_Kerning, 0, 0 },
  { 0x4f, 0x0010c29d, 0x000aeef0, 0x00000000, 0x00008e3a, 1, C_4f_Kerning, 0, 0 },
  { 0x50, 0x000e0176, 0x000aeef0, 0x00000000, 0x0000d27d, 4, C_50_Kerning, 0, 0 },
  { 0x51, 0x001150d6, 0x000aeef0, 0x00031c73, 0x00000000, 1, C_51_Kerning, 0, 0 },
  { 0x52, 0x00107aba, 0x000aeef0, 0x00000000, 0x000006c0, 1, C_52_Kerning, 0, 0 },
  { 0x53, 0x000db340, 0x000aeef0, 0x00000000, 0x0000cfa3, 4, C_53_Kerning, 0, 0 },
  { 0x54, 0x000d511d, 0x000aeef0, 0x00000000, 0x0000d27d, 4, C_54_Kerning, 0, 0 },
  { 0x55, 0x000f1a36, 0x000aeef0, 0x00000000, 0x00008e3a, 4, C_55_Kerning, 0, 0 },
  { 0x56, 0x000d3ea0, 0x000aeef0, 0x00000000, 0x0000d8e3, 3, C_56_Kerning, 0, 0 },
  { 0x57, 0x0014778d, 0x000aeef0, 0x00000000, 0x0000d27d, 3, C_57_Kerning, 0, 0 },
  { 0x58, 0x0011ce4a, 0x000aeef0, 0x00000000, 0x00006e3a, 5, C_58_Kerning, 0, 0 },
  { 0x59, 0x000d3066, 0x000aeef0, 0x00000000, 0x0000d8e3, 3, C_59_Kerning, 0, 0 },
  { 0x5a, 0x000f16d0, 0x000aeef0, 0x00000000, 0x000116c0, 4, C_5a_Kerning, 0, 0 },
  { 0x5b, 0x00098e40, 0x000c0000, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x5c, 0x00098e40, 0x000b1c73, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x5d, 0x00098e40, 0x000b1c73, 0x00031c73, 0x00000000, 0, 0, 0, 0 },
  { 0x5e, 0x0015c733, 0x0005b8e3, 0xfffdb8e3, 0x00000000, 0, 0, 0, 0 },
  { 0x5f, 0x0015c733, 0x0005b8e3, 0xfffdb8e3, 0x00000000, 0, 0, 0, 0 },
  { 0x60, 0x00098e3d, 0x000b1c73, 0x00000000, 0x00000000, 1, C_60_Kerning, 0, 0 },
  { 0x61, 0x000c6410, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x62, 0x000a2226, 0x000b1c73, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x63, 0x000a640d, 0x0006e38d, 0x00000000, 0x00000000, 1, C_63_Kerning, 0, 0 },
  { 0x64, 0x000bd5d6, 0x000b1c73, 0x00000000, 0x00000000, 5, C_64_Kerning, 0, 0 },
  { 0x65, 0x000ad510, 0x0006e38d, 0x00000000, 0x00000000, 1, C_65_Kerning, 0, 0 },
  { 0x66, 0x000af1cd, 0x000b1c73, 0x00031c73, 0x000097b3, 3, C_66_Kerning, 0, 0 },
  { 0x67, 0x000b359a, 0x0006e38d, 0x00031c73, 0x000092f6, 1, C_67_Kerning, 0, 0 },
  { 0x68, 0x000d3dad, 0x000b1c73, 0x00000000, 0x00000000, 1, C_68_Kerning, 0, 0 },
  { 0x69, 0x00088983, 0x000aa9da, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x6a, 0x00096943, 0x000aa9da, 0x00031c73, 0x0000f193, 2, C_6a_Kerning, 0, 0 },
  { 0x6b, 0x000c213a, 0x000b1c73, 0x00000000, 0x0000425d, 0, 0, 0, 0 },
  { 0x6c, 0x0007af6d, 0x000b1c73, 0x00000000, 0x00000000, 1, C_6c_Kerning, 0, 0 },
  { 0x6d, 0x0013a603, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x6e, 0x000e17c3, 0x0006e38d, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x6f, 0x000b3e9a, 0x0006e38d, 0x00000000, 0x00000000, 1, C_6f_Kerning, 0, 0 },
  { 0x70, 0x000bd5da, 0x0006e38d, 0x00031c73, 0x00000000, 1, C_70_Kerning, 0, 0 },
  { 0x71, 0x000a8aed, 0x0006e38d, 0x00031c73, 0x000092f6, 1, C_71_Kerning, 0, 0 },
  { 0x72, 0x000abdaa, 0x0006e38d, 0x00000000, 0x00008e3a, 3, C_72_Kerning, 0, 0 },
  { 0x73, 0x000ab8ea, 0x0006e38d, 0x00000000, 0x00000000, 1, C_73_Kerning, 0, 0 },
  { 0x74, 0x000904c6, 0x0009d75d, 0x00000000, 0x00000000, 1, C_74_Kerning, 0, 0 },
  { 0x75, 0x000d898a, 0x0006e38d, 0x00000000, 0x00000000, 1, C_75_Kerning, 0, 0 },
  { 0x76, 0x000b8e43, 0x0006e38d, 0x00000000, 0x000092f6, 1, C_76_Kerning, 0, 0 },
  { 0x77, 0x001024cd, 0x0006e38d, 0x00000000, 0x00006e3a, 1, C_77_Kerning, 0, 0 },
  { 0x78, 0x000caab3, 0x0006e38d, 0x00000000, 0x00000000, 1, C_78_Kerning, 0, 0 },
  { 0x79, 0x000bb066, 0x0006e38d, 0x00031c73, 0x000092f6, 1, C_79_Kerning, 0, 0 },
  { 0x7a, 0x000b04c6, 0x0006e38d, 0x00000000, 0x000097b3, 1, C_7a_Kerning, 0, 0 },
  { 0x7b, 0x00088983, 0x0006e38d, 0x00000000, 0x00000000, 1, C_7b_Kerning, 0, 0 },
  { 0x7c, 0x0008db0a, 0x0006e38d, 0x00031c73, 0x00000000, 1, C_7c_Kerning, 0, 0 },
  { 0x7d, 0x000e3a5d, 0x0006e38d, 0x00031c73, 0x00000000, 1, C_7d_Kerning, 0, 0 },
  { 0x7e, 0x000bc726, 0x000b8f23, 0x00000000, 0x0000cfa3, 0, 0, 0, 0 },
  { 0x7f, 0x0007555a, 0x000b1c73, 0x00000000, 0x0000f193, 0, 0, 0, 0 }
};

void
cmmi5_tables(TFM::Font*& _font, TFM::Dimension*& _dimension, TFM::Character*& _character)
{
  _font = &font;
  _dimension = dimension;
  _character = character;
}