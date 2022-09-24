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

  0xec,
  "TeX math italic",
  0x00900000,
  0x35f99e22,
  7,
  128
};

static TFM::Dimension dimension[] = {
  { 0x01, "slant", 0x00040000 },
  { 0x02, "space", 0x00000000 },
  { 0x03, "space_stretch", 0x00000000 },
  { 0x04, "space_shrink", 0x00000000 },
  { 0x05, "x_height", 0x0006e38e },
  { 0x06, "quad", 0x001071c0 },
  { 0x07, "extra_space", 0x00000000 }
};


static TFM::Kerning C_00_Kerning[] = {
  { 0x3a, 0xfffe2c40 },
  { 0x3b, 0xfffe2c40 },
  { 0x3d, 0xffff1620 },
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_01_Kerning[] = {
  { 0x7f, 0x0002bda0 }
};

static TFM::Kerning C_02_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_03_Kerning[] = {
  { 0x7f, 0x0002bda0 }
};

static TFM::Kerning C_04_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_05_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x3d, 0xffff1620 },
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_06_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_07_Kerning[] = {
  { 0x3a, 0xfffe2c40 },
  { 0x3b, 0xfffe2c40 },
  { 0x3d, 0xffff1620 },
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_08_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_09_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x3d, 0xffff1620 },
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_0a_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_0b_Kerning[] = {
  { 0x7f, 0x000074f0 }
};

static TFM::Kerning C_0c_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_0e_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_0f_Kerning[] = {
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_10_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_11_Kerning[] = {
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_12_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_13_Kerning[] = {
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_16_Kerning[] = {
  { 0x7f, 0x000074f0 }
};

static TFM::Kerning C_17_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x7f, 0x000074f0 }
};

static TFM::Kerning C_18_Kerning[] = {
  { 0x7f, 0x0001d3c0 }
};

static TFM::Kerning C_1a_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_1b_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 }
};

static TFM::Kerning C_1c_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x7f, 0x000074f0 }
};

static TFM::Kerning C_1d_Kerning[] = {
  { 0x7f, 0x000074f0 }
};

static TFM::Kerning C_1e_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_1f_Kerning[] = {
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_20_Kerning[] = {
  { 0x7f, 0x0001d3c0 }
};

static TFM::Kerning C_22_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_23_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_25_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_26_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_27_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_3d_Kerning[] = {
  { 0x01, 0xffff1620 },
  { 0x41, 0xffff1620 },
  { 0x4d, 0xffff1620 },
  { 0x4e, 0xffff1620 },
  { 0x59, 0x0000e9e0 },
  { 0x5a, 0xffff1620 }
};

static TFM::Kerning C_40_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_41_Kerning[] = {
  { 0x7f, 0x000248b0 }
};

static TFM::Kerning C_42_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_43_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x3d, 0xffff8b10 },
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_44_Kerning[] = {
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_45_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_46_Kerning[] = {
  { 0x3a, 0xfffe2c40 },
  { 0x3b, 0xfffe2c40 },
  { 0x3d, 0xffff1620 },
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_47_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_48_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x3d, 0xffff1620 },
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_49_Kerning[] = {
  { 0x7f, 0x0001d3c0 }
};

static TFM::Kerning C_4a_Kerning[] = {
  { 0x3a, 0xfffe2c40 },
  { 0x3b, 0xfffe2c40 },
  { 0x3d, 0xffff1620 },
  { 0x7f, 0x0002bda0 }
};

static TFM::Kerning C_4b_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x3d, 0xffff1620 },
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_4c_Kerning[] = {
  { 0x7f, 0x000074f0 }
};

static TFM::Kerning C_4d_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x3d, 0xffff1620 },
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_4e_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x3d, 0xfffea130 },
  { 0x3d, 0xffff8b10 },
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_4f_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_50_Kerning[] = {
  { 0x3a, 0xfffe2c40 },
  { 0x3b, 0xfffe2c40 },
  { 0x3d, 0xffff1620 },
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_51_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_52_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_53_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x3d, 0xffff1620 },
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_54_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x3d, 0xffff8b10 },
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_55_Kerning[] = {
  { 0x3a, 0xfffe2c40 },
  { 0x3b, 0xfffe2c40 },
  { 0x3d, 0xffff1620 },
  { 0x7f, 0x000074f0 }
};

static TFM::Kerning C_56_Kerning[] = {
  { 0x3a, 0xfffd4260 },
  { 0x3b, 0xfffd4260 },
  { 0x3d, 0xfffe2c40 }
};

static TFM::Kerning C_57_Kerning[] = {
  { 0x3a, 0xfffd4260 },
  { 0x3b, 0xfffd4260 },
  { 0x3d, 0xfffe2c40 }
};

static TFM::Kerning C_58_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x3d, 0xfffea130 },
  { 0x3d, 0xffff8b10 },
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_59_Kerning[] = {
  { 0x3a, 0xfffd4260 },
  { 0x3b, 0xfffd4260 },
  { 0x3d, 0xfffe2c40 }
};

static TFM::Kerning C_5a_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x3d, 0xffff1620 },
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_60_Kerning[] = {
  { 0x7f, 0x0001d3c0 }
};

static TFM::Kerning C_63_Kerning[] = {
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_64_Kerning[] = {
  { 0x59, 0x0000e9e0 },
  { 0x5a, 0xffff1620 },
  { 0x66, 0xfffd4260 },
  { 0x6a, 0xfffe2c40 },
  { 0x7f, 0x0002bda0 }
};

static TFM::Kerning C_65_Kerning[] = {
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_66_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x7f, 0x0002bda0 }
};

static TFM::Kerning C_67_Kerning[] = {
  { 0x7f, 0x000074f0 }
};

static TFM::Kerning C_68_Kerning[] = {
  { 0x7f, 0xffff8b10 }
};

static TFM::Kerning C_6a_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 }
};

static TFM::Kerning C_6c_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_6f_Kerning[] = {
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_70_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_71_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_72_Kerning[] = {
  { 0x3a, 0xffff1620 },
  { 0x3b, 0xffff1620 },
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_73_Kerning[] = {
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_74_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_75_Kerning[] = {
  { 0x7f, 0x000074f0 }
};

static TFM::Kerning C_76_Kerning[] = {
  { 0x7f, 0x000074f0 }
};

static TFM::Kerning C_77_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_78_Kerning[] = {
  { 0x7f, 0x000074f0 }
};

static TFM::Kerning C_79_Kerning[] = {
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_7a_Kerning[] = {
  { 0x7f, 0x0000e9e0 }
};

static TFM::Kerning C_7b_Kerning[] = {
  { 0x7f, 0x000074f0 }
};

static TFM::Kerning C_7c_Kerning[] = {
  { 0x7f, 0x00015ed0 }
};

static TFM::Kerning C_7d_Kerning[] = {
  { 0x7f, 0x0001d3c0 }
};


static TFM::Character character[] = {
  { 0x00, 0x000a0b0c, 0x000aeeee, 0x00000000, 0x0000e8ee, 4, C_00_Kerning, 0, 0 },
  { 0x01, 0x000db420, 0x000aeeee, 0x00000000, 0x00000000, 1, C_01_Kerning, 0, 0 },
  { 0x02, 0x000c8354, 0x000aeeee, 0x00000000, 0x000074f0, 1, C_02_Kerning, 0, 0 },
  { 0x03, 0x000b6ace, 0x000aeeee, 0x00000000, 0x00000000, 1, C_03_Kerning, 0, 0 },
  { 0x04, 0x000c2b70, 0x000aeeee, 0x00000000, 0x00006e39, 1, C_04_Kerning, 0, 0 },
  { 0x05, 0x000d9a37, 0x000aeeee, 0x00000000, 0x000092f7, 4, C_05_Kerning, 0, 0 },
  { 0x06, 0x000cc9a0, 0x000aeeee, 0x00000000, 0x0000e93e, 1, C_06_Kerning, 0, 0 },
  { 0x07, 0x000997b0, 0x000aeeee, 0x00000000, 0x0000e8ee, 4, C_07_Kerning, 0, 0 },
  { 0x08, 0x000af680, 0x000aeeee, 0x00000000, 0x00000000, 1, C_08_Kerning, 0, 0 },
  { 0x09, 0x000a1910, 0x000aeeee, 0x00000000, 0x0000cbee, 4, C_09_Kerning, 0, 0 },
  { 0x0a, 0x000cac4e, 0x000aeeee, 0x00000000, 0x0000cbee, 1, C_0a_Kerning, 0, 0 },
  { 0x0b, 0x000a89f0, 0x0006e38e, 0x00000000, 0x00000329, 1, C_0b_Kerning, 0, 0 },
  { 0x0c, 0x0009446b, 0x000b1c72, 0x00031c72, 0x0000d5a5, 1, C_0c_Kerning, 0, 0 },
  { 0x0d, 0x00087e57, 0x0006e38e, 0x00031c72, 0x0000e9e0, 0, 0, 0, 0 },
  { 0x0e, 0x00074b35, 0x000b1c72, 0x00000000, 0x00009a64, 3, C_0e_Kerning, 0, 0 },
  { 0x0f, 0x0006a98c, 0x0006e38e, 0x00000000, 0x00000000, 1, C_0f_Kerning, 0, 0 },
  { 0x10, 0x000735b7, 0x000b1c72, 0x00031c72, 0x000043f4, 1, C_10_Kerning, 0, 0 },
  { 0x11, 0x00083609, 0x0006e38e, 0x00031c72, 0x000092f7, 1, C_11_Kerning, 0, 0 },
  { 0x12, 0x0007b290, 0x000b1c72, 0x00000000, 0x000074f0, 1, C_12_Kerning, 0, 0 },
  { 0x13, 0x0005d22b, 0x0006e38e, 0x00000000, 0x00000000, 1, C_13_Kerning, 0, 0 },
  { 0x14, 0x000979ab, 0x0006e38e, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x15, 0x000997b0, 0x000b1c72, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x16, 0x0009e849, 0x0006e38e, 0x00031c72, 0x00000000, 1, C_16_Kerning, 0, 0 },
  { 0x17, 0x00081c6e, 0x0006e38e, 0x00000000, 0x00000329, 3, C_17_Kerning, 0, 0 },
  { 0x18, 0x000735b7, 0x000b1c72, 0x00031c72, 0x0000afce, 1, C_18_Kerning, 0, 0 },
  { 0x19, 0x00096962, 0x0006e38e, 0x00000000, 0x000092f7, 0, 0, 0, 0 },
  { 0x1a, 0x00087892, 0x0006e38e, 0x00031c72, 0x00000000, 1, C_1a_Kerning, 0, 0 },
  { 0x1b, 0x0009672c, 0x0006e38e, 0x00000000, 0x000092f7, 2, C_1b_Kerning, 0, 0 },
  { 0x1c, 0x00073d24, 0x0006e38e, 0x00000000, 0x0000d5a5, 3, C_1c_Kerning, 0, 0 },
  { 0x1d, 0x0008e6b4, 0x0006e38e, 0x00000000, 0x000092f7, 1, C_1d_Kerning, 0, 0 },
  { 0x1e, 0x0009c9a0, 0x000b1c72, 0x00031c72, 0x00000000, 1, C_1e_Kerning, 0, 0 },
  { 0x1f, 0x000a40c7, 0x0006e38e, 0x00031c72, 0x00000000, 1, C_1f_Kerning, 0, 0 },
  { 0x20, 0x000aba74, 0x000b1c72, 0x00031c72, 0x000092f7, 1, C_20_Kerning, 0, 0 },
  { 0x21, 0x000a3b15, 0x0006e38e, 0x00000000, 0x000092f7, 0, 0, 0, 0 },
  { 0x22, 0x0007a247, 0x0006e38e, 0x00000000, 0x00000000, 1, C_22_Kerning, 0, 0 },
  { 0x23, 0x0009c077, 0x000b1c72, 0x00000000, 0x00000000, 1, C_23_Kerning, 0, 0 },
  { 0x24, 0x000da3d9, 0x0006e38e, 0x00000000, 0x000074f0, 0, 0, 0, 0 },
  { 0x25, 0x00087892, 0x0006e38e, 0x00031c72, 0x00000000, 1, C_25_Kerning, 0, 0 },
  { 0x26, 0x0005fd9e, 0x0006e38e, 0x00018e39, 0x00007819, 1, C_26_Kerning, 0, 0 },
  { 0x27, 0x000abcfb, 0x0006e38e, 0x00031c72, 0x00000000, 1, C_27_Kerning, 0, 0 },
  { 0x28, 0x001071c0, 0x0005f4e9, 0xfffdf4e9, 0x00000000, 0, 0, 0, 0 },
  { 0x29, 0x001071c0, 0x0005f4e9, 0xfffdf4e9, 0x00000000, 0, 0, 0, 0 },
  { 0x2a, 0x001071c0, 0x0005f4e9, 0xfffdf4e9, 0x00000000, 0, 0, 0, 0 },
  { 0x2b, 0x001071c0, 0x0005f4e9, 0xfffdf4e9, 0x00000000, 0, 0, 0, 0 },
  { 0x2c, 0x00049160, 0x00079357, 0xffff9357, 0x00000000, 0, 0, 0, 0 },
  { 0x2d, 0x00049160, 0x00079357, 0xffff9357, 0x00000000, 0, 0, 0, 0 },
  { 0x2e, 0x000838e0, 0x000771c7, 0xffff71c7, 0x00000000, 0, 0, 0, 0 },
  { 0x2f, 0x000838e0, 0x000771c7, 0xffff71c7, 0x00000000, 0, 0, 0, 0 },
  { 0x30, 0x000838e0, 0x0006e38e, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x31, 0x000838e0, 0x0006e38e, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x32, 0x000838e0, 0x0006e38e, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x33, 0x000838e0, 0x0006e38e, 0x00031c72, 0x00000000, 0, 0, 0, 0 },
  { 0x34, 0x000838e0, 0x0006e38e, 0x00031c72, 0x00000000, 0, 0, 0, 0 },
  { 0x35, 0x000838e0, 0x0006e38e, 0x00031c72, 0x00000000, 0, 0, 0, 0 },
  { 0x36, 0x000838e0, 0x000a4fa5, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x37, 0x000838e0, 0x0006e38e, 0x00031c72, 0x00000000, 0, 0, 0, 0 },
  { 0x38, 0x000838e0, 0x000a4fa5, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x39, 0x000838e0, 0x0006e38e, 0x00031c72, 0x00000000, 0, 0, 0, 0 },
  { 0x3a, 0x00049160, 0x0001ba79, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x3b, 0x00049160, 0x0001ba79, 0x00031c72, 0x00000000, 0, 0, 0, 0 },
  { 0x3c, 0x000cca40, 0x0008d0c9, 0x0000d0c9, 0x00000000, 0, 0, 0, 0 },
  { 0x3d, 0x000838e0, 0x000c0000, 0x00040000, 0x00000000, 6, C_3d_Kerning, 0, 0 },
  { 0x3e, 0x000cca40, 0x0008d0c9, 0x0000d0c9, 0x00000000, 0, 0, 0, 0 },
  { 0x3f, 0x000838e0, 0x000771c7, 0xffff71c7, 0x00000000, 0, 0, 0, 0 },
  { 0x40, 0x0008b307, 0x000b1c72, 0x00000000, 0x0000e9e0, 1, C_40_Kerning, 0, 0 },
  { 0x41, 0x000c54ae, 0x000aeeee, 0x00000000, 0x00000000, 1, C_41_Kerning, 0, 0 },
  { 0x42, 0x000c7185, 0x000aeeee, 0x00000000, 0x0000cbee, 1, C_42_Kerning, 0, 0 },
  { 0x43, 0x000bbceb, 0x000aeeee, 0x00000000, 0x00001ce0, 4, C_43_Kerning, 0, 0 },
  { 0x44, 0x000d8f67, 0x000aeeee, 0x00000000, 0x000074f0, 1, C_44_Kerning, 0, 0 },
  { 0x45, 0x000c19e7, 0x000aeeee, 0x00000000, 0x0000e93e, 1, C_45_Kerning, 0, 0 },
  { 0x46, 0x000a7ffc, 0x000aeeee, 0x00000000, 0x0000e8ee, 4, C_46_Kerning, 0, 0 },
  { 0x47, 0x000ce050, 0x000aeeee, 0x00000000, 0x00000000, 1, C_47_Kerning, 0, 0 },
  { 0x48, 0x000d9a37, 0x000aeeee, 0x00000000, 0x000092f7, 4, C_48_Kerning, 0, 0 },
  { 0x49, 0x00073030, 0x000aeeee, 0x00000000, 0x000074f0, 1, C_49_Kerning, 0, 0 },
  { 0x4a, 0x00090f7b, 0x000aeeee, 0x00000000, 0x00009a64, 4, C_4a_Kerning, 0, 0 },
  { 0x4b, 0x000ded05, 0x000aeeee, 0x00000000, 0x00001ce0, 4, C_4b_Kerning, 0, 0 },
  { 0x4c, 0x000b30a7, 0x000aeeee, 0x00000000, 0x00000000, 1, C_4c_Kerning, 0, 0 },
  { 0x4d, 0x000fe2e7, 0x000aeeee, 0x00000000, 0x0000afce, 4, C_4d_Kerning, 0, 0 },
  { 0x4e, 0x000d2547, 0x000aeeee, 0x00000000, 0x0000afce, 5, C_4e_Kerning, 0, 0 },
  { 0x4f, 0x000c8354, 0x000aeeee, 0x00000000, 0x000074f0, 1, C_4f_Kerning, 0, 0 },
  { 0x50, 0x000a7fd4, 0x000aeeee, 0x00000000, 0x0000e8ee, 4, C_50_Kerning, 0, 0 },
  { 0x51, 0x000cf844, 0x000aeeee, 0x00031c72, 0x00000000, 1, C_51_Kerning, 0, 0 },
  { 0x52, 0x000c712b, 0x000aeeee, 0x00000000, 0x00001ce0, 1, C_52_Kerning, 0, 0 },
  { 0x53, 0x000a0bae, 0x000aeeee, 0x00000000, 0x0000e8ee, 4, C_53_Kerning, 0, 0 },
  { 0x54, 0x000997d9, 0x000aeeee, 0x00000000, 0x0000e8ee, 4, C_54_Kerning, 0, 0 },
  { 0x55, 0x000b2f54, 0x000aeeee, 0x00000000, 0x0000afce, 4, C_55_Kerning, 0, 0 },
  { 0x56, 0x00099710, 0x000aeeee, 0x00000000, 0x0000e9e0, 3, C_56_Kerning, 0, 0 },
  { 0x57, 0x000f8740, 0x000aeeee, 0x00000000, 0x0000e8ee, 3, C_57_Kerning, 0, 0 },
  { 0x58, 0x000d9550, 0x000aeeee, 0x00000000, 0x000074f0, 5, C_58_Kerning, 0, 0 },
  { 0x59, 0x00098b5c, 0x000aeeee, 0x00000000, 0x0000e9e0, 3, C_59_Kerning, 0, 0 },
  { 0x5a, 0x000b3007, 0x000aeeee, 0x00000000, 0x00001ce0, 4, C_5a_Kerning, 0, 0 },
  { 0x5b, 0x00066520, 0x000c0000, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x5c, 0x00066520, 0x000b1c72, 0x00031c72, 0x00000000, 0, 0, 0, 0 },
  { 0x5d, 0x00066520, 0x000b1c72, 0x00031c72, 0x00000000, 0, 0, 0, 0 },
  { 0x5e, 0x001071c0, 0x0005b8e4, 0xfffdb8e4, 0x00000000, 0, 0, 0, 0 },
  { 0x5f, 0x001071c0, 0x0005b8e4, 0xfffdb8e4, 0x00000000, 0, 0, 0, 0 },
  { 0x60, 0x0006ca44, 0x000b1c72, 0x00000000, 0x00000000, 1, C_60_Kerning, 0, 0 },
  { 0x61, 0x0008b630, 0x0006e38e, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x62, 0x00070c00, 0x000b1c72, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x63, 0x00071e7c, 0x0006e38e, 0x00000000, 0x00000000, 1, C_63_Kerning, 0, 0 },
  { 0x64, 0x00088534, 0x000b1c72, 0x00000000, 0x00000000, 5, C_64_Kerning, 0, 0 },
  { 0x65, 0x0007a520, 0x0006e38e, 0x00000000, 0x00000000, 1, C_65_Kerning, 0, 0 },
  { 0x66, 0x0007fb40, 0x000b1c72, 0x00031c72, 0x0000b0fc, 3, C_66_Kerning, 0, 0 },
  { 0x67, 0x0007d75e, 0x0006e38e, 0x00031c72, 0x000092f7, 1, C_67_Kerning, 0, 0 },
  { 0x68, 0x000979ab, 0x000b1c72, 0x00000000, 0x00000000, 1, C_68_Kerning, 0, 0 },
  { 0x69, 0x0005a084, 0x000a8eae, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x6a, 0x0006b8e2, 0x000a8eae, 0x00031c72, 0x00000000, 2, C_6a_Kerning, 0, 0 },
  { 0x6b, 0x00088fcb, 0x000b1c72, 0x00000000, 0x00007819, 0, 0, 0, 0 },
  { 0x6c, 0x0004e84b, 0x000b1c72, 0x00000000, 0x000043f4, 1, C_6c_Kerning, 0, 0 },
  { 0x6d, 0x000e7cd2, 0x0006e38e, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x6e, 0x0009eb72, 0x0006e38e, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x6f, 0x0007f5e0, 0x0006e38e, 0x00000000, 0x00000000, 1, C_6f_Kerning, 0, 0 },
  { 0x70, 0x00084142, 0x0006e38e, 0x00031c72, 0x00000000, 1, C_70_Kerning, 0, 0 },
  { 0x71, 0x000758f4, 0x0006e38e, 0x00031c72, 0x000092f7, 1, C_71_Kerning, 0, 0 },
  { 0x72, 0x00076b74, 0x0006e38e, 0x00000000, 0x000074f0, 3, C_72_Kerning, 0, 0 },
  { 0x73, 0x0007a915, 0x0006e38e, 0x00000000, 0x00000000, 1, C_73_Kerning, 0, 0 },
  { 0x74, 0x0005f030, 0x0009d75e, 0x00000000, 0x00000000, 1, C_74_Kerning, 0, 0 },
  { 0x75, 0x00097682, 0x0006e38e, 0x00000000, 0x00000000, 1, C_75_Kerning, 0, 0 },
  { 0x76, 0x0007fcd4, 0x0006e38e, 0x00000000, 0x000092f7, 1, C_76_Kerning, 0, 0 },
  { 0x77, 0x000bc912, 0x0006e38e, 0x00000000, 0x00006e39, 1, C_77_Kerning, 0, 0 },
  { 0x78, 0x0009522b, 0x0006e38e, 0x00000000, 0x00000000, 1, C_78_Kerning, 0, 0 },
  { 0x79, 0x00081945, 0x0006e38e, 0x00031c72, 0x000092f7, 1, C_79_Kerning, 0, 0 },
  { 0x7a, 0x0007a5eb, 0x0006e38e, 0x00000000, 0x0000b0fc, 1, C_7a_Kerning, 0, 0 },
  { 0x7b, 0x00055a12, 0x0006e38e, 0x00000000, 0x00000000, 1, C_7b_Kerning, 0, 0 },
  { 0x7c, 0x000643f2, 0x0006e38e, 0x00031c72, 0x00000000, 1, C_7c_Kerning, 0, 0 },
  { 0x7d, 0x000a73d2, 0x0006e38e, 0x00031c72, 0x00000000, 1, C_7d_Kerning, 0, 0 },
  { 0x7e, 0x000838e0, 0x000b72eb, 0x00000000, 0x0000e93e, 0, 0, 0, 0 },
  { 0x7f, 0x00049160, 0x000b1c72, 0x00000000, 0x00000000, 0, 0, 0, 0 }
};

void
cmmi9_tables(TFM::Font*& _font, TFM::Dimension*& _dimension, TFM::Character*& _character)
{
  _font = &font;
  _dimension = dimension;
  _character = character;
}