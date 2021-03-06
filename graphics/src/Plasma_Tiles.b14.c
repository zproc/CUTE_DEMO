/*

 SRC/PLASMA_TILES.B14.C

 Tile Source File.

 Info:
  Form                 : All tiles as one unit.
  Format               : Gameboy 4 color.
  Compression          : None.
  Counter              : None.
  Tile size            : 8 x 8
  Tiles                : 0 to 32

  Palette colors       : Included.
  SGB Palette          : None.
  CGB Palette          : 1 Byte per entry.

  Convert to metatiles : No.

 This file was generated by GBTD v2.2

*/

/* */

	#include "Plasma_Tiles.h"

	const int Plasma_TilesPAL[] = 

	{

	Plasma_TilesCGBPal0c0,Plasma_TilesCGBPal0c1,Plasma_TilesCGBPal0c2,Plasma_TilesCGBPal0c3,

	Plasma_TilesCGBPal1c0,Plasma_TilesCGBPal1c1,Plasma_TilesCGBPal1c2,Plasma_TilesCGBPal1c3,

	Plasma_TilesCGBPal2c0,Plasma_TilesCGBPal2c1,Plasma_TilesCGBPal2c2,Plasma_TilesCGBPal2c3,

	Plasma_TilesCGBPal3c0,Plasma_TilesCGBPal3c1,Plasma_TilesCGBPal3c2,Plasma_TilesCGBPal3c3,

	Plasma_TilesCGBPal4c0,Plasma_TilesCGBPal4c1,Plasma_TilesCGBPal4c2,Plasma_TilesCGBPal4c3,

	Plasma_TilesCGBPal5c0,Plasma_TilesCGBPal5c1,Plasma_TilesCGBPal5c2,Plasma_TilesCGBPal5c3,

	Plasma_TilesCGBPal6c0,Plasma_TilesCGBPal6c1,Plasma_TilesCGBPal6c2,Plasma_TilesCGBPal6c3,

	Plasma_TilesCGBPal7c0,Plasma_TilesCGBPal7c1,Plasma_TilesCGBPal7c2,Plasma_TilesCGBPal7c3,

	};/* */
const unsigned  char Plasma_TilesCGB[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};/*[] =
{
  0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x07,0x07,0x07,0x07,0x07,
  0x07,0x01,0x01,0x07,0x07,0x07,0x07,0x06,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00
};
/* Start of tile array. */
const unsigned  char Plasma_Tiles[] =
{
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x54,0xFF,0x7E,0xFF,0xFF,0xFF,0x7E,
  0xFF,0xFF,0xFF,0x7E,0xFF,0xFF,0xFF,0x2A,
  0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0x7F,0x00,0x3F,0x00,
  0x1F,0x00,0x0F,0x00,0x07,0x00,0x83,0x00,
  0xC1,0x00,0xE0,0x00,0xF0,0x00,0xF8,0x00,
  0xFC,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,
  0x83,0x00,0x07,0x00,0x0F,0x00,0x1F,0x00,
  0x3F,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFC,0x00,
  0xF8,0x00,0xF0,0x00,0xE0,0x00,0xC1,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0x00,0xFE,0x01,0xFC,0x03,0xF8,0x07,
  0xF0,0x0F,0xE0,0x1F,0xC0,0x3F,0x80,0x7F,
  0xFF,0x00,0x7F,0x80,0x3F,0xC0,0x1F,0xE0,
  0x0F,0xF0,0x07,0xF8,0x03,0xFC,0x01,0xFE,
  0x01,0xFE,0x03,0xFC,0x07,0xF8,0x0F,0xF0,
  0x1F,0xE0,0x3F,0xC0,0x7F,0x80,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xC0,0x3F,0xC0,0x3F,
  0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,
  0xFF,0x00,0xFF,0x00,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0x01,0xFF,0x03,0x03,0xFF,0x03,0xFF,
  0x03,0xFF,0x03,0xFF,0x03,0xFF,0x03,0xFF,
  0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,
  0xC0,0x3F,0xC0,0x3F,0xFF,0x7F,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x03,0xFF,0x03,0xFF,0x03,0xFF,0x03,0xFF,
  0x03,0xFF,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,
  0x55,0xAA,0x55,0xAA,0x55,0xAA,0xFF,0xAA,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xE0,0x1F,
  0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,
  0xFF,0x00,0xFF,0x01,0xFF,0x03,0x07,0xFF,
  0x07,0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,
  0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,
  0xE0,0x1F,0xFF,0x1F,0xFF,0x3F,0xFF,0x7F,
  0x07,0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,
  0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xC3,0x3C,0x81,0x7E,0x03,0xFF,0x03,0xFF,
  0x07,0xFF,0x0F,0xFF,0xBF,0x7E,0xFF,0x3C,
  0x00,0xFF,0x80,0x7F,0xC0,0x3F,0xE0,0x1F,
  0xF0,0x0F,0xF8,0x07,0xFC,0x03,0xFE,0x01,
  0xFF,0x00,0x00,0xFF,0x00,0xFF,0xFF,0x00,
  0xFF,0x00,0x00,0xFF,0x00,0xFF,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0x7F,0x80,0x3F,0xC0,
  0x9F,0x60,0xCF,0x30,0x67,0x98,0x33,0xCC,
  0x99,0x66,0xCC,0x33,0xE6,0x19,0xF3,0x0C,
  0xF9,0x06,0xFC,0x03,0xFE,0x01,0xFF,0x00,
  0x99,0x66,0x33,0xCC,0x67,0x98,0xCF,0x30,
  0x9F,0x60,0x3F,0xC0,0x7F,0x80,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFC,0x03,
  0xF9,0x06,0xF3,0x0C,0xE6,0x19,0xCC,0x33,
  0x99,0x66,0x99,0x66,0x99,0x66,0x99,0x66,
  0x99,0x66,0x99,0x66,0x99,0x66,0x99,0x66,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

/* End of SRC/PLASMA_TILES.B14.C */
