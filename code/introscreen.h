//------------------------------------------------------------------------------
// File generated by LCD Assistant
// http://en.radzio.dxp.pl/bitmap_converter/
//------------------------------------------------------------------------------
//504?
//84x48 = 4032/8 = 504
//buffer[LCDWIDTH * LCDHEIGHT / 8]
//

#include <avr/pgmspace.h>

const unsigned char introScreen [] PROGMEM=  {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF8, 0xF8, 0xF8,
	0xFC, 0xFC, 0xFC, 0xFC, 0xFE, 0xFE, 0x7E, 0x7E, 0x7E, 0x3F, 0x3F, 0xBF, 0xBF, 0xBF, 0x9F, 0xDF,
	0xDF, 0xDF, 0x5F, 0x5F, 0x5F, 0xDF, 0x9F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1C, 0x1C, 0x1C, 0x1C,
	0x18, 0x18, 0x38, 0x38, 0x30, 0x30, 0x30, 0x60, 0x60, 0x40, 0xC0, 0x80, 0x80, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
	0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0xBF, 0xDF,
	0x4F, 0x6F, 0x27, 0x13, 0x1B, 0x09, 0x0D, 0x05, 0x0C, 0x1E, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0x3F, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0E, 0x3C, 0xF0, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0xF8,
	0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0xFC,
	0xFE, 0xE3, 0xE1, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xF0, 0xFC, 0xFE, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0,
	0xE0, 0xE0, 0xE0, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xFC, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x0F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x3F, 0x0F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x07, 0x0F, 0x0F, 0x0E, 0x1E, 0x1C,
	0x38, 0x30, 0x30, 0x60, 0x60, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F,
	0x1F, 0x37, 0x31, 0x60, 0x60, 0x60, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x60, 0x60,
	0x20, 0x33, 0x3F, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x38, 0x40, 0x40, 0x38, 0x00, 0x00, 0x00, 0x7E, 0x32, 0x4C, 0x00, 0x60, 0x1C, 0x12, 0x1C, 0x60,
	0x00, 0x00, 0x7E, 0x42, 0x24, 0x18, 0x00, 0x00, 0x00, 0x78, 0x06, 0x38, 0x40, 0x38, 0x06, 0x78,
	0x00, 0x00, 0x30, 0x48, 0x48, 0x30, 0x00, 0x00, 0x78, 0x08, 0x08, 0x70, 0x00, 0x7A, 0x00, 0x00,
	0x08, 0x7E, 0x08, 0x00, 0x00, 0x30, 0x48, 0x48, 0x30, 0x00, 0x00, 0x78, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
