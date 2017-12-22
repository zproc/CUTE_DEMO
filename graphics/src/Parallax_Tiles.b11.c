/*

 SRC/PARALLAX_TILES.B11.C

 Tile Source File.

 Info:
  Form                 : All tiles as one unit.
  Format               : Gameboy 4 color.
  Compression          : None.
  Counter              : None.
  Tile size            : 8 x 8
  Tiles                : 0 to 87

  Palette colors       : Included.
  SGB Palette          : None.
  CGB Palette          : 1 Byte per entry.

  Convert to metatiles : No.

 This file was generated by GBTD v2.2

*/

/* */

	#include "Parallax_Tiles.h"

	const int Parallax_TilesPAL[] = 

	{

	Parallax_TilesCGBPal0c0,Parallax_TilesCGBPal0c1,Parallax_TilesCGBPal0c2,Parallax_TilesCGBPal0c3,

	Parallax_TilesCGBPal1c0,Parallax_TilesCGBPal1c1,Parallax_TilesCGBPal1c2,Parallax_TilesCGBPal1c3,

	Parallax_TilesCGBPal2c0,Parallax_TilesCGBPal2c1,Parallax_TilesCGBPal2c2,Parallax_TilesCGBPal2c3,

	Parallax_TilesCGBPal3c0,Parallax_TilesCGBPal3c1,Parallax_TilesCGBPal3c2,Parallax_TilesCGBPal3c3,

	Parallax_TilesCGBPal4c0,Parallax_TilesCGBPal4c1,Parallax_TilesCGBPal4c2,Parallax_TilesCGBPal4c3,

	Parallax_TilesCGBPal5c0,Parallax_TilesCGBPal5c1,Parallax_TilesCGBPal5c2,Parallax_TilesCGBPal5c3,

	Parallax_TilesCGBPal6c0,Parallax_TilesCGBPal6c1,Parallax_TilesCGBPal6c2,Parallax_TilesCGBPal6c3,

	Parallax_TilesCGBPal7c0,Parallax_TilesCGBPal7c1,Parallax_TilesCGBPal7c2,Parallax_TilesCGBPal7c3,

	};/* */
const unsigned  char Parallax_TilesCGB[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};/*[] =
{
  0x00,0x00,0x00,0x03,0x02,0x02,0x02,0x02,
  0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x03,
  0x03,0x06,0x05,0x05,0x05,0x05,0x05,0x05,
  0x05,0x05,0x07,0x07,0x07,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x03,0x03,0x03,0x03,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01
};
/* Start of tile array. */
const unsigned  char Parallax_Tiles[] =
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x08,0xFF,
  0x15,0xFF,0xAA,0xFF,0xDD,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xC0,0xFF,0x80,0xFF,0x80,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,
  0xFF,0xFF,0xFF,0x03,0xFF,0x01,0xFF,0x03,
  0xFD,0x07,0xF9,0x2F,0xD1,0x7F,0x81,0xFF,
  0xFF,0x81,0xFE,0x8B,0xF4,0x9F,0xE0,0xBF,
  0xC0,0xFF,0x80,0xFF,0xC0,0xFF,0xFF,0xFF,
  0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,
  0x01,0xFF,0x01,0xFF,0x03,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x10,0xEF,0x3A,
  0xC5,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xDD,0xFF,0xAA,0xFF,0x15,0xFF,
  0x08,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0x85,0xFF,0x82,0xFF,0xA0,0xDF,
  0xD0,0xAF,0xE8,0x97,0xF0,0x8F,0xD8,0xA7,
  0xFF,0xFF,0x5F,0xFF,0xAF,0xFF,0x17,0xFF,
  0x0F,0xFF,0x17,0xFF,0x2B,0xFF,0x17,0xFF,
  0xE8,0x97,0xF0,0x8F,0xE8,0x97,0xF0,0x8F,
  0xE8,0x97,0xF4,0x8B,0xE8,0x97,0xF0,0x8F,
  0x0F,0xFF,0x17,0xFF,0x07,0xFF,0x0B,0xFF,
  0x07,0xFF,0x0B,0xFF,0x0F,0xFF,0x03,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFB,0x87,0xDF,0xA7,0xFB,0x87,0xF3,0x8F,
  0xF9,0x87,0xFB,0x87,0xE9,0x97,0xFB,0x87,
  0xFF,0xFF,0xC0,0xFF,0x9F,0xE0,0xBE,0xC1,
  0xB0,0xCF,0xA0,0xDF,0xA0,0xDF,0x80,0xFF,
  0xFF,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0xFF,0xFF,0x0F,0xFD,0x03,0xB9,0x47,
  0xF1,0x0F,0xE1,0x1F,0x71,0x8F,0xD1,0x2F,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFB,0x84,
  0xFF,0x80,0xFF,0x80,0xDE,0xA1,0xFF,0x80,
  0xF7,0x88,0xDF,0xA0,0xFC,0x83,0x80,0xFF,
  0x80,0xFF,0xC0,0xFF,0xC1,0xFF,0xFF,0xFF,
  0xEF,0x10,0x78,0x87,0x12,0xED,0x80,0x7F,
  0x00,0xFF,0x08,0xFF,0x55,0xFF,0xFF,0xFF,
  0xA1,0x5F,0x43,0xBF,0x01,0xFF,0x03,0xFF,
  0x15,0xFF,0xAB,0xFF,0x57,0xFF,0xFF,0xFF,
  0xF1,0x0F,0xB9,0x47,0xF1,0x0F,0xE1,0x1F,
  0xF1,0x0F,0xF9,0x07,0xD1,0x2F,0xF1,0x0F,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0xFF,0xE0,0xFF,0x9F,0xE0,0xBE,0xC1,
  0xB0,0xCF,0xA0,0xDF,0x80,0xFF,0x85,0xFF,
  0xFF,0xFF,0xE0,0x1F,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x04,0xFF,0x2A,0xFF,0x5F,0xFF,
  0xFF,0xFF,0x87,0x7F,0x01,0xFF,0x0B,0xFF,
  0x27,0xFF,0x1B,0xFF,0xAF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0x03,0x0F,0x0C,0x1F,0x10,0x3F,0x20,
  0x01,0x01,0x07,0x06,0x0F,0x08,0x1F,0x10,
  0xFF,0xE0,0xFF,0x20,0xFF,0x40,0xFF,0x40,
  0xE0,0xE0,0xF8,0x18,0xFC,0x04,0xFE,0x02,
  0xF9,0x07,0xF1,0x0F,0xA0,0x5F,0x80,0x7F,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x80,0x80,0x40,0xC0,
  0x7F,0x40,0x7F,0x40,0xFF,0x80,0xFF,0x80,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0x7E,0x41,
  0xFC,0x03,0xFC,0x03,0xFE,0x01,0xFC,0x03,
  0xF0,0x0F,0xC0,0x3F,0x80,0x7F,0x00,0xFF,
  0x01,0xFE,0x03,0xFC,0x0F,0xFE,0x1F,0xF0,
  0x3F,0xE0,0x7F,0xC0,0x7E,0xC1,0x7C,0xC3,
  0xF0,0x30,0xFC,0x0C,0xFA,0x06,0xF1,0x0F,
  0xF1,0x0F,0x81,0x7F,0x01,0xFF,0x01,0xFF,
  0x78,0x47,0x20,0x3F,0x10,0x1F,0x0C,0x0F,
  0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x80,0xFF,0x7F,0x7F,0x00,0x00,0x00,0x00,
  0x38,0xC7,0x10,0xEF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0xC0,0xFF,0x30,0x3F,0x0F,0x0F,
  0x01,0xFF,0x01,0xFF,0x02,0xFE,0x02,0xFE,
  0x04,0xFC,0x08,0xF8,0x30,0xF0,0xC0,0xC0,
  0xFF,0xFF,0xC3,0xFC,0xC5,0xFA,0xC3,0xFC,
  0xC7,0xF8,0xC2,0xFF,0xAF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0x00,0xFD,0x02,0xBF,0x40,
  0xA0,0x5F,0x00,0xFF,0x5D,0xFF,0xFF,0xFF,
  0xF1,0x8F,0xF3,0x0F,0xFB,0x07,0xB1,0x4F,
  0x83,0x7F,0x41,0xFF,0xF7,0xFF,0xFF,0xFF,
  0xF9,0x87,0xFF,0x80,0xFD,0x82,0xBE,0xC1,
  0xF8,0x87,0xC2,0xBF,0xDF,0xFF,0xFF,0xFF,
  0x00,0x00,0x03,0x03,0x1F,0x1C,0x7F,0x60,
  0xFF,0x80,0xFF,0x78,0x87,0x87,0x00,0x00,
  0x00,0x00,0x80,0x80,0xE7,0x67,0xFF,0x18,
  0xFF,0x00,0xFF,0x03,0xFC,0x1C,0xE0,0xE0,
  0x3F,0x3F,0xFF,0xC0,0xFF,0x0E,0xF1,0x31,
  0xC0,0x40,0x80,0x80,0x00,0x00,0x00,0x00,
  0x80,0x80,0xF0,0x70,0xFC,0x0C,0xFF,0x83,
  0x7F,0x70,0x0F,0x0C,0x03,0x03,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x8F,0x8F,0xFF,0x70,0xFF,0x07,0xF8,0xF8,
  0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,
  0x1F,0x00,0x3F,0x00,0x07,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
  0xF0,0x00,0xFF,0x00,0xFC,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x02,
  0x03,0x03,0x0F,0x0C,0x1F,0x10,0x3D,0x22,
  0x77,0x48,0xFC,0x83,0xE8,0x17,0xB2,0x4D,
  0x80,0x80,0xE0,0x60,0xF0,0x10,0x78,0x88,
  0x84,0x7C,0x92,0x6E,0x01,0xFF,0x40,0xBF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0x04,0x0D,0x0A,0x1F,0x10,0xBD,0xA2,
  0x76,0xC9,0x2C,0xF3,0x1A,0xF5,0x88,0x7F,
  0xE8,0x17,0x52,0xAD,0x80,0x7F,0x29,0xD6,
  0x40,0xBF,0x07,0xFF,0x5F,0xB8,0x3B,0xE4,
  0x04,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x08,0xF7,0x00,0xFF,0xC0,0xFF,0xE0,0x3F,
  0x40,0xC0,0x20,0xE0,0x11,0xF1,0x0B,0xFA,
  0x07,0xFC,0x0F,0xF8,0x1F,0xF0,0x3D,0xE2,
  0x38,0x38,0xFE,0xC6,0xF7,0x09,0x7D,0x82,
  0xEC,0x13,0xAA,0x55,0x70,0x8F,0x82,0x7D,
  0x04,0xFF,0x02,0xFF,0x01,0xFF,0x03,0xFE,
  0x07,0xFC,0x0B,0xFC,0x05,0xFA,0x00,0xFF,
  0x7E,0xC1,0xEC,0x93,0xB0,0x4F,0xE1,0x1E,
  0x68,0x97,0x81,0x7E,0x10,0xEF,0x40,0xBF,
  0x10,0xFF,0x88,0x7F,0x05,0xFF,0x43,0xBE,
  0x06,0xFD,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x7F,0xC0,0xD4,0xAB,0xF9,0x06,0x54,0xAB,
  0x20,0xDF,0x92,0x6D,0x00,0xFF,0x00,0xFF,
  0x28,0xD7,0x00,0xFF,0x04,0xFB,0x20,0xDF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x06,0xF9,0x3F,0xC0,
  0xFF,0x00,0xFF,0x00,0xF8,0x00,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xE0,0x1F,
  0xFF,0x00,0xFF,0x00,0x3F,0x00,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x3F,0xC0,
  0xFF,0x00,0xFF,0x00,0xF0,0x00,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0xFE,0x01,0xFF,0x00,
  0xFF,0x00,0xC7,0x00,0x00,0x00,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xF0,0x0F,
  0xFF,0x00,0xFF,0x00,0x07,0x00,0x00,0x00,
  0x20,0x20,0x00,0x00,0x02,0x02,0x00,0x00,
  0x08,0x08,0x40,0x40,0x00,0x00,0x04,0x04,
  0x00,0x00,0x30,0x30,0x01,0x01,0x40,0x40,
  0x06,0x06,0x00,0x00,0x38,0x38,0x00,0x00,
  0x03,0x03,0x00,0x00,0x1E,0x1E,0x80,0x80,
  0x00,0x00,0x07,0x07,0x78,0x78,0x00,0x00,
  0x00,0x00,0xC7,0xC7,0x00,0x00,0x00,0x00,
  0x7D,0x7D,0x00,0x00,0x00,0x00,0xF1,0xF1,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

/* End of SRC/PARALLAX_TILES.B11.C */