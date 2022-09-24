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
"CMTI",

  0xe6,
  "TeX text",
  0x00c00000,
  0x9bbb8840,
  7,
  128
};

static TFM::Dimension dimension[] = {
  { 0x01, "slant", 0x00040000 },
  { 0x02, "space", 0x0005999d },
  { 0x03, "space_stretch", 0x00026668 },
  { 0x04, "space_shrink", 0x0001999b },
  { 0x05, "x_height", 0x0006e38f },
  { 0x06, "quad", 0x0010000b },
  { 0x07, "extra_space", 0x0001999b }
};


static TFM::Kerning C_0b_Kerning[] = {
  { 0x21, 0x0001a7d4 },
  { 0x27, 0x0001a7d4 },
  { 0x29, 0x0001a7d4 },
  { 0x3f, 0x0001a7d4 },
  { 0x5d, 0x0001a7d4 }
};

static TFM::Kerning C_20_Kerning[] = {
  { 0x4c, 0xfffafc31 },
  { 0x6c, 0xfffbfffd }
};

static TFM::Kerning C_27_Kerning[] = {
  { 0x21, 0x0001999b },
  { 0x3f, 0x0001999b }
};

static TFM::Kerning C_41_Kerning[] = {
  { 0x43, 0xffff9999 },
  { 0x47, 0xffff9999 },
  { 0x4f, 0xffff9999 },
  { 0x51, 0xffff9999 },
  { 0x54, 0xfffecccc },
  { 0x55, 0xffff9999 },
  { 0x56, 0xfffe6665 },
  { 0x57, 0xfffe6665 },
  { 0x59, 0xfffecccc },
  { 0x61, 0xffff3333 },
  { 0x62, 0xffff9999 },
  { 0x63, 0xffff3333 },
  { 0x64, 0xffff3333 },
  { 0x65, 0xffff3333 },
  { 0x67, 0xffff3333 },
  { 0x68, 0xffff9999 },
  { 0x69, 0xffff9999 },
  { 0x6b, 0xffff9999 },
  { 0x6c, 0xffff9999 },
  { 0x6d, 0xffff9999 },
  { 0x6e, 0xffff9999 },
  { 0x6f, 0xffff3333 },
  { 0x71, 0xffff3333 },
  { 0x72, 0xffff9999 },
  { 0x74, 0xffff9999 },
  { 0x75, 0xffff9999 },
  { 0x76, 0xffff9999 },
  { 0x77, 0xffff9999 }
};

static TFM::Kerning C_44_Kerning[] = {
  { 0x41, 0xffff9999 },
  { 0x56, 0xffff9999 },
  { 0x57, 0xffff9999 },
  { 0x58, 0xffff9999 },
  { 0x59, 0xffff9999 }
};

static TFM::Kerning C_46_Kerning[] = {
  { 0x41, 0xfffe6665 },
  { 0x43, 0xffff9999 },
  { 0x47, 0xffff9999 },
  { 0x4f, 0xffff9999 },
  { 0x51, 0xffff9999 },
  { 0x61, 0xfffecccc },
  { 0x65, 0xfffecccc },
  { 0x6f, 0xfffecccc },
  { 0x72, 0xfffecccc },
  { 0x75, 0xfffecccc }
};

static TFM::Kerning C_4b_Kerning[] = {
  { 0x43, 0xffff9999 },
  { 0x47, 0xffff9999 },
  { 0x4f, 0xffff9999 },
  { 0x51, 0xffff9999 }
};

static TFM::Kerning C_4c_Kerning[] = {
  { 0x54, 0xfffecccc },
  { 0x56, 0xfffe6665 },
  { 0x57, 0xfffe6665 },
  { 0x59, 0xfffecccc },
  { 0x61, 0xffff3333 },
  { 0x63, 0xffff3333 },
  { 0x64, 0xffff3333 },
  { 0x65, 0xffff3333 },
  { 0x67, 0xffff3333 },
  { 0x6f, 0xffff3333 },
  { 0x71, 0xffff3333 }
};

static TFM::Kerning C_4f_Kerning[] = {
  { 0x41, 0xffff9999 },
  { 0x56, 0xffff9999 },
  { 0x57, 0xffff9999 },
  { 0x58, 0xffff9999 },
  { 0x59, 0xffff9999 }
};

static TFM::Kerning C_50_Kerning[] = {
  { 0x41, 0xfffecccc }
};

static TFM::Kerning C_52_Kerning[] = {
  { 0x43, 0xffff9999 },
  { 0x47, 0xffff9999 },
  { 0x4f, 0xffff9999 },
  { 0x51, 0xffff9999 },
  { 0x54, 0xfffecccc },
  { 0x55, 0xffff9999 },
  { 0x56, 0xfffe6665 },
  { 0x57, 0xfffe6665 },
  { 0x59, 0xfffecccc },
  { 0x61, 0xffff3333 },
  { 0x62, 0xffff9999 },
  { 0x63, 0xffff3333 },
  { 0x64, 0xffff3333 },
  { 0x65, 0xffff3333 },
  { 0x67, 0xffff3333 },
  { 0x68, 0xffff9999 },
  { 0x69, 0xffff9999 },
  { 0x6b, 0xffff9999 },
  { 0x6c, 0xffff9999 },
  { 0x6d, 0xffff9999 },
  { 0x6e, 0xffff9999 },
  { 0x6f, 0xffff3333 },
  { 0x71, 0xffff3333 },
  { 0x72, 0xffff9999 },
  { 0x74, 0xffff9999 },
  { 0x75, 0xffff9999 },
  { 0x76, 0xffff9999 },
  { 0x77, 0xffff9999 }
};

static TFM::Kerning C_54_Kerning[] = {
  { 0x41, 0xfffecccc },
  { 0x61, 0xfffecccc },
  { 0x65, 0xfffecccc },
  { 0x6f, 0xfffecccc },
  { 0x72, 0xfffecccc },
  { 0x75, 0xfffecccc },
  { 0x79, 0xfffecccc }
};

static TFM::Kerning C_56_Kerning[] = {
  { 0x41, 0xfffe6665 },
  { 0x43, 0xffff9999 },
  { 0x47, 0xffff9999 },
  { 0x4f, 0xffff9999 },
  { 0x51, 0xffff9999 },
  { 0x61, 0xfffecccc },
  { 0x65, 0xfffecccc },
  { 0x6f, 0xfffecccc },
  { 0x72, 0xfffecccc },
  { 0x75, 0xfffecccc }
};

static TFM::Kerning C_57_Kerning[] = {
  { 0x41, 0xfffecccc }
};

static TFM::Kerning C_58_Kerning[] = {
  { 0x43, 0xffff9999 },
  { 0x47, 0xffff9999 },
  { 0x4f, 0xffff9999 },
  { 0x51, 0xffff9999 }
};

static TFM::Kerning C_59_Kerning[] = {
  { 0x41, 0xfffecccc },
  { 0x61, 0xfffecccc },
  { 0x65, 0xfffecccc },
  { 0x6f, 0xfffecccc },
  { 0x72, 0xfffecccc },
  { 0x75, 0xfffecccc }
};

static TFM::Kerning C_62_Kerning[] = {
  { 0x61, 0xffff3333 },
  { 0x63, 0xffff3333 },
  { 0x64, 0xffff3333 },
  { 0x65, 0xffff3333 },
  { 0x67, 0xffff3333 },
  { 0x6f, 0xffff3333 },
  { 0x71, 0xffff3333 }
};

static TFM::Kerning C_63_Kerning[] = {
  { 0x61, 0xffff3333 },
  { 0x63, 0xffff3333 },
  { 0x64, 0xffff3333 },
  { 0x65, 0xffff3333 },
  { 0x67, 0xffff3333 },
  { 0x6f, 0xffff3333 },
  { 0x71, 0xffff3333 }
};

static TFM::Kerning C_64_Kerning[] = {
  { 0x6c, 0x0000cccd }
};

static TFM::Kerning C_65_Kerning[] = {
  { 0x61, 0xffff3333 },
  { 0x63, 0xffff3333 },
  { 0x64, 0xffff3333 },
  { 0x65, 0xffff3333 },
  { 0x67, 0xffff3333 },
  { 0x6f, 0xffff3333 },
  { 0x71, 0xffff3333 }
};

static TFM::Kerning C_66_Kerning[] = {
  { 0x21, 0x0001a7d4 },
  { 0x27, 0x0001a7d4 },
  { 0x29, 0x0001a7d4 },
  { 0x3f, 0x0001a7d4 },
  { 0x5d, 0x0001a7d4 }
};

static TFM::Kerning C_6c_Kerning[] = {
  { 0x6c, 0x0000cccd }
};

static TFM::Kerning C_6e_Kerning[] = {
  { 0x27, 0xfffe6665 }
};

static TFM::Kerning C_6f_Kerning[] = {
  { 0x61, 0xffff3333 },
  { 0x63, 0xffff3333 },
  { 0x64, 0xffff3333 },
  { 0x65, 0xffff3333 },
  { 0x67, 0xffff3333 },
  { 0x6f, 0xffff3333 },
  { 0x71, 0xffff3333 }
};

static TFM::Kerning C_70_Kerning[] = {
  { 0x61, 0xffff3333 },
  { 0x63, 0xffff3333 },
  { 0x64, 0xffff3333 },
  { 0x65, 0xffff3333 },
  { 0x67, 0xffff3333 },
  { 0x6f, 0xffff3333 },
  { 0x71, 0xffff3333 }
};

static TFM::Kerning C_72_Kerning[] = {
  { 0x61, 0xffff3333 },
  { 0x63, 0xffff3333 },
  { 0x64, 0xffff3333 },
  { 0x65, 0xffff3333 },
  { 0x67, 0xffff3333 },
  { 0x6f, 0xffff3333 },
  { 0x71, 0xffff3333 }
};

static TFM::Kerning C_77_Kerning[] = {
  { 0x6c, 0x0000cccd }
};

static TFM::Ligature C_0b_Ligature[] = {
  { 0x69, 0x00, 0x0e },
  { 0x6c, 0x00, 0x0f }
};

static TFM::Ligature C_21_Ligature[] = {
  { 0x60, 0x00, 0x3c }
};

static TFM::Ligature C_27_Ligature[] = {
  { 0x27, 0x00, 0x22 }
};

static TFM::Ligature C_2d_Ligature[] = {
  { 0x2d, 0x00, 0x7b }
};

static TFM::Ligature C_3f_Ligature[] = {
  { 0x60, 0x00, 0x3e }
};

static TFM::Ligature C_60_Ligature[] = {
  { 0x60, 0x00, 0x5c }
};

static TFM::Ligature C_66_Ligature[] = {
  { 0x66, 0x00, 0x0b },
  { 0x69, 0x00, 0x0c },
  { 0x6c, 0x00, 0x0d }
};

static TFM::Ligature C_7b_Ligature[] = {
  { 0x2d, 0x00, 0x7c }
};


static TFM::Character character[] = {
  { 0x00, 0x0009d09f, 0x000aeeef, 0x00000000, 0x0001127c, 0, 0, 0, 0 },
  { 0x01, 0x000cccd5, 0x000aeeef, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x02, 0x000c0008, 0x000aeeef, 0x00000000, 0x0000e667, 0, 0, 0, 0 },
  { 0x03, 0x000ad46b, 0x000aeeef, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x04, 0x000a666d, 0x000aeeef, 0x00000000, 0x00009999, 0, 0, 0, 0 },
  { 0x05, 0x000ba138, 0x000aeeef, 0x00000000, 0x00009a8c, 0, 0, 0, 0 },
  { 0x06, 0x000b333b, 0x000aeeef, 0x00000000, 0x0000fac8, 0, 0, 0, 0 },
  { 0x07, 0x000c0008, 0x000aeeef, 0x00000000, 0x00009999, 0, 0, 0, 0 },
  { 0x08, 0x000b333b, 0x000aeeef, 0x00000000, 0x0000f778, 0, 0, 0, 0 },
  { 0x09, 0x000c0008, 0x000aeeef, 0x00000000, 0x00009999, 0, 0, 0, 0 },
  { 0x0a, 0x000b333b, 0x000aeeef, 0x00000000, 0x0001127c, 0, 0, 0, 0 },
  { 0x0b, 0x000999a0, 0x000b1c71, 0x00031c71, 0x00010da5, 5, C_0b_Kerning, 2, C_0b_Ligature },
  { 0x0c, 0x0008ccd4, 0x000b1c71, 0x00031c71, 0x00013240, 0, 0, 0, 0 },
  { 0x0d, 0x0009333b, 0x000b1c71, 0x00031c71, 0x00013240, 0, 0, 0, 0 },
  { 0x0e, 0x000dccd8, 0x000b1c71, 0x00031c71, 0x00013240, 0, 0, 0, 0 },
  { 0x0f, 0x000e000b, 0x000b1c71, 0x00031c71, 0x00013240, 0, 0, 0, 0 },
  { 0x10, 0x0004ccd0, 0x0006e38f, 0x00000000, 0x00013241, 0, 0, 0, 0 },
  { 0x11, 0x00053337, 0x0006e38f, 0x00031c71, 0x00009a8c, 0, 0, 0, 0 },
  { 0x12, 0x00080005, 0x000b1c71, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x13, 0x00080005, 0x000b1c71, 0x00000000, 0x0000fac8, 0, 0, 0, 0 },
  { 0x14, 0x00080005, 0x000a0e39, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x15, 0x00080005, 0x000b1c71, 0x00000000, 0x0000760c, 0, 0, 0, 0 },
  { 0x16, 0x00080005, 0x000905b0, 0x00000000, 0x00012d83, 0, 0, 0, 0 },
  { 0x17, 0x000d0984, 0x000b1c71, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x18, 0x00073338, 0x00000000, 0x0002b8e3, 0x00000000, 0, 0, 0, 0 },
  { 0x19, 0x0008666c, 0x000b1c71, 0x00031c71, 0x0001527d, 0, 0, 0, 0 },
  { 0x1a, 0x000b333b, 0x0006e38f, 0x00000000, 0x00013240, 0, 0, 0, 0 },
  { 0x1b, 0x000b333b, 0x0006e38f, 0x00000000, 0x00013240, 0, 0, 0, 0 },
  { 0x1c, 0x00080005, 0x000871c8, 0x00018e39, 0x0000a665, 0, 0, 0, 0 },
  { 0x1d, 0x000dd0a1, 0x000aeeef, 0x00000000, 0x0000fac8, 0, 0, 0, 0 },
  { 0x1e, 0x000f6a3c, 0x000aeeef, 0x00000000, 0x0000fac8, 0, 0, 0, 0 },
  { 0x1f, 0x000c0008, 0x000bb60b, 0x0000c71c, 0x0000e667, 0, 0, 0, 0 },
  { 0x20, 0x00040003, 0x0006e38f, 0x00000000, 0x00000000, 2, C_20_Kerning, 0, 0 },
  { 0x21, 0x0004ccd0, 0x000b1c71, 0x00000000, 0x00010b29, 0, 0, 1, C_21_Ligature },
  { 0x22, 0x00080005, 0x000b1c71, 0x00000000, 0x00010da5, 0, 0, 0, 0 },
  { 0x23, 0x000cccd5, 0x000b1c71, 0x00031c70, 0x00010b29, 0, 0, 0, 0 },
  { 0x24, 0x000c155c, 0x000b1c71, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x25, 0x000cccd5, 0x000c0000, 0x0000e38f, 0x00013241, 0, 0, 0, 0 },
  { 0x26, 0x000c0008, 0x000b1c71, 0x00000000, 0x0000fac8, 0, 0, 0, 0 },
  { 0x27, 0x0004ccd0, 0x000b1c71, 0x00000000, 0x00010b29, 2, C_27_Kerning, 1, C_27_Ligature },
  { 0x28, 0x0006666b, 0x000c0000, 0x00040000, 0x0000e667, 0, 0, 0, 0 },
  { 0x29, 0x0006666b, 0x000c0000, 0x00040000, 0x00009999, 0, 0, 0, 0 },
  { 0x2a, 0x00080005, 0x000c0000, 0x00000000, 0x0000760c, 0, 0, 0, 0 },
  { 0x2b, 0x000c0008, 0x0008ccd0, 0x0000ccd0, 0x00009999, 0, 0, 0, 0 },
  { 0x2c, 0x0004ccd0, 0x00018e39, 0x00031c71, 0x00000000, 0, 0, 0, 0 },
  { 0x2d, 0x0005999d, 0x0006e38f, 0x00000000, 0x0000760c, 0, 0, 1, C_2d_Ligature },
  { 0x2e, 0x0004ccd0, 0x00018e39, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x2f, 0x00080005, 0x000c0000, 0x00040000, 0x0000e667, 0, 0, 0, 0 },
  { 0x30, 0x00080005, 0x000a5f5c, 0x00000000, 0x00013240, 0, 0, 0, 0 },
  { 0x31, 0x00080005, 0x000a5f5c, 0x00000000, 0x00013240, 0, 0, 0, 0 },
  { 0x32, 0x00080005, 0x000a5f5c, 0x00000000, 0x00013240, 0, 0, 0, 0 },
  { 0x33, 0x00080005, 0x000a5f5c, 0x00000000, 0x00013240, 0, 0, 0, 0 },
  { 0x34, 0x00080005, 0x000a5f5c, 0x00031c71, 0x00013240, 0, 0, 0, 0 },
  { 0x35, 0x00080005, 0x000a5f5c, 0x00000000, 0x00013240, 0, 0, 0, 0 },
  { 0x36, 0x00080005, 0x000a5f5c, 0x00000000, 0x00013240, 0, 0, 0, 0 },
  { 0x37, 0x00080005, 0x000a5f5c, 0x00031c71, 0x00013240, 0, 0, 0, 0 },
  { 0x38, 0x00080005, 0x000a5f5c, 0x00000000, 0x00013240, 0, 0, 0, 0 },
  { 0x39, 0x00080005, 0x000a5f5c, 0x00000000, 0x00013240, 0, 0, 0, 0 },
  { 0x3a, 0x0004ccd0, 0x0006e38f, 0x00000000, 0x0000e667, 0, 0, 0, 0 },
  { 0x3b, 0x0004ccd0, 0x0006e38f, 0x00031c71, 0x0000e667, 0, 0, 0, 0 },
  { 0x3c, 0x0004ccd0, 0x00080000, 0x00031c71, 0x00012d83, 0, 0, 0, 0 },
  { 0x3d, 0x000c0008, 0x0005c641, 0xfffdc641, 0x00010b29, 0, 0, 0, 0 },
  { 0x3e, 0x00080005, 0x00080000, 0x00031c71, 0x00000000, 0, 0, 0, 0 },
  { 0x3f, 0x00080005, 0x000b1c71, 0x00000000, 0x00010da5, 0, 0, 1, C_3f_Ligature },
  { 0x40, 0x000c0008, 0x000b1c71, 0x00000000, 0x0000f778, 0, 0, 0, 0 },
  { 0x41, 0x000ba138, 0x000aeeef, 0x00000000, 0x00000000, 28, C_41_Kerning, 0, 0 },
  { 0x42, 0x000b03d3, 0x000aeeef, 0x00000000, 0x0001127c, 0, 0, 0, 0 },
  { 0x43, 0x000b333b, 0x000aeeef, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x44, 0x000bd0a0, 0x000aeeef, 0x00000000, 0x0000e667, 5, C_44_Kerning, 0, 0 },
  { 0x45, 0x000a9d6c, 0x000aeeef, 0x00000000, 0x0000fac8, 0, 0, 0, 0 },
  { 0x46, 0x000a3705, 0x000aeeef, 0x00000000, 0x0001127c, 10, C_46_Kerning, 0, 0 },
  { 0x47, 0x000c1b88, 0x000aeeef, 0x00000000, 0x00009999, 0, 0, 0, 0 },
  { 0x48, 0x000ba138, 0x000aeeef, 0x00000000, 0x00009a8c, 0, 0, 0, 0 },
  { 0x49, 0x0006079b, 0x000aeeef, 0x00000000, 0x0000a665, 0, 0, 0, 0 },
  { 0x4a, 0x00083704, 0x000aeeef, 0x00000000, 0x00012d83, 0, 0, 0, 0 },
  { 0x4b, 0x000c079f, 0x000aeeef, 0x00000000, 0x00000000, 4, C_4b_Kerning, 0, 0 },
  { 0x4c, 0x0009d09f, 0x000aeeef, 0x00000000, 0x00000000, 11, C_4c_Kerning, 0, 0 },
  { 0x4d, 0x000e07a0, 0x000aeeef, 0x00000000, 0x00009a8c, 0, 0, 0, 0 },
  { 0x4e, 0x000ba138, 0x000aeeef, 0x00000000, 0x00009a8c, 0, 0, 0, 0 },
  { 0x4f, 0x000c0008, 0x000aeeef, 0x00000000, 0x0000e667, 5, C_4f_Kerning, 0, 0 },
  { 0x50, 0x000a9d6c, 0x000aeeef, 0x00000000, 0x0001127c, 1, C_50_Kerning, 0, 0 },
  { 0x51, 0x000c0008, 0x000aeeef, 0x00031c71, 0x0000e667, 0, 0, 0, 0 },
  { 0x52, 0x000b6a39, 0x000aeeef, 0x00000000, 0x0000a665, 28, C_52_Kerning, 0, 0 },
  { 0x53, 0x0008ccd3, 0x000aeeef, 0x00000000, 0x0000ec17, 0, 0, 0, 0 },
  { 0x54, 0x000b333b, 0x000aeeef, 0x00000000, 0x0001127c, 7, C_54_Kerning, 0, 0 },
  { 0x55, 0x000ba138, 0x000aeeef, 0x00000000, 0x00009a8c, 0, 0, 0, 0 },
  { 0x56, 0x000ba138, 0x000aeeef, 0x00000000, 0x0000f778, 10, C_56_Kerning, 0, 0 },
  { 0x57, 0x000fa13b, 0x000aeeef, 0x00000000, 0x0000f778, 1, C_57_Kerning, 0, 0 },
  { 0x58, 0x000ba138, 0x000aeeef, 0x00000000, 0x0000a665, 4, C_58_Kerning, 0, 0 },
  { 0x59, 0x000ba138, 0x000aeeef, 0x00000000, 0x00010b29, 6, C_59_Kerning, 0, 0 },
  { 0x5a, 0x000999a0, 0x000aeeef, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x5b, 0x0004ccd0, 0x000c0000, 0x00040000, 0x0000fac8, 0, 0, 0, 0 },
  { 0x5c, 0x00080005, 0x000b1c71, 0x00000000, 0x0000ec17, 0, 0, 0, 0 },
  { 0x5d, 0x0004ccd0, 0x000c0000, 0x00040000, 0x00013241, 0, 0, 0, 0 },
  { 0x5e, 0x00080005, 0x000b1c71, 0x00000000, 0x0001127c, 0, 0, 0, 0 },
  { 0x5f, 0x0004ccd0, 0x000a9e7c, 0x00000000, 0x00009a8c, 0, 0, 0, 0 },
  { 0x60, 0x0004ccd0, 0x000b1c71, 0x00000000, 0x00010b29, 0, 0, 1, C_60_Ligature },
  { 0x61, 0x00080005, 0x0006e38f, 0x00000000, 0x00013241, 0, 0, 0, 0 },
  { 0x62, 0x00073338, 0x000b1c71, 0x00000000, 0x0000fac8, 7, C_62_Kerning, 0, 0 },
  { 0x63, 0x00073338, 0x0006e38f, 0x00000000, 0x0000ec17, 7, C_63_Kerning, 0, 0 },
  { 0x64, 0x00080005, 0x000b1c71, 0x00000000, 0x00013240, 1, C_64_Kerning, 0, 0 },
  { 0x65, 0x00073338, 0x0006e38f, 0x00000000, 0x00013240, 7, C_65_Kerning, 0, 0 },
  { 0x66, 0x0004ccd0, 0x000b1c71, 0x00031c71, 0x00010da5, 5, C_66_Kerning, 3, C_66_Ligature },
  { 0x67, 0x00073338, 0x0006e38f, 0x00031c71, 0x0000760c, 0, 0, 0, 0 },
  { 0x68, 0x00080005, 0x000b1c71, 0x00000000, 0x00013241, 0, 0, 0, 0 },
  { 0x69, 0x0004ccd0, 0x000a5f5c, 0x00000000, 0x00010b29, 0, 0, 0, 0 },
  { 0x6a, 0x0004ccd0, 0x000a5f5c, 0x00031c71, 0x0001527d, 0, 0, 0, 0 },
  { 0x6b, 0x00073338, 0x000b1c71, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x6c, 0x00040003, 0x000b1c71, 0x00000000, 0x00013240, 1, C_6c_Kerning, 0, 0 },
  { 0x6d, 0x000cccd5, 0x0006e38f, 0x00000000, 0x00013241, 0, 0, 0, 0 },
  { 0x6e, 0x0008ccd3, 0x0006e38f, 0x00000000, 0x00013241, 1, C_6e_Kerning, 0, 0 },
  { 0x6f, 0x00080005, 0x0006e38f, 0x00000000, 0x0000fac8, 7, C_6f_Kerning, 0, 0 },
  { 0x70, 0x00080005, 0x0006e38f, 0x00031c71, 0x0000fac8, 7, C_70_Kerning, 0, 0 },
  { 0x71, 0x00073338, 0x0006e38f, 0x00031c71, 0x0000760c, 0, 0, 0, 0 },
  { 0x72, 0x0006999f, 0x0006e38f, 0x00000000, 0x00000000, 7, C_72_Kerning, 0, 0 },
  { 0x73, 0x0006666c, 0x0006e38f, 0x00000000, 0x0001527d, 0, 0, 0, 0 },
  { 0x74, 0x00053337, 0x0009d75f, 0x00000000, 0x0000ec17, 0, 0, 0, 0 },
  { 0x75, 0x0008666c, 0x0006e38f, 0x00000000, 0x00013241, 0, 0, 0, 0 },
  { 0x76, 0x00073338, 0x0006e38f, 0x00000000, 0x00000000, 0, 0, 0, 0 },
  { 0x77, 0x000a666d, 0x0006e38f, 0x00000000, 0x00000000, 1, C_77_Kerning, 0, 0 },
  { 0x78, 0x00073338, 0x0006e38f, 0x00000000, 0x0000e667, 0, 0, 0, 0 },
  { 0x79, 0x0007999f, 0x0006e38f, 0x00031c71, 0x0000760c, 0, 0, 0, 0 },
  { 0x7a, 0x0006666b, 0x0006e38f, 0x00000000, 0x0000f778, 0, 0, 0, 0 },
  { 0x7b, 0x00080005, 0x0006e38f, 0x00000000, 0x00009a8c, 0, 0, 1, C_7b_Ligature },
  { 0x7c, 0x0010000b, 0x0006e38f, 0x00000000, 0x00009a8c, 0, 0, 0, 0 },
  { 0x7d, 0x00080005, 0x000b1c71, 0x00000000, 0x00010da5, 0, 0, 0, 0 },
  { 0x7e, 0x00080005, 0x000a9e7c, 0x00000000, 0x0000a665, 0, 0, 0, 0 },
  { 0x7f, 0x00080005, 0x000a9e7c, 0x00000000, 0x00010da5, 0, 0, 0, 0 }
};

void
cmti12_tables(TFM::Font*& _font, TFM::Dimension*& _dimension, TFM::Character*& _character)
{
  _font = &font;
  _dimension = dimension;
  _character = character;
}