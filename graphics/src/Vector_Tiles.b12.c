/*

 SRC/VECTOR_TILES.B12.C

 Tile Source File.

 Info:
  Form                 : All tiles as one unit.
  Format               : Gameboy 4 color.
  Compression          : None.
  Counter              : None.
  Tile size            : 8 x 8
  Tiles                : 0 to 64

  Palette colors       : Included.
  SGB Palette          : None.
  CGB Palette          : 1 Byte per entry.

  Convert to metatiles : No.

 This file was generated by GBTD v2.2

*/

/* */

	#include "Vector_Tiles.h"

	const int Vector_TilesPAL[] = 

	{

	Vector_TilesCGBPal0c0,Vector_TilesCGBPal0c1,Vector_TilesCGBPal0c2,Vector_TilesCGBPal0c3,

	Vector_TilesCGBPal1c0,Vector_TilesCGBPal1c1,Vector_TilesCGBPal1c2,Vector_TilesCGBPal1c3,

	Vector_TilesCGBPal2c0,Vector_TilesCGBPal2c1,Vector_TilesCGBPal2c2,Vector_TilesCGBPal2c3,

	Vector_TilesCGBPal3c0,Vector_TilesCGBPal3c1,Vector_TilesCGBPal3c2,Vector_TilesCGBPal3c3,

	Vector_TilesCGBPal4c0,Vector_TilesCGBPal4c1,Vector_TilesCGBPal4c2,Vector_TilesCGBPal4c3,

	Vector_TilesCGBPal5c0,Vector_TilesCGBPal5c1,Vector_TilesCGBPal5c2,Vector_TilesCGBPal5c3,

	Vector_TilesCGBPal6c0,Vector_TilesCGBPal6c1,Vector_TilesCGBPal6c2,Vector_TilesCGBPal6c3,

	Vector_TilesCGBPal7c0,Vector_TilesCGBPal7c1,Vector_TilesCGBPal7c2,Vector_TilesCGBPal7c3,

	};/* */
const unsigned  char Vector_TilesCGB[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};/*[] =
{
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00
};
/* Start of tile array. */
const unsigned  char Vector_Tiles[] =
{
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
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x80,0x80,0xC0,0x40,0xE0,0x20,0xF0,0x10,
  0xF8,0x08,0xFC,0x04,0xFE,0x02,0xFF,0x01,
  0xFF,0x01,0xFE,0x02,0xFC,0x04,0xF8,0x08,
  0xF0,0x10,0xE0,0x20,0xC0,0x40,0x80,0x80,
  0xFF,0xC0,0x3F,0x30,0x0F,0x0C,0x03,0x03,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0xC0,0x3F,0x30,0x0F,0x0C,0x03,0x03,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0x03,0x0F,0x0C,0x3F,0x30,0xFF,0xC0,
  0x03,0x03,0x0F,0x0C,0x3F,0x30,0xFF,0xC0,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xC0,0xC0,0xF0,0x30,0xFC,0x0C,0xFF,0x03,
  0xC0,0xC0,0xF0,0x30,0xFC,0x0C,0xFF,0x03,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x03,0xFC,0x0C,0xF0,0x30,0xC0,0xC0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x03,0xFC,0x0C,0xF0,0x30,0xC0,0xC0,
  0x01,0x01,0x03,0x02,0x07,0x04,0x0F,0x08,
  0x1F,0x10,0x3F,0x20,0x7F,0x40,0xFF,0x80,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0xFF,0x00,0x80,0x7F,0x3F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0xFF,0x00,0x00,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0xE0,0x00,0x3F,0xC0,0x81,0xFE,
  0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,
  0x07,0xF8,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xE0,0x00,0x3F,0xC0,0x81,0xFE,0xFC,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xFC,0x00,0x07,0xF8,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0x00,0x0F,0x00,0x38,0x07,0xE3,0x1F,
  0x00,0x00,0x01,0x00,0x0F,0x00,0x38,0x07,
  0xE3,0x1F,0x0F,0xFF,0x7F,0xFF,0xFF,0xFF,
  0x00,0x00,0xFF,0x00,0x00,0xFF,0x7F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0xFF,0x00,0x01,0xFE,0xFC,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x3F,0xC0,0x81,0xFE,0xFC,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0xFC,0x00,0x07,0xF8,0xF0,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0xE0,0x00,0x3F,0xC0,
  0x81,0xFE,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFC,0x00,0x07,0xF8,0xF0,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x01,0x00,0x0F,0x00,
  0x38,0x07,0xE3,0x1F,0x0F,0xFF,0xFF,0xFF,
  0x0F,0x00,0x38,0x07,0xE3,0x1F,0x0F,0xFF,
  0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x0F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

/* End of SRC/VECTOR_TILES.B12.C */
