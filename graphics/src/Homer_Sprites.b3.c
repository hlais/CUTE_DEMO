/*

 HOMER_SPRITES.B3.C

 Tile Source File.

 Info:
  Form                 : All tiles as one unit.
  Format               : Gameboy 4 color.
  Compression          : None.
  Counter              : None.
  Tile size            : 8 x 16
  Tiles                : 0 to 40

  Palette colors       : Included.
  SGB Palette          : None.
  CGB Palette          : 1 Byte per entry.

  Convert to metatiles : No.

 This file was generated by GBTD v2.2

*/

#include "Homer_Sprites.h"

	const int Homer_SpritesPAL[] = 

	{

	Homer_SpritesCGBPal0c0,Homer_SpritesCGBPal0c1,Homer_SpritesCGBPal0c2,Homer_SpritesCGBPal0c3,

	Homer_SpritesCGBPal1c0,Homer_SpritesCGBPal1c1,Homer_SpritesCGBPal1c2,Homer_SpritesCGBPal1c3,

	Homer_SpritesCGBPal2c0,Homer_SpritesCGBPal2c1,Homer_SpritesCGBPal2c2,Homer_SpritesCGBPal2c3,

	Homer_SpritesCGBPal3c0,Homer_SpritesCGBPal3c1,Homer_SpritesCGBPal3c2,Homer_SpritesCGBPal3c3,

	Homer_SpritesCGBPal4c0,Homer_SpritesCGBPal4c1,Homer_SpritesCGBPal4c2,Homer_SpritesCGBPal4c3,

	Homer_SpritesCGBPal5c0,Homer_SpritesCGBPal5c1,Homer_SpritesCGBPal5c2,Homer_SpritesCGBPal5c3,

	Homer_SpritesCGBPal6c0,Homer_SpritesCGBPal6c1,Homer_SpritesCGBPal6c2,Homer_SpritesCGBPal6c3,

	Homer_SpritesCGBPal7c0,Homer_SpritesCGBPal7c1,Homer_SpritesCGBPal7c2,Homer_SpritesCGBPal7c3,

	};/*
const unsigned  char Homer_SpritesCGB[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};/*[] =
{
  0x02,0x02,0x02,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x02
};
/* Start of tile array. */
const unsigned  char Homer_Sprites[] =
{
  0xFF,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x07,0x00,0x0F,0x07,0x1F,0x0F,0x3F,0x1F,
  0x3F,0x1F,0x7F,0x3F,0x7F,0x3F,0xFF,0x7F,
  0xFF,0x7F,0xFF,0x7F,0x7C,0x3F,0x78,0x3F,
  0x73,0x3C,0x77,0x3B,0xFF,0x77,0xEF,0x77,
  0xC0,0x00,0xE0,0xC0,0xF0,0xE0,0xF8,0xF0,
  0xF8,0xF0,0xE4,0xB8,0xEC,0xD0,0x8C,0xF0,
  0xC4,0xF8,0x82,0xFC,0x06,0xFC,0x1E,0xFC,
  0xF9,0x3E,0xC1,0xFE,0x81,0xFE,0x81,0xFE,
  0x01,0x00,0x01,0x00,0x01,0x00,0x03,0x01,
  0x03,0x01,0x07,0x03,0x07,0x03,0x1F,0x07,
  0x3F,0x1F,0x7F,0x3F,0x7F,0x3F,0x7F,0x3F,
  0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,
  0xFF,0xF7,0xFF,0xF7,0xFF,0xFF,0xFC,0xFF,
  0xF8,0xFF,0xF0,0xFF,0xFE,0xF1,0xFF,0xCF,
  0xFF,0xBF,0xFE,0x7F,0xFC,0x7F,0xF8,0x7F,
  0xF0,0xFF,0xE0,0xFF,0x80,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x01,0xFF,0x0F,0xFF,0x3E,0xFF,0x7C,0xFF,
  0x78,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,
  0xC0,0x80,0xF8,0xC0,0xE4,0xF8,0xC2,0xFC,
  0x02,0xFC,0x02,0xFC,0x02,0xFC,0x01,0xFE,
  0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFE,
  0x00,0x00,0x01,0x00,0x03,0x01,0x07,0x03,
  0x1F,0x07,0x3F,0x1F,0x7F,0x3F,0x7F,0x3F,
  0xFE,0x7F,0xFE,0x7F,0xFC,0x7F,0x78,0x3F,
  0x78,0x3F,0x30,0x1F,0x70,0x3F,0xF0,0x7F,
  0xE0,0x00,0xF8,0xE0,0xFC,0xF8,0xFE,0xFC,
  0xFE,0xFC,0xE1,0xFE,0xC1,0xFE,0x01,0xFE,
  0x01,0xFE,0x01,0xFE,0x01,0xFE,0x02,0xFC,
  0x02,0xFC,0x02,0xFC,0x01,0xFE,0x01,0xFE,
  0x01,0x00,0x03,0x00,0x07,0x03,0x07,0x03,
  0x0F,0x07,0x0F,0x07,0x0F,0x07,0x1F,0x0F,
  0x1F,0x0F,0x1F,0x0F,0x1F,0x0F,0x3E,0x1F,
  0x3E,0x1F,0x3E,0x1F,0x7C,0x3F,0xF8,0x7F,
  0xE0,0xFF,0xC0,0xFF,0x80,0xFF,0x00,0xFF,
  0x00,0xFF,0x01,0xFE,0x07,0xF9,0x0F,0xF7,
  0x1F,0xEF,0x1F,0xEF,0x3F,0xDF,0x3C,0xDF,
  0x30,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x21,0xDE,0xE3,0x3C,0xC2,0xFC,0x02,0xFC,
  0x04,0xF8,0x02,0xFC,0xC1,0x3E,0xE1,0xDE,
  0xC1,0xFE,0x82,0xFC,0x02,0xFC,0x02,0xFC,
  0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFE,
  0x07,0x00,0x1F,0x07,0x3F,0x1F,0x7F,0x3F,
  0x7F,0x3F,0xFF,0x7F,0xFE,0x7F,0xFC,0x7F,
  0x7C,0x3F,0x7C,0x3F,0x30,0x1F,0x12,0x0F,
  0x3E,0x1F,0x7E,0x3F,0xFC,0x7F,0xF0,0x7F,
  0xF8,0xFF,0xE0,0xFF,0x80,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x01,0xFE,0x03,0xFD,0x07,0xFB,0x0F,0xF7,
  0x0F,0xF7,0x1E,0xEF,0x38,0xDF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x70,0x8F,0xFC,0x73,
  0xF8,0xFF,0xF8,0xFF,0xC0,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x01,0xFE,0x00,0xFF,0x1E,0xFF,0x3E,0xFF,
  0x3C,0xFF,0x38,0xFF,0x70,0xFF,0x70,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0x00,0x80,0x00,0x40,0x80,0x20,0xC0,
  0x1C,0xE0,0x02,0xFC,0x01,0xFE,0x01,0xFE,
  0x01,0xFE,0x02,0xFC,0x04,0xF8,0x04,0xF8,
  0x04,0xF8,0x02,0xFC,0x01,0xFE,0x01,0xFE,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x07,0x07,0x1F,0x18,0x3F,0x20,
  0x3F,0x20,0x7F,0x40,0x7F,0x40,0x7F,0x40,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,
  0x03,0x03,0x0F,0x0C,0x1F,0x10,0x3F,0x20,
  0x3F,0x20,0xFF,0xC0,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x07,
  0xFF,0x08,0xFF,0x10,0xFF,0x10,0xFF,0x00,
  0x80,0x80,0xC0,0x40,0xE0,0x20,0xE0,0x20,
  0xF0,0x10,0xF0,0x10,0xF0,0x10,0xF8,0x08,
  0xF8,0x08,0xFC,0x04,0xFE,0x02,0xFE,0x82,
  0xFE,0x42,0xFF,0x21,0xFF,0x21,0xFF,0x01,
  0x01,0x01,0x01,0x01,0x03,0x02,0x0F,0x0C,
  0x1F,0x10,0x3F,0x20,0x7F,0x40,0x7F,0x40,
  0x7F,0x40,0x7F,0x40,0x38,0x27,0x20,0x3F,
  0x10,0x1F,0x0C,0x0F,0x03,0x03,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFE,0x01,0xF8,0x07,
  0xF8,0x07,0xE0,0x1F,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0xFF,0xFF,0x00,0x00,
  0xFC,0x03,0xF8,0x07,0xF0,0x0F,0xE0,0x1F,
  0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x38,0xC7,0x70,0x8F,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0xFF,0xFF,0x00,0x00,
  0x61,0x9F,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x1E,0xFF,0x3F,0xE1,0x7F,0xC0,0x7E,0xC1,
  0xF8,0x87,0xC0,0xBF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0x00,0x80,0x80,0x60,0xE0,0x10,0xF0,
  0x08,0xF8,0x08,0xF8,0x04,0xFC,0x02,0xFE,
  0x02,0xFE,0x02,0xFE,0x0C,0xFC,0x10,0xF0,
  0x20,0xE0,0x40,0xC0,0x80,0x80,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0x07,0x1F,0x18,0x3F,0x20,0x7F,0x40,
  0x7F,0x40,0xFF,0x80,0xFF,0x80,0xFF,0x80,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xE0,0xE0,0xF8,0x18,0xFC,0x04,0xFE,0x02,
  0xFA,0x06,0xE1,0x1F,0x81,0x7F,0x01,0xFF,
  0x01,0x01,0x01,0x01,0x03,0x02,0x0F,0x0C,
  0x1F,0x10,0x3F,0x20,0x7F,0x40,0x7F,0x40,
  0x7F,0x40,0x7F,0x40,0x3F,0x20,0x1F,0x10,
  0x3F,0x20,0x3F,0x20,0x7F,0x40,0xFE,0x81,
  0xFF,0x00,0xFC,0x03,0xF8,0x07,0xF8,0x07,
  0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xE0,0x1F,
  0xE0,0x1F,0xE0,0x1F,0xC0,0x3F,0x80,0x7F,
  0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x06,0xFF,0x1E,0xF9,0x3E,0xE1,
  0x7E,0xC1,0x7C,0xC3,0xF8,0x87,0xE0,0x9F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x80,0x80,0x80,0x80,0x40,0xC0,0x20,0xE0,
  0x10,0xF0,0x08,0xF8,0x04,0xFC,0x04,0xFC,
  0x04,0xFC,0x04,0xFC,0x02,0xFE,0x02,0xFE,
  0x02,0xFE,0x01,0xFF,0x01,0xFF,0x01,0xFF,
  0x03,0x03,0x0F,0x0C,0x1F,0x10,0x3F,0x20,
  0x3F,0x20,0x7E,0x41,0x7C,0x43,0x70,0x4F,
  0x20,0x3F,0x20,0x3F,0x10,0x1F,0x08,0x0F,
  0x06,0x07,0x01,0x01,0x00,0x00,0x00,0x00,
  0xF0,0x0F,0xC0,0x3F,0x80,0x7F,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x03,0xFF,0x07,0xFC,0x0F,0xF8,0x0F,0xF8,
  0x1F,0xF0,0x1C,0xF3,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x3F,0xFF,0xFF,0xC0,
  0xFF,0x00,0xFC,0x03,0xF0,0x0F,0x80,0x7F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0xFF,
  0xE0,0x3F,0xC0,0x3F,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
  0x80,0x80,0x40,0xC0,0x30,0xF0,0x08,0xF8,
  0x08,0xF8,0x04,0xFC,0x04,0xFC,0x04,0xFC,
  0x04,0xFC,0x08,0xF8,0x08,0xF8,0x10,0xF0,
  0x60,0xE0,0x80,0x80,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x3C,0x3C,0x7E,0x42,0xFF,0x81,0xFF,0x81,
  0xFD,0x83,0xF9,0x87,0x41,0x7F,0x32,0x3E,
  0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
};

/* End of HOMER_SPRITES.B3.C */
