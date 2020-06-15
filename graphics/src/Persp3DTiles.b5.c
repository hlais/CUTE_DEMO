/*

 PERSP3DTILES.B5.C

 Tile Source File.

 Info:
  Form                 : All tiles as one unit.
  Format               : Gameboy 4 color.
  Compression          : None.
  Counter              : None.
  Tile size            : 8 x 8
  Tiles                : 0 to 342

  Palette colors       : Included.
  SGB Palette          : None.
  CGB Palette          : 1 Byte per entry.

  Convert to metatiles : No.

 This file was generated by GBTD v2.2

*/

#include "Persp3DTiles.h"

	const int Persp3DTilesPAL[] = 

	{

	Persp3DTilesCGBPal0c0,Persp3DTilesCGBPal0c1,Persp3DTilesCGBPal0c2,Persp3DTilesCGBPal0c3,

	Persp3DTilesCGBPal1c0,Persp3DTilesCGBPal1c1,Persp3DTilesCGBPal1c2,Persp3DTilesCGBPal1c3,

	Persp3DTilesCGBPal2c0,Persp3DTilesCGBPal2c1,Persp3DTilesCGBPal2c2,Persp3DTilesCGBPal2c3,

	Persp3DTilesCGBPal3c0,Persp3DTilesCGBPal3c1,Persp3DTilesCGBPal3c2,Persp3DTilesCGBPal3c3,

	Persp3DTilesCGBPal4c0,Persp3DTilesCGBPal4c1,Persp3DTilesCGBPal4c2,Persp3DTilesCGBPal4c3,

	Persp3DTilesCGBPal5c0,Persp3DTilesCGBPal5c1,Persp3DTilesCGBPal5c2,Persp3DTilesCGBPal5c3,

	Persp3DTilesCGBPal6c0,Persp3DTilesCGBPal6c1,Persp3DTilesCGBPal6c2,Persp3DTilesCGBPal6c3,

	Persp3DTilesCGBPal7c0,Persp3DTilesCGBPal7c1,Persp3DTilesCGBPal7c2,Persp3DTilesCGBPal7c3,

	};/*
const unsigned  char Persp3DTilesCGB[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};/*[] =
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
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
/* Start of tile array. */
const unsigned  char Persp3DTilesBLK0[] =
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x03,0x03,0x07,0x06,0xFF,0xFC,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xE0,0xE0,0xE1,0x21,0xE1,0x21,
  0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,
  0x07,0x04,0xFF,0xFC,0xFF,0x84,0xFF,0x07,
  0x00,0x00,0x1F,0x1F,0xFF,0xF1,0xFF,0x80,
  0xFF,0x00,0xFF,0x07,0xFF,0x07,0xFF,0x87,
  0x00,0x00,0x3F,0x3F,0xFF,0xE0,0xFF,0xC0,
  0xFF,0xC0,0xFF,0xC7,0xFF,0xC7,0xFF,0xC7,
  0x00,0x00,0xF0,0xF0,0xF8,0x18,0xFC,0x1C,
  0xFC,0x3C,0xFC,0xFC,0xF8,0xF8,0xE0,0xE0,
  0x1F,0x18,0x3F,0x30,0x3F,0x20,0x7F,0x61,
  0x7F,0x43,0xFF,0xC7,0xFF,0x87,0xFF,0x87,
  0xFF,0x0C,0xFF,0x04,0xFF,0x04,0xFF,0xFC,
  0xFF,0xFC,0xFF,0xFC,0xC7,0xC4,0x87,0x84,
  0xF9,0x39,0xF9,0x39,0xF8,0x38,0xF8,0x38,
  0xF8,0x38,0xF9,0x39,0xF9,0x39,0xF9,0x39,
  0xFF,0x0F,0xFF,0x8F,0xFF,0x8F,0xFE,0x8E,
  0xFE,0x8E,0xFE,0x8E,0xFE,0x0E,0xFE,0x0E,
  0xFF,0xC3,0xFF,0xC3,0x7F,0x43,0x7F,0x63,
  0x3F,0x23,0x3F,0x21,0x3F,0x31,0x1F,0x10,
  0x7F,0x40,0x7F,0x40,0xFF,0xC0,0xFF,0xC7,
  0xFF,0xC7,0xFF,0xC7,0xFF,0xC1,0xFF,0xC0,
  0xF0,0x30,0xF0,0x30,0xF8,0x78,0xF8,0xF8,
  0xF0,0xF0,0xC0,0xC0,0xF0,0xF0,0xF0,0x10,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x3E,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x0F,0x0F,0x1F,0x18,0x1F,0x10,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x80,0x80,0xC0,0xC0,0xC0,0x40,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x0F,0x0F,0x1F,0x18,0x7F,0x70,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xF8,0xF8,0xFC,0x0C,0xFE,0x06,
  0xFF,0x87,0xFF,0xC3,0x7F,0x43,0x7F,0x43,
  0x7F,0x60,0x3F,0x20,0x3F,0x30,0x1F,0x1F,
  0x07,0x06,0x03,0x02,0x03,0x03,0x9F,0x9F,
  0xFF,0xF3,0xFF,0x03,0xFF,0x07,0xFF,0x1F,
  0xF9,0x19,0xFB,0x1B,0xFF,0x0E,0xFF,0x00,
  0xFF,0x80,0xFF,0xF0,0xBF,0xBF,0x1F,0x1F,
  0xFE,0x0E,0xFE,0x1E,0xFE,0x1E,0xFE,0x3E,
  0xFC,0xFC,0xFC,0xFC,0xF8,0xF8,0xE0,0xE0,
  0x1F,0x10,0x1F,0x10,0x1F,0x19,0x0F,0x0F,
  0x07,0x07,0x03,0x03,0x00,0x00,0x00,0x00,
  0xFF,0xE0,0xFF,0xFE,0xEF,0xEF,0xE7,0xE7,
  0xE0,0xE0,0xC0,0xC0,0x00,0x00,0x00,0x00,
  0xF8,0x38,0xFF,0x7F,0xFF,0xFE,0xFF,0xF0,
  0x7F,0x60,0x7F,0x43,0x7F,0x43,0x7F,0x43,
  0x00,0x00,0xE0,0xE0,0xF8,0x38,0xFE,0x0E,
  0xFF,0x03,0xFF,0xE1,0xFF,0xF1,0xFF,0xF0,
  0x3F,0x23,0x7F,0x60,0x7F,0x40,0x7F,0x60,
  0x3F,0x23,0x3F,0x23,0xFF,0xE3,0xFF,0xC0,
  0xF0,0xF0,0xFE,0x1E,0xFF,0x1B,0xFF,0x10,
  0xFF,0xF0,0xFF,0xF0,0xFF,0xF8,0xEF,0x68,
  0x1F,0x10,0x1F,0x10,0x9F,0x98,0xCF,0xC8,
  0xEF,0x68,0xFF,0x38,0xFF,0x1C,0xFF,0x0C,
  0xE0,0x60,0xF0,0x30,0xFC,0x1C,0xFC,0x04,
  0xFE,0x06,0xFF,0x03,0xFF,0x63,0xFF,0x61,
  0x7F,0x40,0x7F,0x43,0x7F,0x47,0xFF,0xC7,
  0xFF,0x87,0xFF,0x87,0xFF,0x87,0xFF,0x87,
  0xFF,0x03,0xFF,0xF1,0xFF,0xF9,0xFF,0xF8,
  0x8F,0x88,0x1F,0x18,0x1F,0x10,0x3F,0x30,
  0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,
  0xC0,0xC0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,
  0x07,0x07,0x03,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0xFE,0xFE,0x3C,0x3C,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x7F,0x63,0x3F,0x23,0x3F,0x23,0x3F,0x31,
  0x1F,0x11,0x1F,0x11,0x1F,0x19,0x0F,0x08,
  0x9F,0x98,0x8F,0x88,0x8F,0x88,0x9F,0x98,
  0x9F,0x90,0xFF,0xF1,0xFF,0xC1,0xFF,0x01,
  0xFF,0xC0,0xFF,0xC0,0xFF,0xC7,0xFF,0xC7,
  0xFF,0xC7,0xFF,0xC3,0xFF,0xC0,0xFF,0xE0,
  0xEF,0x28,0xFF,0x38,0xFF,0xF8,0xFF,0xFC,
  0xFF,0xFC,0xE7,0xE6,0xF3,0x33,0xF1,0x11,
  0xFF,0x00,0xFF,0x00,0xFF,0x60,0xFF,0x70,
  0xFF,0x78,0xFF,0x3C,0xF7,0x17,0xF9,0x19,
  0xFF,0x70,0xFF,0x70,0xFF,0x78,0xFF,0x7F,
  0xF3,0x73,0xF1,0x31,0xF0,0xF0,0xF8,0xF8,
  0xFF,0x87,0xFF,0xC7,0xFF,0xC1,0xFF,0xE0,
  0xFF,0xF8,0xEF,0xEE,0x07,0x07,0x01,0x01,
  0x3F,0x21,0x7F,0x61,0xFF,0xC3,0xFF,0x03,
  0xFF,0x0F,0xFF,0x3F,0xFF,0xFF,0xFE,0xFE,
  0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xC0,0xC0,
  0xC0,0xC0,0x80,0x80,0x80,0x80,0x00,0x00,
  0x0F,0x08,0x0F,0x0C,0x07,0x07,0x01,0x01,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x07,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,
  0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFE,0xCF,0xCF,0xC7,0xC7,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xF9,0x39,0xFD,0xFD,0xFC,0xFC,0x78,0x78,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFC,0x1C,0xFC,0x9C,0xFC,0xFC,0x3C,0x3C,
  0x1C,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,
  0xF8,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x78,0x78,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0xFF,0x00,0x00,0x00,0xFF,0x00,
  0x03,0xFF,0x0F,0xFC,0xFE,0x11,0xBC,0xE3,
  0x7C,0xC3,0x79,0xC7,0xF7,0xFF,0xFF,0xFF,
  0xC0,0xFF,0xF0,0x3F,0x0F,0xF8,0x0F,0xFF,
  0x1E,0xF1,0x3E,0xE1,0xBF,0xEB,0xFF,0xFF,
  0x00,0xFF,0x03,0xFF,0xFF,0x04,0x0F,0xF8,
  0xDE,0xF1,0x5C,0xF3,0xFD,0xFF,0xFF,0xFF,
  0xC0,0xFF,0xF0,0x3F,0xEF,0x18,0x45,0xBF,
  0x03,0xFE,0x13,0xFE,0x7F,0xFF,0xFF,0xFF,
  0x1E,0xFF,0x7F,0xE1,0xF0,0x8F,0xE0,0x1F,
  0xE0,0x1F,0xC9,0x3F,0xBD,0xFF,0xFF,0xFF,
  0x00,0xFF,0x80,0xFF,0x7F,0xC0,0x78,0xFF,
  0xF6,0x8F,0xF2,0x0F,0xFF,0x5F,0xFF,0xFF,
  0x06,0xFF,0x1F,0xF9,0xFF,0x20,0x7A,0xC5,
  0xF0,0x8F,0xE0,0x9F,0xEB,0xFF,0xFF,0xFF,
  0x00,0xFF,0x83,0xFF,0x7F,0xC4,0x2F,0xF8,
  0x1F,0xF0,0x9E,0xF1,0xFD,0xFF,0xFF,0xFF,
  0xF0,0xFF,0xFC,0x0F,0x83,0x7E,0x03,0xFF,
  0x07,0xFC,0x4F,0xF8,0xEF,0xFA,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0xFF,0x01,0xC3,0xFE,
  0xB7,0x7C,0x97,0x7C,0xFF,0xFF,0xFF,0xFF,
  0x30,0xFF,0xFC,0xCF,0xFB,0x06,0xD1,0x2F,
  0x80,0x7F,0x04,0xFF,0x5F,0xFF,0xFF,0xFF,
  0x07,0xFF,0x1F,0xF8,0xFC,0x23,0x78,0xC7,
  0xF8,0x87,0xF2,0x8F,0xEF,0xFF,0xFF,0xFF,
  0x80,0xFF,0xE0,0x7F,0x1F,0xF0,0x1E,0xFF,
  0x3D,0xE3,0x7C,0xC3,0x7F,0xD7,0xFF,0xFF,
  0x01,0xFF,0x07,0xFE,0xFF,0x08,0x1E,0xF1,
  0xBC,0xE3,0xB8,0xE7,0xFA,0xFF,0xFF,0xFF,
  0x80,0xFF,0xE0,0x7F,0xDF,0x31,0x8B,0x7E,
  0x07,0xFC,0x27,0xFC,0xFF,0xFF,0xFF,0xFF,
  0x3C,0xFF,0xFF,0xC3,0xE0,0x1F,0xC0,0x3F,
  0xC1,0x3F,0x93,0x7E,0x7B,0xFE,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0xFF,0x80,0xF0,0xFF,
  0xED,0x1F,0xE5,0x1F,0xFF,0xBF,0xFF,0xFF,
  0x0C,0xFF,0x3F,0xF3,0xFE,0x41,0xF4,0x8B,
  0xE0,0x1F,0xC1,0x3F,0xD7,0xFF,0xFF,0xFF,
  0x01,0xFF,0x07,0xFE,0xFF,0x88,0x5E,0xF1,
  0x3E,0xE1,0x3C,0xE3,0xFB,0xFF,0xFF,0xFF,
  0xE0,0xFF,0xF8,0x1F,0x07,0xFC,0x07,0xFF,
  0x0F,0xF8,0x9F,0xF0,0xDF,0xF5,0xFF,0xFF,
  0x00,0xFF,0x01,0xFF,0xFF,0x02,0x87,0xFC,
  0x6F,0xF8,0x2E,0xF9,0xFE,0xFF,0xFF,0xFF,
  0x60,0xFF,0xF8,0x9F,0xF7,0x0C,0xA2,0x5F,
  0x01,0xFF,0x09,0xFF,0xBF,0xFF,0xFF,0xFF,
  0x0F,0xFF,0x3F,0xF0,0xF8,0x47,0xF0,0x8F,
  0xF0,0x0F,0xE4,0x1F,0xDE,0xFF,0xFF,0xFF,
  0x00,0xFF,0xC0,0xFF,0x3F,0xE0,0x3C,0xFF,
  0x7B,0xC7,0xF9,0x87,0xFF,0xAF,0xFF,0xFF,
  0x03,0xFF,0x0F,0xFC,0xFF,0x10,0x3D,0xE2,
  0x78,0xC7,0x70,0xCF,0xF5,0xFF,0xFF,0xFF,
  0x00,0xFF,0xC1,0xFF,0xBF,0x62,0x17,0xFC,
  0x0F,0xF8,0x4F,0xF8,0xFE,0xFF,0xFF,0xFF,
  0x78,0xFF,0xFE,0x87,0xC1,0x3F,0x81,0x7F,
  0x83,0x7E,0x27,0xFC,0xF7,0xFD,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0xFF,0x00,0xE1,0xFF,
  0xDB,0x3E,0xCB,0x3E,0xFF,0x7F,0xFF,0xFF,
  0x18,0xFF,0x7E,0xE7,0xFD,0x83,0xE8,0x17,
  0xC0,0x3F,0x82,0x7F,0xAF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x03,0xFC,0x0C,0xF3,
  0x98,0x67,0x1F,0xFF,0xFE,0xFE,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x0C,0xFC,
  0x30,0xF0,0x83,0x80,0x0F,0x7F,0x00,0x00,
  0x01,0xFF,0x10,0xFF,0x00,0xFF,0x3C,0x03,
  0x3F,0x00,0x00,0xFF,0x1F,0xFF,0x00,0x07,
  0x00,0xFF,0x00,0xFF,0x0C,0xF3,0x0F,0xF0,
  0xE7,0x18,0x00,0xFF,0x8F,0xFF,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x03,0xFC,0x86,0x79,
  0xE6,0x19,0x03,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x06,0xFE,
  0x0C,0xFC,0xF8,0xF8,0xF0,0xF3,0x00,0x00,
  0x0C,0xFF,0x60,0xFF,0x00,0xFF,0x1E,0x01,
  0x0F,0x00,0x60,0x1F,0xF9,0xFF,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x0C,0xF3,0x07,0xF8,
  0xF9,0x06,0x00,0xFF,0xFC,0xFF,0x00,0x18,
  0x00,0xFF,0x00,0xFF,0x03,0xFC,0xC3,0x3C,
  0xF9,0x06,0x00,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x03,0xFF,
  0xC3,0x3F,0x7F,0xFF,0xFF,0xFF,0x00,0x00,
  0x30,0xFF,0xC0,0xFF,0x00,0xFF,0x0F,0x00,
  0x03,0x00,0x0E,0x01,0x07,0x3F,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x0C,0xF3,0x03,0xFC,
  0xFE,0x01,0x00,0xFF,0x9F,0xFF,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x03,0xFC,0xE1,0x1E,
  0x7E,0x81,0x00,0xFF,0xCF,0xFF,0x00,0xE0,
  0x01,0xFF,0x01,0xFF,0x00,0xFF,0x81,0x7F,
  0x30,0xCF,0x07,0xFF,0xFF,0xFF,0x00,0x00,
  0x80,0xFF,0x80,0xFF,0x00,0xFF,0x87,0x80,
  0xC0,0xC0,0xE0,0xE0,0xF0,0xF1,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x0C,0xF3,0x81,0x7E,
  0x7F,0x00,0xC0,0x3F,0x7C,0xFF,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x03,0xFC,0xF0,0x0F,
  0x9F,0x60,0x00,0xFF,0xFE,0xFF,0x00,0x03,
  0x06,0xFF,0x06,0xFF,0x03,0xFC,0xC0,0x3F,
  0xCC,0x33,0x00,0xFF,0x7F,0xFF,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC3,0xC0,
  0x30,0xF0,0xFE,0xFE,0xFF,0xFF,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x0C,0xF3,0xC0,0x3F,
  0x1F,0x00,0x18,0x07,0x87,0x9F,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x03,0xFC,0xF8,0x07,
  0xE7,0x18,0x00,0xFF,0xCF,0xFF,0x00,0x00,
  0x18,0xFF,0x0C,0xFF,0x03,0xFC,0x60,0x9F,
  0xF3,0x0C,0x00,0xFF,0xE7,0xFF,0x00,0x0C,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x61,0xE0,
  0x0C,0xFC,0x1F,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x0C,0xF3,0xE0,0x1F,
  0x07,0x00,0xC3,0xC0,0xF8,0xF8,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x7C,0x83,
  0xF9,0x06,0x00,0xFF,0x3C,0xFF,0x00,0x00,
  0xC0,0xFF,0x18,0xFF,0x06,0xF9,0x30,0xCF,
  0xFC,0x03,0x00,0xFF,0x7E,0xFF,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x30,0xF0,
  0xC3,0x3F,0x03,0xFF,0x3F,0xFF,0x00,0x70,
  0x00,0xFF,0x00,0xFF,0x18,0xE7,0xF0,0x0F,
  0x81,0x80,0xF8,0xF8,0xFF,0xFF,0x00,0x00,
  0x03,0xFF,0x00,0xFF,0x04,0xFB,0x3E,0xC1,
  0xFE,0x01,0x30,0x0F,0xC3,0xCF,0x00,0x00,
  0x00,0xFF,0x30,0xFF,0x06,0xF9,0x18,0xE7,
  0x3F,0xC0,0x00,0xFF,0xE7,0xFF,0x00,0x00,
  0x19,0x00,0x1F,0xE0,0xFF,0x00,0xF3,0x0C,
  0x30,0xCF,0xC0,0x3F,0xE0,0x1F,0x8F,0xFF,
  0xFF,0x00,0xC1,0x3F,0xE0,0x1F,0x83,0x7F,
  0x3E,0xFE,0xF8,0xF8,0x70,0xF0,0xC0,0xC0,
  0x8C,0x7C,0xF0,0xF0,0xE0,0xE0,0x80,0x80,
  0x07,0x00,0x1F,0x00,0x0F,0x00,0xFC,0x03,
  0x18,0x00,0x7F,0x00,0x3F,0x00,0x7F,0x00,
  0xC6,0x39,0xFC,0x03,0xFF,0x00,0x00,0xFF,
  0xCE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x39,0xC6,0x73,0x8C,0x3F,0xC0,0x00,0xFF,
  0x73,0x00,0x1F,0xE0,0xFF,0x00,0xFC,0x03,
  0xC7,0x38,0x8E,0x71,0xE3,0x1C,0x07,0xFF,
  0xFF,0x00,0xC1,0x3F,0xF0,0x0F,0xE0,0x1F,
  0x07,0xFF,0x0F,0xFF,0x83,0x7F,0x1F,0xFF,
  0x38,0xF8,0xF0,0xF0,0x70,0xF0,0xE0,0xE0,
  0xC0,0xC0,0xC1,0xC0,0x80,0x80,0x81,0x80,
  0x73,0x00,0x7F,0x00,0x1F,0x00,0x1F,0x00,
  0xF8,0x07,0xFF,0x00,0x3F,0x00,0xF0,0x0F,
  0x9C,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xE7,0x18,0xC7,0x38,0xF8,0x07,0x00,0xFF,
  0xC7,0x00,0x3F,0xC0,0xFF,0x00,0xFF,0x00,
  0x18,0xE7,0x1C,0xE3,0xFF,0x00,0x00,0xFF,
  0xFE,0x01,0xC1,0x3F,0xF8,0x07,0x18,0xE7,
  0xE0,0x1F,0xE0,0x1F,0x9C,0x63,0x0E,0xFF,
  0x60,0xE0,0xF0,0xF0,0x30,0xF0,0x38,0xF8,
  0xFC,0xFC,0x7C,0xFC,0x0E,0xFE,0x7E,0xFE,
  0xE6,0x00,0x7F,0x00,0x0F,0x00,0x07,0x00,
  0x1F,0x00,0x0F,0x00,0x01,0x00,0x07,0x00,
  0x31,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x1C,0xE3,0xFE,0x01,0xFF,0x00,0xE0,0x1F,
  0x8F,0x00,0x3F,0xC0,0xFF,0x00,0xFF,0x00,
  0x63,0x9C,0x31,0xCE,0xE3,0x1C,0x00,0xFF,
  0xF8,0x07,0xC1,0x3F,0xFC,0x03,0xC6,0x39,
  0x9C,0x63,0xC6,0x39,0xFC,0x03,0x00,0xFF,
  0xC1,0xC0,0xF0,0xF0,0x18,0xF8,0x06,0xFE,
  0x1F,0xFF,0x07,0xFF,0x70,0x8F,0x38,0xFF,
  0x8C,0x00,0x7F,0x00,0x07,0x00,0x01,0x00,
  0x83,0x80,0xE0,0xE0,0x70,0xF0,0xFC,0xFC,
  0x67,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF3,0x0C,0xFF,0x00,0x07,0x00,0x0F,0x00,
  0x3F,0x00,0x3F,0xC0,0xFF,0x00,0xFF,0x00,
  0x8E,0x71,0xE3,0x1C,0xFF,0x00,0xC0,0x3F,
  0xF3,0x0F,0xC1,0x3F,0xFE,0x01,0xF1,0x0E,
  0x71,0x8E,0x8C,0x73,0x1F,0xE0,0x00,0xFF,
  0x83,0x80,0xF0,0xF0,0x0C,0xFC,0x81,0x7F,
  0x81,0x7F,0x70,0x8F,0xF3,0x0C,0x00,0xFF,
  0x39,0x00,0x7F,0x00,0x03,0x00,0x80,0x80,
  0xF0,0xF0,0x7E,0xFE,0x81,0x7F,0x71,0xFF,
  0xCE,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,
  0x3E,0x01,0x07,0x00,0xC0,0xC0,0xF8,0xF8,
  0x7F,0x00,0x3F,0xC0,0xFF,0x00,0xFF,0x00,
  0x31,0xCE,0xFF,0x00,0x3F,0x00,0x3F,0x00,
  0xE7,0x1F,0xC1,0x3F,0xFF,0x00,0xFC,0x03,
  0xCE,0x31,0x38,0xC7,0xFC,0x03,0x00,0xFF,
  0x0E,0x00,0xE0,0xE0,0x06,0xFE,0x70,0x8F,
  0x38,0xC7,0xE3,0x1C,0x7F,0x80,0x00,0xFF,
  0x73,0x00,0xFF,0x00,0x01,0x00,0x60,0xE0,
  0x3E,0xFE,0x03,0xFF,0x8E,0x71,0x00,0xFF,
  0x18,0x00,0xFE,0x01,0xFF,0x00,0x1F,0x00,
  0x07,0x00,0xE0,0xE0,0x06,0xFE,0xE7,0xFF,
  0xFF,0xFF,0xFE,0xFE,0xF8,0xF8,0x00,0x00,
  0x00,0x00,0x1F,0x00,0x3F,0xC0,0xFF,0x00,
  0x03,0x00,0x00,0x07,0x1F,0xFF,0x00,0x00,
  0x00,0x00,0xFF,0x00,0xF0,0x0F,0xFC,0x03,
  0x80,0x7F,0x1C,0xFF,0x87,0xFF,0x00,0x00,
  0x00,0x00,0x81,0x7F,0x1F,0xFF,0x07,0xFF,
  0x00,0xFF,0x71,0xFF,0xFC,0xFF,0x00,0x00,
  0x00,0xF0,0xE0,0xE0,0xC0,0xC0,0x00,0x00,
  0x00,0xFF,0xC7,0xFF,0x7F,0xFF,0x00,0x00,
  0x00,0x00,0x07,0x00,0xFF,0x00,0x1F,0x00,
  0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0x00,0x1F,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0xFF,0xFF,0xFF,0xFE,0xFE,0x00,0x00,
  0x00,0x00,0xF8,0x00,0xF8,0x07,0xFF,0x00,
  0x03,0x00,0x00,0x03,0x07,0x3F,0x00,0x00,
  0x00,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0x80,0x7F,0x0E,0xFF,0xE1,0xFF,0x00,0x00,
  0x00,0x00,0xFC,0x03,0xC0,0x3F,0xFC,0x03,
  0x00,0xFF,0x38,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0x07,0x07,0xFF,0x7F,0xFF,0x07,0xFF,
  0x00,0xFF,0xE3,0xFF,0x1F,0xFF,0x00,0x00,
  0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
  0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0x00,0x38,0x00,0xFF,0x00,0x3F,0x00,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0x03,0x00,0x00,0x01,0x81,0x8F,0x00,0x00,
  0x00,0x00,0xE3,0x00,0xE1,0x1E,0xFF,0x00,
  0x80,0x7F,0x07,0xFF,0xFC,0xFF,0x00,0x00,
  0x00,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x1C,0xFF,0x7F,0xFF,0x00,0x00,
  0x00,0x00,0xE0,0x1F,0x80,0x7F,0xF8,0x07,
  0x00,0xFF,0x71,0xFF,0xC7,0xFF,0x00,0x00,
  0x00,0x70,0x38,0xF8,0xFC,0xFC,0x0F,0xFF,
  0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0x00,0x01,0x00,0x07,0x00,0x00,0x00,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0x00,0xE3,0x00,0xFF,0x00,0x3F,0x00,
  0x03,0x00,0x80,0x80,0xE0,0xE3,0x00,0x00,
  0x00,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x80,0x7F,0x03,0xFF,0x7F,0xFF,0x00,0x00,
  0x00,0x00,0x1F,0x00,0xC7,0x38,0xFF,0x00,
  0x00,0xFF,0x8E,0xFF,0x1F,0xFF,0x00,0x00,
  0x00,0x00,0xFF,0x00,0xFE,0x01,0xFF,0x00,
  0x00,0xFF,0x38,0xFF,0xF1,0xFF,0x00,0x00,
  0x00,0x07,0x81,0x7F,0x03,0xFF,0xF8,0x07,
  0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0x80,0xE0,0xE0,0xF8,0xF8,0x0E,0xFE,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0x00,0x07,0x00,0x0F,0x00,0x00,0x00,
  0x07,0x00,0xC0,0xC0,0xF8,0xF8,0x00,0x00,
  0x00,0x00,0x1F,0x00,0xFF,0x00,0x7F,0x00,
  0x00,0xFF,0x01,0xFF,0x1F,0xFF,0x00,0x00,
  0x00,0x00,0xF8,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0xC7,0xFF,0xC7,0xFF,0x00,0x00,
  0x00,0x00,0x7F,0x00,0x1F,0xE0,0xFF,0x00,
  0x00,0xFF,0x1C,0xFF,0xFC,0xFF,0x00,0x00,
  0x00,0x00,0xFC,0x03,0xFC,0x03,0xFF,0x00,
  0x03,0xFF,0x7F,0xFF,0x7F,0xFF,0x00,0x00,
  0x00,0x38,0x07,0xFF,0x07,0xFF,0xF0,0x0F,
  0xFF,0x00,0x8F,0x70,0xE1,0x1E,0x78,0x87,
  0x0F,0xF0,0xC0,0x3F,0x80,0x7F,0xF0,0x0F,
  0xF8,0x07,0x01,0xFF,0xC0,0x3F,0x07,0xFF,
  0x01,0xFF,0x3F,0xFF,0x7F,0xFF,0x0F,0xFF,
  0x0E,0xFE,0xFC,0xFC,0x38,0xF8,0xF0,0xF0,
  0xE0,0xE0,0xC0,0xC0,0x80,0x80,0x00,0x00,
  0x00,0x00,0x03,0x00,0x00,0x00,0x0F,0x00,
  0x03,0x00,0x3F,0x00,0x7F,0x00,0x0F,0x00,
  0x3F,0x00,0xFF,0x00,0xFF,0x00,0xE1,0x1E,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xF0,0x0F,0xFF,0x00,0xE3,0x1C,
  0xFF,0x00,0x87,0x78,0x8F,0x70,0xF0,0x0F,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xC3,0x3C,
  0xF8,0x07,0x87,0x78,0x0F,0xF0,0xFF,0x00,
  0xFF,0x00,0xC3,0x3C,0xFC,0x03,0xC7,0x38,
  0x78,0x87,0x87,0x78,0x0F,0xF0,0xF0,0x0F,
  0xF8,0x07,0xC0,0x3F,0x78,0x87,0x80,0x7F,
  0x78,0x87,0x00,0xFF,0x00,0xFF,0xF0,0x0F,
  0x0F,0xFF,0x7F,0xFF,0x0F,0xFF,0x7F,0xFF,
  0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0xFF,
  0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x1F,0x00,0xFF,0x00,0x1F,0x00,0xFE,0x01,
  0x1F,0x00,0xFF,0x00,0xFF,0x00,0x0F,0x00,
  0xFF,0x00,0xFC,0x03,0xFF,0x00,0x1C,0xE3,
  0xFF,0x00,0xFE,0x01,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0x7F,0x80,0xFF,0x00,0x3C,0xC3,
  0xFF,0x00,0x1E,0xE1,0x0F,0xF0,0xF0,0x0F,
  0xFF,0x00,0xF0,0x0F,0xFF,0x00,0x38,0xC7,
  0xC3,0x3C,0x1E,0xE1,0x0E,0xF1,0xFF,0x00,
  0xFC,0x03,0xE0,0x1F,0x0F,0xF0,0x78,0x87,
  0xC3,0x3C,0x1E,0xE1,0x1E,0xE1,0xF0,0x0F,
  0x07,0xFF,0x3F,0xFF,0x01,0xFF,0x0F,0xFF,
  0xC0,0x3F,0x03,0xFF,0x01,0xFF,0xF0,0x0F,
  0x80,0x80,0xC0,0xC0,0xE0,0xE0,0xF0,0xF0,
  0x78,0xF8,0xFC,0xFC,0xFE,0xFE,0x0F,0xFF,
  0x1F,0x00,0x7F,0x00,0x03,0x00,0x1F,0x00,
  0x00,0x00,0x03,0x00,0x01,0x00,0x00,0x00,
  0xFF,0x00,0xFE,0x01,0xFF,0x00,0xE1,0x1E,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0x0F,0x00,
  0xFF,0x00,0x1F,0xE0,0xFF,0x00,0xC3,0x3C,
  0xFF,0x00,0xF8,0x07,0xFE,0x01,0xFF,0x00,
  0xFF,0x00,0xFC,0x03,0xFF,0x00,0xC3,0x3C,
  0xFE,0x01,0x78,0x87,0x1E,0xE1,0xF0,0x0F,
  0xFE,0x01,0x78,0x87,0xE1,0x1E,0x87,0x78,
  0x1E,0xE1,0x78,0x87,0x1E,0xE1,0xFF,0x00,
  0x03,0xFF,0x0F,0xFF,0xE0,0x1F,0x80,0x7F,
  0x1C,0xE3,0x78,0x87,0x1C,0xE3,0xF0,0x0F,
  0x80,0x80,0xE0,0xE0,0x3C,0xFC,0xFF,0xFF,
  0x03,0xFF,0x0F,0xFF,0x03,0xFF,0xF0,0x0F,
  0x0F,0x00,0x1F,0x00,0x00,0x00,0x01,0x00,
  0xC0,0xC0,0xF0,0xF0,0xFC,0xFC,0x0F,0xFF,
  0xFF,0x00,0xFF,0x00,0x7F,0x00,0xFE,0x01,
  0x07,0x00,0x0F,0x00,0x03,0x00,0x00,0x00,
  0xFF,0x00,0x87,0x78,0xFF,0x00,0x3C,0xC3,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0x0F,0x00,
  0xFF,0x00,0xFE,0x01,0xFF,0x00,0x3C,0xC3,
  0xFF,0x00,0xE1,0x1E,0xFC,0x03,0xFF,0x00,
  0xFE,0x01,0x1E,0xE1,0xFC,0x03,0x78,0x87,
  0xF0,0x0F,0xE1,0x1E,0x3C,0xC3,0xF8,0x07,
  0xC1,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFE,0xFE,0xFC,0xFC,0xF8,0xF8,0xE0,0xE0,
  0xC0,0xC0,0x80,0x83,0xFF,0xFF,0xFF,0xFF,
  0x01,0x00,0x03,0x00,0x07,0x00,0x00,0x0F,
  0x00,0x1F,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFE,0x01,0xC0,0x3F,0x80,0x7F,0x07,0xFF,
  0x0F,0xFF,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x87,0xFF,
  0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x83,0xFF,
  0x87,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC3,0xFF,
  0xC3,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xF0,0xFF,0x0F,0xFF,0x1F,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,
  0xFF,0x00,0xF0,0x0F,0xF8,0x07,0x00,0x7F,
  0x00,0x7F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x78,0xFF,
  0x7C,0xFF,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x3C,0xFF,
  0x3C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x3E,0xFF,
  0x1E,0xFF,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x1F,0xFF,
  0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x78,0xFF,0x03,0xFF,0x01,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x80,0x80,0xC0,0xC0,0xE0,0xE0,0xF8,0xF8,
  0xFC,0xFC,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,
  0x7F,0x00,0x1E,0x01,0x0F,0x00,0x00,0x07,
  0x00,0x03,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,
  0xC0,0x3F,0x00,0xFF,0x00,0xFF,0x03,0xFF,
  0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC3,0xFF,
  0xE0,0xFF,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xE1,0xFF,
  0x78,0xFF,0xC1,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x3C,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0xFF,
  0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x3F,0xFF,0xFF,0xFF,0x3F,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xE0,0xE0,0xF8,0xF8,0xFE,0xFE,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x1F,0x00,0x07,0x00,0x01,0x00,0x80,0x80,
  0xE0,0xE0,0xFC,0xFC,0xFF,0xFF,0xFF,0xFF,
  0xE0,0x1F,0x80,0x7F,0xF0,0x0F,0x00,0x3F,
  0x00,0x0F,0x03,0x3F,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x3E,0xFF,
  0x07,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0x07,0x07,0x07,0x03,0x0F,0x03,
  0x1F,0x03,0x1F,0x03,0x1B,0x03,0x1B,0x03,
  0xFF,0xFF,0xF0,0xC0,0xF0,0x80,0xE0,0x80,
  0xC0,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0xFF,0xFF,0x0E,0x00,0x1E,0x00,0x1E,0x00,
  0x78,0x00,0x70,0x00,0xE0,0x00,0xE0,0x00,
  0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0x00,0x03,0x00,0x03,0x00,0x03,0x00,
  0xFF,0xFF,0x70,0x00,0x70,0x00,0xF0,0x00,
  0xE0,0x00,0xC0,0x00,0xC0,0x00,0x80,0x00,
  0xFF,0xFF,0x03,0x00,0x06,0x00,0x0E,0x00,
  0x1C,0x00,0x3C,0x00,0x3C,0x00,0xF8,0x00,
  0xFF,0xFF,0x03,0x00,0x07,0x00,0x07,0x00,
  0x0F,0x00,0x0F,0x00,0x1E,0x00,0x3E,0x00,
  0xFF,0xFF,0x80,0x00,0x80,0x00,0x80,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0x3C,0x00,0x30,0x00,0x30,0x00,
  0x70,0x00,0x70,0x00,0x70,0x00,0xE0,0x00,
  0x33,0x03,0x63,0x03,0xE3,0x03,0xE3,0x03,
  0xE7,0x07,0xEF,0x0F,0xFF,0xFF,0xFF,0xFF,
  0x81,0x80,0x81,0x80,0x87,0x80,0x87,0x80,
  0xCF,0xC0,0xEF,0xE0,0xFF,0xFF,0xFF,0xFF,
  0xC0,0x00,0xC0,0x00,0x80,0x00,0x80,0x00,
  0x80,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
  0x0F,0x00,0x0F,0x00,0x3C,0x00,0x78,0x00,
  0x70,0x00,0xF0,0x00,0xFF,0xFF,0xFF,0xFF,
  0x83,0x00,0x07,0x00,0x07,0x00,0x0F,0x00,
  0x0E,0x00,0x1F,0x00,0xFF,0xFF,0xFF,0xFF,
  0xF0,0x00,0xC0,0x00,0x80,0x00,0x00,0x00,
  0x01,0x00,0x43,0x00,0xFF,0xFF,0xFF,0xFF,
  0x7C,0x00,0x70,0x00,0xF0,0x00,0xF8,0x00,
  0xF0,0x00,0xE0,0x00,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x03,0x00,0x07,0x00,
  0x0F,0x00,0x1F,0x00,0xFF,0xFF,0xFF,0xFF,
  0xE0,0x00,0xE0,0x00,0xC0,0x00,0x80,0x00,
  0x01,0x00,0x01,0x00,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x39,0x00,0xFC,0x00,0xFF,0x00,
  0x3F,0xC0,0x73,0x8C,0xF8,0x07,0xC6,0x39,
  0x00,0x00,0x8F,0x00,0xFF,0x00,0xFF,0x00,
  0x8C,0x73,0x98,0x67,0xC6,0x39,0x70,0x8F,
  0x00,0x00,0xF9,0x07,0xC3,0x3F,0x83,0x7F,
  0x1E,0xFE,0x3E,0xFE,0x0C,0xFC,0x7C,0xFC
};
/* Start of tile array. */
const unsigned  char Persp3DTilesBLK1[] =
{
  0x00,0xC0,0x83,0x80,0x80,0x80,0x01,0x00,
  0x0F,0x00,0x0F,0x00,0x07,0x00,0x3F,0x00,
  0x00,0x00,0x39,0x00,0xCF,0x00,0xFF,0x00,
  0xFC,0x03,0x19,0xE6,0xFF,0x00,0xF1,0x0E,
  0x00,0x00,0x9C,0x00,0xE7,0x00,0xFF,0x00,
  0xFE,0x01,0xCE,0x31,0xF3,0x0C,0x9C,0x63,
  0x00,0x00,0xFF,0x00,0xFE,0x01,0xFC,0x03,
  0x70,0x8F,0x60,0x9F,0x9C,0x63,0xE0,0x1F,
  0x00,0x0C,0x9C,0x7C,0x1C,0xFC,0x18,0xF8,
  0xF8,0xF8,0xF8,0xF8,0x38,0xF8,0xF8,0xF8,
  0x00,0x00,0x39,0x00,0x0E,0x00,0x0F,0x00,
  0x3F,0x00,0x3C,0x03,0x0F,0x00,0x7F,0x00,
  0x00,0x00,0x9C,0x00,0x7F,0x00,0xFF,0x00,
  0xE3,0x1C,0x63,0x9C,0xFF,0x00,0xE3,0x1C,
  0x00,0x00,0xC7,0x00,0x3F,0x00,0xFF,0x00,
  0xF9,0x06,0x39,0xC6,0xC6,0x39,0x39,0xC6,
  0x00,0x00,0xFC,0x03,0xF0,0x0F,0xF0,0x0F,
  0x83,0x7F,0xC3,0x3F,0x30,0xCF,0xC1,0x3F,
  0x00,0xC0,0xC1,0xC0,0xC0,0xC0,0xE0,0xE0,
  0xE0,0xE0,0xE0,0xE0,0x60,0xE0,0xE0,0xE0,
  0x00,0x00,0x9C,0x00,0x73,0x00,0x3F,0x00,
  0xFF,0x00,0xF9,0x06,0x3F,0x00,0xFF,0x00,
  0x00,0x00,0xC6,0x00,0xF9,0x00,0xFF,0x00,
  0x9F,0x60,0x8C,0x73,0xFF,0x00,0xC6,0x39,
  0x00,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0xC6,0x39,0x67,0x98,0x9C,0x63,0x73,0x8C,
  0x00,0x0C,0xCE,0x3E,0x06,0xFE,0x83,0x7F,
  0x0F,0xFF,0x0F,0xFF,0xE1,0x1F,0x83,0x7F,
  0x00,0x00,0x1C,0x00,0x03,0x00,0x01,0x00,
  0x87,0x80,0x83,0x80,0xC0,0xC0,0xC1,0xC0,
  0x00,0x00,0xCE,0x00,0x9F,0x00,0xFF,0x00,
  0xFE,0x01,0xE6,0x19,0x7F,0x00,0xFF,0x00,
  0x00,0x00,0x63,0x00,0xCF,0x00,0xFF,0x00,
  0x7F,0x80,0x31,0xCE,0xFE,0x01,0x9C,0x63,
  0x00,0x00,0xFE,0x01,0xF8,0x07,0xFC,0x03,
  0x18,0xE7,0x9C,0x63,0x31,0xCE,0xE7,0x18,
  0x00,0xC0,0x60,0xE0,0x30,0xF0,0x18,0xF8,
  0x3C,0xFC,0x1E,0xFE,0x83,0x7F,0x0F,0xFF,
  0x00,0x00,0xCE,0x00,0x18,0x00,0x0F,0x00,
  0x1F,0x00,0x0F,0x00,0x00,0x00,0x83,0x80,
  0x00,0x00,0x63,0x00,0xFE,0x00,0xFF,0x00,
  0xF1,0x0E,0x9C,0x63,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x3F,0x00,0x7F,0x00,0xFF,0x00,
  0xFC,0x03,0xC6,0x39,0xFC,0x03,0x39,0xC6,
  0x00,0x0C,0xE7,0x1F,0xC1,0x3F,0xF0,0x0F,
  0xE1,0x1F,0x30,0xCF,0xE7,0x18,0xCE,0x31,
  0x00,0x00,0x0E,0x00,0x80,0x80,0xE0,0xE0,
  0xF0,0xF0,0x78,0xF8,0x0E,0xFE,0x1F,0xFF,
  0x00,0x00,0x67,0x00,0xC7,0x00,0x3F,0x00,
  0x7F,0x00,0x3E,0x01,0x03,0x00,0x07,0x00,
  0x00,0x00,0x31,0x00,0xF3,0x00,0xFF,0x00,
  0xC7,0x38,0x73,0x8C,0xFF,0x00,0xFE,0x01,
  0x00,0x00,0xFF,0x00,0xFE,0x01,0xFF,0x00,
  0xF3,0x0C,0x18,0xE7,0xF9,0x06,0x73,0x8C,
  0x7F,0x00,0x00,0x00,0xC7,0xC7,0x7F,0x7F,
  0x00,0xFF,0x00,0xFF,0x31,0xCE,0x1C,0xE3,
  0x9C,0x00,0x07,0x07,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x8E,0x71,0x7F,0x80,
  0x18,0x1F,0xF0,0xFF,0xF0,0xFF,0xE0,0xFC,
  0x00,0xFF,0x00,0xFF,0x71,0x8E,0x9F,0x60,
  0x0F,0xF0,0x70,0x80,0x03,0x83,0xF8,0xF8,
  0x00,0xFF,0x00,0xFF,0xFF,0x00,0xFC,0x00,
  0xFC,0x00,0x00,0x00,0x18,0x18,0xFE,0xFE,
  0x00,0xFF,0x00,0xF1,0x8C,0x0F,0x1C,0x1F,
  0x7F,0x00,0x00,0x00,0xC7,0xC7,0x3F,0x3F,
  0x00,0xFF,0x00,0xFF,0x1C,0xE3,0x03,0xFC,
  0x38,0x00,0x07,0x07,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x63,0x9C,0x1F,0xE0,
  0x30,0x3F,0xF0,0xFF,0xF0,0xFF,0xF0,0xFC,
  0x00,0xFF,0x00,0xFF,0x1C,0xE3,0xE3,0x1C,
  0x0F,0xF0,0x70,0x80,0x03,0x83,0x7C,0x7C,
  0x00,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0x00,
  0xFC,0x00,0x00,0x00,0x18,0x18,0xFF,0xFF,
  0x00,0xFF,0x00,0xF8,0xE7,0x07,0x07,0x07,
  0xFE,0x00,0x00,0x00,0xE7,0xE7,0x1F,0x1F,
  0x00,0xFF,0x00,0xFF,0x07,0xF8,0x00,0xFF,
  0x30,0x00,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x38,0xC7,0xE7,0x18,
  0x70,0x7F,0xF0,0xFF,0xF0,0xFF,0xF0,0xFE,
  0x00,0xFF,0x00,0xFF,0xC7,0x38,0xF8,0x07,
  0x1F,0xE0,0x60,0x80,0x03,0x83,0x7C,0x7C,
  0x00,0xFF,0x00,0xFF,0x3F,0xC0,0xFF,0x00,
  0xF9,0x00,0x00,0x00,0x9C,0x9C,0x7F,0x7F,
  0x00,0xFF,0x00,0xFE,0xF9,0x01,0xC0,0x00,
  0xFE,0x00,0x00,0x00,0xE7,0xE7,0x9F,0x9F,
  0x00,0xFF,0x00,0x7F,0xC1,0xFE,0xC0,0xFF,
  0x70,0x00,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0xCE,0x31,0x39,0xC6,
  0x60,0x7F,0xF0,0xFF,0xF0,0xFF,0xF8,0xFE,
  0x00,0xFF,0x00,0xFF,0x71,0x8E,0xFE,0x01,
  0x3F,0xC0,0x60,0x80,0x03,0x83,0x3E,0x3E,
  0x00,0xFF,0x00,0xFF,0x8F,0x70,0x3F,0xC0,
  0xF1,0x00,0x00,0x00,0x9C,0x9C,0x3F,0x3F,
  0x00,0xFF,0x00,0xFF,0xFC,0x00,0xF8,0x00,
  0xFC,0x00,0x00,0x00,0xE7,0xE7,0x8F,0x8F,
  0x00,0xFF,0x00,0x1F,0x70,0x7F,0x30,0x3F,
  0x60,0x00,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x63,0x9C,0x0E,0xF1,
  0xC0,0xFF,0xE0,0xFF,0xF0,0xFF,0xF8,0xFF,
  0x00,0xFF,0x00,0xFF,0x9C,0x63,0x3F,0xC0,
  0x3F,0xC0,0xE0,0x00,0x03,0x83,0x3F,0x3F,
  0x00,0xFF,0x00,0xFF,0x63,0x9C,0xCF,0x30,
  0xF3,0x00,0x00,0x00,0x9C,0x9C,0x3F,0x3F,
  0x00,0xFF,0x00,0xFF,0xFF,0x00,0xFE,0x00,
  0xF8,0x00,0x00,0x00,0xE7,0xE7,0xCF,0xCF,
  0x00,0xFF,0x00,0xCF,0x18,0x1F,0x0E,0x0F,
  0xC1,0x01,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x18,0xE7,0x01,0xFE,
  0xC0,0xFF,0xE0,0xFF,0xF8,0xFF,0xFC,0xFF,
  0x00,0xFF,0x00,0xFF,0xE7,0x18,0x8F,0x70,
  0x7F,0x80,0xE0,0x00,0x01,0xC1,0x1F,0x1F,
  0x00,0xFF,0x00,0xFF,0x38,0xC7,0xF3,0x0C,
  0xE7,0x00,0x00,0x00,0x8C,0x8C,0x1F,0x1F,
  0x00,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0x3F,0xC0,0xFF,0x00,0xFF,0x00,
  0xC7,0x00,0xFF,0x00,0xFE,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0x8F,0x00,0xFF,0x00,
  0x18,0x00,0xFF,0x00,0x71,0x00,0x8F,0x00,
  0x1F,0x00,0xFF,0x00,0xF1,0x00,0xFC,0x00,
  0xE3,0x00,0x38,0x00,0xC7,0x00,0xF1,0x00,
  0xE0,0x00,0xF8,0x00,0xC1,0x01,0x70,0x00,
  0x83,0x03,0xE0,0x00,0x07,0x07,0xC0,0x00,
  0xF8,0xFF,0x38,0x3F,0xF8,0xFF,0x70,0x7F,
  0xF0,0xFF,0xE0,0xFF,0xE0,0xFF,0xC0,0xFF,
  0x1F,0xE0,0x07,0xF8,0x3F,0xC0,0x0F,0xF0,
  0x7E,0x80,0x0F,0xF0,0xFF,0x00,0x1F,0xE0,
  0xFF,0x00,0xFF,0x00,0xF8,0x00,0xFF,0x00,
  0x31,0x00,0xFF,0x00,0xF1,0x00,0xFC,0x00,
  0xE7,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xC6,0x00,0xF1,0x00,0x8E,0x00,0x7F,0x00,
  0xF8,0x00,0xFF,0x00,0x38,0x00,0xC7,0x00,
  0x38,0x00,0xC7,0x00,0x38,0x00,0xC6,0x00,
  0x1F,0x1F,0x07,0x07,0x1F,0x1F,0x07,0x07,
  0x3F,0x3F,0x07,0x07,0x3F,0x3F,0x07,0x07,
  0x07,0xF8,0x00,0xFF,0x07,0xF8,0x00,0xFF,
  0x03,0xFC,0x00,0xFF,0x03,0xFC,0x00,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xE3,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x80,
  0xF8,0x00,0xFF,0x00,0x1F,0x00,0xFF,0x00,
  0x9C,0x00,0xFF,0x00,0x8E,0x00,0xF1,0x00,
  0xFF,0x00,0xFF,0x00,0xE3,0x00,0xFC,0x00,
  0x73,0x00,0x8E,0x00,0x71,0x00,0xFE,0x00,
  0x07,0x07,0xE0,0x00,0x83,0x03,0x70,0x00,
  0x81,0x01,0x30,0x00,0xC0,0x00,0x38,0x00,
  0xE0,0xFF,0xE0,0xFF,0xE0,0xFF,0x70,0x7F,
  0xF0,0xFF,0x38,0x3F,0xF8,0xFF,0x1C,0x1F,
  0xFF,0x00,0x1F,0xE0,0x7F,0x80,0x0F,0xF0,
  0x3E,0xC0,0x07,0xF8,0x1F,0xE0,0x03,0xFC,
  0xFF,0x00,0xFF,0x00,0xF1,0x00,0xFF,0x00,
  0x38,0x00,0xFF,0x00,0xFC,0x00,0xFF,0x00,
  0x1F,0x00,0xFF,0x00,0xFE,0x00,0xFF,0x00,
  0xE7,0x00,0xFC,0x00,0x71,0x00,0xCF,0x00,
  0xE0,0x00,0xFC,0x00,0x70,0x00,0xC7,0x00,
  0x1C,0x00,0x73,0x00,0x8E,0x00,0xF8,0x00,
  0xF8,0xFF,0x1C,0x1F,0x3E,0x3F,0x07,0x07,
  0x1F,0x1F,0x81,0x01,0x07,0x07,0xE0,0x00,
  0x1F,0xE0,0x03,0xFC,0x0F,0xF0,0x00,0xFF,
  0x83,0xFC,0xC0,0xFF,0xC0,0xFF,0xE0,0xFF,
  0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFF,0x00,
  0xF1,0x00,0x3F,0xC0,0xFF,0x00,0x0F,0xF0,
  0xE7,0x00,0xFF,0x00,0x3F,0x00,0xFF,0x00,
  0x8E,0x00,0xFF,0x00,0xE3,0x00,0xFE,0x00,
  0xF8,0x00,0xFF,0x00,0xC7,0x00,0xFC,0x00,
  0x31,0x00,0xE7,0x00,0x8E,0x00,0x3F,0x00,
  0x1F,0x1F,0x81,0x01,0x07,0x07,0x70,0x00,
  0xC1,0x01,0x1C,0x00,0x70,0x00,0xE7,0x00,
  0x07,0xF8,0x80,0xFF,0xC0,0xFF,0x70,0x7F,
  0xF8,0xFF,0x1C,0x1F,0x3F,0x3F,0x03,0x03,
  0xFF,0x00,0x7F,0x80,0xFF,0x00,0x0F,0xF0,
  0x1F,0xE0,0x01,0xFE,0x07,0xF8,0x80,0xFF,
  0xF8,0x00,0xFF,0x00,0xE3,0x00,0xFF,0x00,
  0x1C,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x80,
  0xFF,0x00,0xFF,0x00,0xFC,0x00,0xFF,0x00,
  0xE3,0x00,0xFE,0x00,0x1C,0x00,0xF8,0x00
};

/* End of PERSP3DTILES.B5.C */
