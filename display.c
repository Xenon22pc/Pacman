#include	"display.h"

// ==========================================================
//	File Scope Variables
// ==========================================================
//

#define	ASC8X16_Use_Display_Char_Only
const uint8_t Font_ASC8X16[256*16] = {
#ifndef ASC8X16_Use_Display_Char_Only
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0x00
        0x00,0x00,0x7E,0x81,0xA5,0x81,0x81,0xBD,0x99,0x81,0x81,0x7E,0x00,0x00,0x00,0x00,       //0x01
        0x00,0x00,0x7E,0xFF,0xDB,0xFF,0xFF,0xC3,0xE7,0xFF,0xFF,0x7E,0x00,0x00,0x00,0x00,       //0x02
        0x00,0x00,0x00,0x00,0x6C,0xFE,0xFE,0xFE,0xFE,0x7C,0x38,0x10,0x00,0x00,0x00,0x00,       //0x03
        0x00,0x00,0x00,0x00,0x10,0x38,0x7C,0xFE,0x7C,0x38,0x10,0x00,0x00,0x00,0x00,0x00,       //0x04
        0x00,0x00,0x00,0x18,0x3C,0x3C,0xE7,0xE7,0xE7,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,       //0x05
        0x00,0x00,0x00,0x18,0x3C,0x7E,0xFF,0xFF,0x7E,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,       //0x06
        0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x3C,0x3C,0x18,0x00,0x00,0x00,0x00,0x00,0x00,       //0x07
        0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE7,0xC3,0xC3,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,       //0x08
        0x00,0x00,0x00,0x00,0x00,0x3C,0x66,0x42,0x42,0x66,0x3C,0x00,0x00,0x00,0x00,0x00,       //0x09
        0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0x99,0xBD,0xBD,0x99,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,       //0x0A
        0x00,0x00,0x1E,0x0E,0x1A,0x32,0x78,0xCC,0xCC,0xCC,0xCC,0x78,0x00,0x00,0x00,0x00,       //0x0B
        0x00,0x00,0x3C,0x66,0x66,0x66,0x66,0x3C,0x18,0x7E,0x18,0x18,0x00,0x00,0x00,0x00,       //0x0C
        0x00,0x00,0x3F,0x33,0x3F,0x30,0x30,0x30,0x30,0x70,0xF0,0xE0,0x00,0x00,0x00,0x00,       //0x0D
        0x00,0x00,0x7F,0x63,0x7F,0x63,0x63,0x63,0x63,0x67,0xE7,0xE6,0xC0,0x00,0x00,0x00,       //0x0E
        0x00,0x00,0x00,0x18,0x18,0xDB,0x3C,0xE7,0x3C,0xDB,0x18,0x18,0x00,0x00,0x00,0x00,       //0x0F
        0x00,0x80,0xC0,0xE0,0xF0,0xF8,0xFE,0xF8,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,       //0x10
        0x00,0x02,0x06,0x0E,0x1E,0x3E,0xFE,0x3E,0x1E,0x0E,0x06,0x02,0x00,0x00,0x00,0x00,       //0x11
        0x00,0x00,0x18,0x3C,0x7E,0x18,0x18,0x18,0x7E,0x3C,0x18,0x00,0x00,0x00,0x00,0x00,       //0x12
        0x00,0x00,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x00,0x66,0x66,0x00,0x00,0x00,0x00,       //0x13
        0x00,0x00,0x7F,0xDB,0xDB,0xDB,0x7B,0x1B,0x1B,0x1B,0x1B,0x1B,0x00,0x00,0x00,0x00,       //0x14
        0x00,0x7C,0xC6,0x60,0x38,0x6C,0xC6,0xC6,0x6C,0x38,0x0C,0xC6,0x7C,0x00,0x00,0x00,       //0x15
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0xFE,0xFE,0x00,0x00,0x00,0x00,       //0x16
        0x00,0x00,0x18,0x3C,0x7E,0x18,0x18,0x18,0x7E,0x3C,0x18,0x7E,0x00,0x00,0x00,0x00,       //0x17
        0x00,0x00,0x18,0x3C,0x7E,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00,       //0x18
        0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x7E,0x3C,0x18,0x00,0x00,0x00,0x00,       //0x19
        0x00,0x00,0x00,0x00,0x00,0x18,0x0C,0xFE,0x0C,0x18,0x00,0x00,0x00,0x00,0x00,0x00,       //0x1A
        0x00,0x00,0x00,0x00,0x00,0x30,0x60,0xFE,0x60,0x30,0x00,0x00,0x00,0x00,0x00,0x00,       //0x1B
        0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0xC0,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,       //0x1C
        0x00,0x00,0x00,0x00,0x00,0x28,0x6C,0xFE,0x6C,0x28,0x00,0x00,0x00,0x00,0x00,0x00,       //0x1D
        0x00,0x00,0x00,0x00,0x10,0x38,0x38,0x7C,0x7C,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,       //0x1E
        0x00,0x00,0x00,0x00,0xFE,0xFE,0x7C,0x7C,0x38,0x38,0x10,0x00,0x00,0x00,0x00,0x00,       //0x1F
#endif
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0x20' '
        0x00,0x00,0x18,0x3C,0x3C,0x3C,0x18,0x18,0x18,0x00,0x18,0x18,0x00,0x00,0x00,0x00,       //0x21'!'
        0x00,0x66,0x66,0x66,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0x22'"'
        0x00,0x00,0x00,0x6C,0x6C,0xFE,0x6C,0x6C,0x6C,0xFE,0x6C,0x6C,0x00,0x00,0x00,0x00,       //0x23'#'
        0x18,0x18,0x7C,0xC6,0xC2,0xC0,0x7C,0x06,0x06,0x86,0xC6,0x7C,0x18,0x18,0x00,0x00,       //0x24'$'
        0x00,0x00,0x00,0x00,0xC2,0xC6,0x0C,0x18,0x30,0x60,0xC6,0x86,0x00,0x00,0x00,0x00,       //0x25'%'
        0x00,0x00,0x38,0x6C,0x6C,0x38,0x76,0xDC,0xCC,0xCC,0xCC,0x76,0x00,0x00,0x00,0x00,       //0x26'&'
        0x00,0x30,0x30,0x30,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0x27'''
        0x00,0x00,0x0C,0x18,0x30,0x30,0x30,0x30,0x30,0x30,0x18,0x0C,0x00,0x00,0x00,0x00,       //0x28'('
        0x00,0x00,0x30,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x30,0x00,0x00,0x00,0x00,       //0x29')'
        0x00,0x00,0x00,0x00,0x00,0x66,0x3C,0xFF,0x3C,0x66,0x00,0x00,0x00,0x00,0x00,0x00,       //0x2A'*'
        0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x7E,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,       //0x2B'+'
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x30,0x00,0x00,0x00,       //0x2C','
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0x2D'-'
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,       //0x2E'.'
        0x00,0x00,0x00,0x00,0x02,0x06,0x0C,0x18,0x30,0x60,0xC0,0x80,0x00,0x00,0x00,0x00,       //0x2F'/'
        0x00,0x00,0x38,0x6C,0xC6,0xC6,0xD6,0xD6,0xC6,0xC6,0x6C,0x38,0x00,0x00,0x00,0x00,       //0x30'0'
        0x00,0x00,0x18,0x38,0x78,0x18,0x18,0x18,0x18,0x18,0x18,0x7E,0x00,0x00,0x00,0x00,       //0x31'1'
        0x00,0x00,0x7C,0xC6,0x06,0x0C,0x18,0x30,0x60,0xC0,0xC6,0xFE,0x00,0x00,0x00,0x00,       //0x32'2'
        0x00,0x00,0x7C,0xC6,0x06,0x06,0x3C,0x06,0x06,0x06,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x33'3'
        0x00,0x00,0x0C,0x1C,0x3C,0x6C,0xCC,0xFE,0x0C,0x0C,0x0C,0x1E,0x00,0x00,0x00,0x00,       //0x34'4'
        0x00,0x00,0xFE,0xC0,0xC0,0xC0,0xFC,0x06,0x06,0x06,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x35'5'
        0x00,0x00,0x38,0x60,0xC0,0xC0,0xFC,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x36'6'
        0x00,0x00,0xFE,0xC6,0x06,0x06,0x0C,0x18,0x30,0x30,0x30,0x30,0x00,0x00,0x00,0x00,       //0x37'7'
        0x00,0x00,0x7C,0xC6,0xC6,0xC6,0x7C,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x38'8'
        0x00,0x00,0x7C,0xC6,0xC6,0xC6,0x7E,0x06,0x06,0x06,0x0C,0x78,0x00,0x00,0x00,0x00,       //0x39'9'
        0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,       //0x3A':'
        0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0x30,0x00,0x00,0x00,0x00,       //0x3B';'
        0x00,0x00,0x00,0x06,0x0C,0x18,0x30,0x60,0x30,0x18,0x0C,0x06,0x00,0x00,0x00,0x00,       //0x3C'<'
        0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0x3D'='
        0x00,0x00,0x00,0x60,0x30,0x18,0x0C,0x06,0x0C,0x18,0x30,0x60,0x00,0x00,0x00,0x00,       //0x3E'>'
        0x00,0x00,0x7C,0xC6,0xC6,0x0C,0x18,0x18,0x18,0x00,0x18,0x18,0x00,0x00,0x00,0x00,       //0x3F'?'
        0x00,0x00,0x00,0x7C,0xC6,0xC6,0xDE,0xDE,0xDE,0xDC,0xC0,0x7C,0x00,0x00,0x00,0x00,       //0x40'@'
        0x00,0x00,0x10,0x38,0x6C,0xC6,0xC6,0xFE,0xC6,0xC6,0xC6,0xC6,0x00,0x00,0x00,0x00,       //0x41'A'
        0x00,0x00,0xFC,0x66,0x66,0x66,0x7C,0x66,0x66,0x66,0x66,0xFC,0x00,0x00,0x00,0x00,       //0x42'B'
        0x00,0x00,0x3C,0x66,0xC2,0xC0,0xC0,0xC0,0xC0,0xC2,0x66,0x3C,0x00,0x00,0x00,0x00,       //0x43'C'
        0x00,0x00,0xF8,0x6C,0x66,0x66,0x66,0x66,0x66,0x66,0x6C,0xF8,0x00,0x00,0x00,0x00,       //0x44'D'
        0x00,0x00,0xFE,0x66,0x62,0x68,0x78,0x68,0x60,0x62,0x66,0xFE,0x00,0x00,0x00,0x00,       //0x45'E'
        0x00,0x00,0xFE,0x66,0x62,0x68,0x78,0x68,0x60,0x60,0x60,0xF0,0x00,0x00,0x00,0x00,       //0x46'F'
        0x00,0x00,0x3C,0x66,0xC2,0xC0,0xC0,0xDE,0xC6,0xC6,0x66,0x3A,0x00,0x00,0x00,0x00,       //0x47'G'
        0x00,0x00,0xC6,0xC6,0xC6,0xC6,0xFE,0xC6,0xC6,0xC6,0xC6,0xC6,0x00,0x00,0x00,0x00,       //0x48'H'
        0x00,0x00,0x3C,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,       //0x49'I'
        0x00,0x00,0x1E,0x0C,0x0C,0x0C,0x0C,0x0C,0xCC,0xCC,0xCC,0x78,0x00,0x00,0x00,0x00,       //0x4A'J'
        0x00,0x00,0xE6,0x66,0x66,0x6C,0x78,0x78,0x6C,0x66,0x66,0xE6,0x00,0x00,0x00,0x00,       //0x4B'K'
        0x00,0x00,0xF0,0x60,0x60,0x60,0x60,0x60,0x60,0x62,0x66,0xFE,0x00,0x00,0x00,0x00,       //0x4C'L'
        0x00,0x00,0xC6,0xEE,0xFE,0xFE,0xD6,0xC6,0xC6,0xC6,0xC6,0xC6,0x00,0x00,0x00,0x00,       //0x4D'M'
        0x00,0x00,0xC6,0xE6,0xF6,0xFE,0xDE,0xCE,0xC6,0xC6,0xC6,0xC6,0x00,0x00,0x00,0x00,       //0x4E'N'
        0x00,0x00,0x7C,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x4F'O'
        0x00,0x00,0xFC,0x66,0x66,0x66,0x7C,0x60,0x60,0x60,0x60,0xF0,0x00,0x00,0x00,0x00,       //0x50'P'
        0x00,0x00,0x7C,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xD6,0xDE,0x7C,0x0C,0x0E,0x00,0x00,       //0x51'Q'
        0x00,0x00,0xFC,0x66,0x66,0x66,0x7C,0x6C,0x66,0x66,0x66,0xE6,0x00,0x00,0x00,0x00,       //0x52'R'
        0x00,0x00,0x7C,0xC6,0xC6,0x60,0x38,0x0C,0x06,0xC6,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x53'S'
        0x00,0x00,0x7E,0x7E,0x5A,0x18,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,       //0x54'T'
        0x00,0x00,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x55'U'
        0x00,0x00,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x6C,0x38,0x10,0x00,0x00,0x00,0x00,       //0x56'V'
        0x00,0x00,0xC6,0xC6,0xC6,0xC6,0xD6,0xD6,0xD6,0xFE,0xEE,0x6C,0x00,0x00,0x00,0x00,       //0x57'W'
        0x00,0x00,0xC6,0xC6,0x6C,0x7C,0x38,0x38,0x7C,0x6C,0xC6,0xC6,0x00,0x00,0x00,0x00,       //0x58'X'
        0x00,0x00,0x66,0x66,0x66,0x66,0x3C,0x18,0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,       //0x59'Y'
        0x00,0x00,0xFE,0xC6,0x86,0x0C,0x18,0x30,0x60,0xC2,0xC6,0xFE,0x00,0x00,0x00,0x00,       //0x5A'Z'
        0x00,0x00,0x3C,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3C,0x00,0x00,0x00,0x00,       //0x5B'['
        0x00,0x00,0x00,0x80,0xC0,0xE0,0x70,0x38,0x1C,0x0E,0x06,0x02,0x00,0x00,0x00,0x00,       //0x5C'\'
        0x00,0x00,0x3C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x3C,0x00,0x00,0x00,0x00,       //0x5D']'
        0x10,0x38,0x6C,0xC6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0x5E'^'
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,       //0x5F'_'
        0x30,0x30,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0x60'`'
        0x00,0x00,0x00,0x00,0x00,0x78,0x0C,0x7C,0xCC,0xCC,0xCC,0x76,0x00,0x00,0x00,0x00,       //0x61'a'
        0x00,0x00,0xE0,0x60,0x60,0x78,0x6C,0x66,0x66,0x66,0x66,0x7C,0x00,0x00,0x00,0x00,       //0x62'b'
        0x00,0x00,0x00,0x00,0x00,0x7C,0xC6,0xC0,0xC0,0xC0,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x63'c'
        0x00,0x00,0x1C,0x0C,0x0C,0x3C,0x6C,0xCC,0xCC,0xCC,0xCC,0x76,0x00,0x00,0x00,0x00,       //0x64'd'
        0x00,0x00,0x00,0x00,0x00,0x7C,0xC6,0xFE,0xC0,0xC0,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x65'e'
        0x00,0x00,0x38,0x6C,0x64,0x60,0xF0,0x60,0x60,0x60,0x60,0xF0,0x00,0x00,0x00,0x00,       //0x66'f'
        0x00,0x00,0x00,0x00,0x00,0x76,0xCC,0xCC,0xCC,0xCC,0xCC,0x7C,0x0C,0xCC,0x78,0x00,       //0x67'g'
        0x00,0x00,0xE0,0x60,0x60,0x6C,0x76,0x66,0x66,0x66,0x66,0xE6,0x00,0x00,0x00,0x00,       //0x68'h'
        0x00,0x00,0x18,0x18,0x00,0x38,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,       //0x69'i'
        0x00,0x00,0x06,0x06,0x00,0x0E,0x06,0x06,0x06,0x06,0x06,0x06,0x66,0x66,0x3C,0x00,       //0x6A'j'
        0x00,0x00,0xE0,0x60,0x60,0x66,0x6C,0x78,0x78,0x6C,0x66,0xE6,0x00,0x00,0x00,0x00,       //0x6B'k'
        0x00,0x00,0x38,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,       //0x6C'l'
        0x00,0x00,0x00,0x00,0x00,0xEC,0xFE,0xD6,0xD6,0xD6,0xD6,0xC6,0x00,0x00,0x00,0x00,       //0x6D'm'
        0x00,0x00,0x00,0x00,0x00,0xDC,0x66,0x66,0x66,0x66,0x66,0x66,0x00,0x00,0x00,0x00,       //0x6E'n'
        0x00,0x00,0x00,0x00,0x00,0x7C,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x6F'o'
        0x00,0x00,0x00,0x00,0x00,0xDC,0x66,0x66,0x66,0x66,0x66,0x7C,0x60,0x60,0xF0,0x00,       //0x70'p'
        0x00,0x00,0x00,0x00,0x00,0x76,0xCC,0xCC,0xCC,0xCC,0xCC,0x7C,0x0C,0x0C,0x1E,0x00,       //0x71'q'
        0x00,0x00,0x00,0x00,0x00,0xDC,0x76,0x66,0x60,0x60,0x60,0xF0,0x00,0x00,0x00,0x00,       //0x72'r'
        0x00,0x00,0x00,0x00,0x00,0x7C,0xC6,0x60,0x38,0x0C,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x73's'
        0x00,0x00,0x10,0x30,0x30,0xFC,0x30,0x30,0x30,0x30,0x36,0x1C,0x00,0x00,0x00,0x00,       //0x74't'
        0x00,0x00,0x00,0x00,0x00,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0x76,0x00,0x00,0x00,0x00,       //0x75'u'
        0x00,0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x66,0x3C,0x18,0x00,0x00,0x00,0x00,       //0x76'v'
        0x00,0x00,0x00,0x00,0x00,0xC6,0xC6,0xD6,0xD6,0xD6,0xFE,0x6C,0x00,0x00,0x00,0x00,       //0x77'w'
        0x00,0x00,0x00,0x00,0x00,0xC6,0x6C,0x38,0x38,0x38,0x6C,0xC6,0x00,0x00,0x00,0x00,       //0x78'x'
        0x00,0x00,0x00,0x00,0x00,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x7E,0x06,0x0C,0xF8,0x00,       //0x79'y'
        0x00,0x00,0x00,0x00,0x00,0xFE,0xCC,0x18,0x30,0x60,0xC6,0xFE,0x00,0x00,0x00,0x00,       //0x7A'z'
        0x00,0x00,0x0E,0x18,0x18,0x18,0x70,0x18,0x18,0x18,0x18,0x0E,0x00,0x00,0x00,0x00,       //0x7B''
        0x00,0x00,0x18,0x18,0x18,0x18,0x00,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00,       //0x7C'|'
        0x00,0x00,0x70,0x18,0x18,0x18,0x0E,0x18,0x18,0x18,0x18,0x70,0x00,0x00,0x00,0x00,       //0x7D''
        0x00,0x00,0x76,0xDC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0x7E'~'
//        0x00,0x00,0x00,0x00,0x10,0x38,0x6C,0xC6,0xC6,0xC6,0xFE,0x00,0x00,0x00,0x00,0x00,       //0x7F''
	0x00,0x00,0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x66,0x7E,0x62,0x60,0x60,0xC0,
//	0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x66,0x7C,0x60,0x60,0xC0,0x00,0x00,0x00,       //0xE6		-- Greek (u)
#ifdef ASC8X16_USE_EXTEND_CHARACTER_SET
        0x00,0x00,0x3C,0x66,0xC2,0xC0,0xC0,0xC0,0xC2,0x66,0x3C,0x0C,0x06,0x7C,0x00,0x00,       //0x80
        0x00,0x00,0xCC,0x00,0x00,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0x76,0x00,0x00,0x00,0x00,       //0x81
        0x00,0x0C,0x18,0x30,0x00,0x7C,0xC6,0xFE,0xC0,0xC0,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x82
        0x00,0x10,0x38,0x6C,0x00,0x78,0x0C,0x7C,0xCC,0xCC,0xCC,0x76,0x00,0x00,0x00,0x00,       //0x83
        0x00,0x00,0xCC,0x00,0x00,0x78,0x0C,0x7C,0xCC,0xCC,0xCC,0x76,0x00,0x00,0x00,0x00,       //0x84
        0x00,0x60,0x30,0x18,0x00,0x78,0x0C,0x7C,0xCC,0xCC,0xCC,0x76,0x00,0x00,0x00,0x00,       //0x85
        0x00,0x38,0x6C,0x38,0x00,0x78,0x0C,0x7C,0xCC,0xCC,0xCC,0x76,0x00,0x00,0x00,0x00,       //0x86
        0x00,0x00,0x00,0x00,0x3C,0x66,0x60,0x60,0x66,0x3C,0x0C,0x06,0x3C,0x00,0x00,0x00,       //0x87
        0x00,0x10,0x38,0x6C,0x00,0x7C,0xC6,0xFE,0xC0,0xC0,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x88
        0x00,0x00,0xC6,0x00,0x00,0x7C,0xC6,0xFE,0xC0,0xC0,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x89
        0x00,0x60,0x30,0x18,0x00,0x7C,0xC6,0xFE,0xC0,0xC0,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x8A
        0x00,0x00,0x66,0x00,0x00,0x38,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,       //0x8B
        0x00,0x18,0x3C,0x66,0x00,0x38,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,       //0x8C
        0x00,0x60,0x30,0x18,0x00,0x38,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,       //0x8D
        0x00,0xC6,0x00,0x10,0x38,0x6C,0xC6,0xC6,0xFE,0xC6,0xC6,0xC6,0x00,0x00,0x00,0x00,       //0x8E
        0x38,0x6C,0x38,0x00,0x38,0x6C,0xC6,0xC6,0xFE,0xC6,0xC6,0xC6,0x00,0x00,0x00,0x00,       //0x8F
        0x18,0x30,0x60,0x00,0xFE,0x66,0x60,0x7C,0x60,0x60,0x66,0xFE,0x00,0x00,0x00,0x00,       //0x90
        0x00,0x00,0x00,0x00,0x00,0xCC,0x76,0x36,0x7E,0xD8,0xD8,0x6E,0x00,0x00,0x00,0x00,       //0x91
        0x00,0x00,0x3E,0x6C,0xCC,0xCC,0xFE,0xCC,0xCC,0xCC,0xCC,0xCE,0x00,0x00,0x00,0x00,       //0x92
        0x00,0x10,0x38,0x6C,0x00,0x7C,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x93
        0x00,0x00,0xC6,0x00,0x00,0x7C,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x94
        0x00,0x60,0x30,0x18,0x00,0x7C,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x95
        0x00,0x30,0x78,0xCC,0x00,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0x76,0x00,0x00,0x00,0x00,       //0x96
        0x00,0x60,0x30,0x18,0x00,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0x76,0x00,0x00,0x00,0x00,       //0x97
        0x00,0x00,0xC6,0x00,0x00,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x7E,0x06,0x0C,0x78,0x00,       //0x98
        0x00,0xC6,0x00,0x7C,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x99
        0x00,0xC6,0x00,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0x9A
        0x00,0x18,0x18,0x3C,0x66,0x60,0x60,0x60,0x66,0x3C,0x18,0x18,0x00,0x00,0x00,0x00,       //0x9B
        0x00,0x38,0x6C,0x64,0x60,0xF0,0x60,0x60,0x60,0x60,0xE6,0xFC,0x00,0x00,0x00,0x00,       //0x9C
        0x00,0x00,0x66,0x66,0x3C,0x18,0x7E,0x18,0x7E,0x18,0x18,0x18,0x00,0x00,0x00,0x00,       //0x9D
        0x00,0xF8,0xCC,0xCC,0xF8,0xC4,0xCC,0xDE,0xCC,0xCC,0xCC,0xC6,0x00,0x00,0x00,0x00,       //0x9E
        0x00,0x0E,0x1B,0x18,0x18,0x18,0x7E,0x18,0x18,0x18,0x18,0x18,0xD8,0x70,0x00,0x00,       //0x9F
        0x00,0x18,0x30,0x60,0x00,0x78,0x0C,0x7C,0xCC,0xCC,0xCC,0x76,0x00,0x00,0x00,0x00,       //0xA0
        0x00,0x0C,0x18,0x30,0x00,0x38,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,       //0xA1
        0x00,0x18,0x30,0x60,0x00,0x7C,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0xA2
        0x00,0x18,0x30,0x60,0x00,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0x76,0x00,0x00,0x00,0x00,       //0xA3
        0x00,0x00,0x76,0xDC,0x00,0xDC,0x66,0x66,0x66,0x66,0x66,0x66,0x00,0x00,0x00,0x00,       //0xA4
        0x76,0xDC,0x00,0xC6,0xE6,0xF6,0xFE,0xDE,0xCE,0xC6,0xC6,0xC6,0x00,0x00,0x00,0x00,       //0xA5
        0x00,0x3C,0x6C,0x6C,0x3E,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xA6
        0x00,0x38,0x6C,0x6C,0x38,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xA7
        0x00,0x00,0x30,0x30,0x00,0x30,0x30,0x60,0xC0,0xC6,0xC6,0x7C,0x00,0x00,0x00,0x00,       //0xA8
        0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,       //0xA9
        0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00,       //0xAA
        0x00,0xC0,0xC0,0xC2,0xC6,0xCC,0x18,0x30,0x60,0xDC,0x86,0x0C,0x18,0x3E,0x00,0x00,       //0xAB
        0x00,0xC0,0xC0,0xC2,0xC6,0xCC,0x18,0x30,0x66,0xCE,0x9E,0x3E,0x06,0x06,0x00,0x00,       //0xAC
        0x00,0x00,0x18,0x18,0x00,0x18,0x18,0x18,0x3C,0x3C,0x3C,0x18,0x00,0x00,0x00,0x00,       //0xAD
        0x00,0x00,0x00,0x00,0x00,0x36,0x6C,0xD8,0x6C,0x36,0x00,0x00,0x00,0x00,0x00,0x00,       //0xAE
        0x00,0x00,0x00,0x00,0x00,0xD8,0x6C,0x36,0x6C,0xD8,0x00,0x00,0x00,0x00,0x00,0x00,       //0xAF
        0x11,0x44,0x11,0x44,0x11,0x44,0x11,0x44,0x11,0x44,0x11,0x44,0x11,0x44,0x11,0x44,       //0xB0
        0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,       //0xB1
        0xDD,0x77,0xDD,0x77,0xDD,0x77,0xDD,0x77,0xDD,0x77,0xDD,0x77,0xDD,0x77,0xDD,0x77,       //0xB2
        0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xB3
        0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xF8,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xB4
        0x18,0x18,0x18,0x18,0x18,0xF8,0x18,0xF8,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xB5
        0x36,0x36,0x36,0x36,0x36,0x36,0x36,0xF6,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,       //0xB6
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,       //0xB7
        0x00,0x00,0x00,0x00,0x00,0xF8,0x18,0xF8,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xB8
        0x36,0x36,0x36,0x36,0x36,0xF6,0x06,0xF6,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,       //0xB9
        0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,       //0xBA
        0x00,0x00,0x00,0x00,0x00,0xFE,0x06,0xF6,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,       //0xBB
        0x36,0x36,0x36,0x36,0x36,0xF6,0x06,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xBC
        0x36,0x36,0x36,0x36,0x36,0x36,0x36,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xBD
        0x18,0x18,0x18,0x18,0x18,0xF8,0x18,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xBE
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xBF
        0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xC0
        0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xC1
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xC2
        0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x1F,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xC3
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xC4
        0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xFF,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xC5
        0x18,0x18,0x18,0x18,0x18,0x1F,0x18,0x1F,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xC6
        0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x37,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,       //0xC7
        0x36,0x36,0x36,0x36,0x36,0x37,0x30,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xC8
        0x00,0x00,0x00,0x00,0x00,0x3F,0x30,0x37,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,       //0xC9
        0x36,0x36,0x36,0x36,0x36,0xF7,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xCA
        0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xF7,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,       //0xCB
        0x36,0x36,0x36,0x36,0x36,0x37,0x30,0x37,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,       //0xCC
        0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xCD
        0x36,0x36,0x36,0x36,0x36,0xF7,0x00,0xF7,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,       //0xCE
        0x18,0x18,0x18,0x18,0x18,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xCF
        0x36,0x36,0x36,0x36,0x36,0x36,0x36,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xD0
        0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xD1
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,       //0xD2
        0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xD3
        0x18,0x18,0x18,0x18,0x18,0x1F,0x18,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xD4
        0x00,0x00,0x00,0x00,0x00,0x1F,0x18,0x1F,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xD5
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,       //0xD6
        0x36,0x36,0x36,0x36,0x36,0x36,0x36,0xFF,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,       //0xD7
        0x18,0x18,0x18,0x18,0x18,0xFF,0x18,0xFF,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xD8
        0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xD9
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xDA
        0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,       //0xDB
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,       //0xDC
        0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,       //0xDD
        0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,       //0xDE
        0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xDF
        0x00,0x00,0x00,0x00,0x00,0x76,0xDC,0xD8,0xD8,0xD8,0xDC,0x76,0x00,0x00,0x00,0x00,       //0xE0
        0x00,0x00,0x78,0xCC,0xCC,0xCC,0xD8,0xCC,0xC6,0xC6,0xC6,0xCC,0x00,0x00,0x00,0x00,       //0xE1
        0x00,0x00,0xFE,0xC6,0xC6,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,       //0xE2
        0x00,0x00,0x00,0x00,0xFE,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x00,0x00,0x00,0x00,       //0xE3
        0x00,0x00,0x00,0xFE,0xC6,0x60,0x30,0x18,0x30,0x60,0xC6,0xFE,0x00,0x00,0x00,0x00,       //0xE4
        0x00,0x00,0x00,0x00,0x00,0x7E,0xD8,0xD8,0xD8,0xD8,0xD8,0x70,0x00,0x00,0x00,0x00,       //0xE5
        0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x66,0x7C,0x60,0x60,0xC0,0x00,0x00,0x00,       //0xE6	-- (u) micro
        0x00,0x00,0x00,0x00,0x76,0xDC,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00,       //0xE7
        0x00,0x00,0x00,0x7E,0x18,0x3C,0x66,0x66,0x66,0x3C,0x18,0x7E,0x00,0x00,0x00,0x00,       //0xE8
        0x00,0x00,0x00,0x38,0x6C,0xC6,0xC6,0xFE,0xC6,0xC6,0x6C,0x38,0x00,0x00,0x00,0x00,       //0xE9
        0x00,0x00,0x38,0x6C,0xC6,0xC6,0xC6,0x6C,0x6C,0x6C,0x6C,0xEE,0x00,0x00,0x00,0x00,       //0xEA
        0x00,0x00,0x1E,0x30,0x18,0x0C,0x3E,0x66,0x66,0x66,0x66,0x3C,0x00,0x00,0x00,0x00,       //0xEB
        0x00,0x00,0x00,0x00,0x00,0x7E,0xDB,0xDB,0xDB,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,       //0xEC
        0x00,0x00,0x00,0x03,0x06,0x7E,0xDB,0xDB,0xF3,0x7E,0x60,0xC0,0x00,0x00,0x00,0x00,       //0xED
        0x00,0x00,0x1C,0x30,0x60,0x60,0x7C,0x60,0x60,0x60,0x30,0x1C,0x00,0x00,0x00,0x00,       //0xEE
        0x00,0x00,0x00,0x7C,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x00,0x00,0x00,0x00,       //0xEF
        0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0xFE,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,       //0xF0
        0x00,0x00,0x00,0x00,0x18,0x18,0x7E,0x18,0x18,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,       //0xF1
        0x00,0x00,0x00,0x30,0x18,0x0C,0x06,0x0C,0x18,0x30,0x00,0x7E,0x00,0x00,0x00,0x00,       //0xF2
        0x00,0x00,0x00,0x0C,0x18,0x30,0x60,0x30,0x18,0x0C,0x00,0x7E,0x00,0x00,0x00,0x00,       //0xF3
        0x00,0x00,0x0E,0x1B,0x1B,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,       //0xF4
        0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xD8,0xD8,0xD8,0x70,0x00,0x00,0x00,0x00,       //0xF5
        0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x7E,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,       //0xF6
        0x00,0x00,0x00,0x00,0x00,0x76,0xDC,0x00,0x76,0xDC,0x00,0x00,0x00,0x00,0x00,0x00,       //0xF7
        0x00,0x38,0x6C,0x6C,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xF8
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xF9
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xFA
        0x00,0x0F,0x0C,0x0C,0x0C,0x0C,0x0C,0xEC,0x6C,0x6C,0x3C,0x1C,0x00,0x00,0x00,0x00,       //0xFB
        0x00,0xD8,0x6C,0x6C,0x6C,0x6C,0x6C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xFC
        0x00,0x70,0xD8,0x30,0x60,0xC8,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,       //0xFD
        0x00,0x00,0x00,0x00,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x00,0x00,0x00,0x00,0x00,       //0xFE
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00        //0xFF
#endif
};

FONT ASC8X16 =
{
	Font_ASC8X16,
	8,
	16,
	8,
	16,
	0x20
};

uint8_t array_rotate[32];

// ===== Function Definitions ==================
void TFT_Init_Ili9341(void)
{
	// Reset TFT controller (Ili9341)
	RESET_HIGH;
	HAL_Delay(1);	// About 1.1ms
	RESET_LOW;
	HAL_Delay(15);	// About 15ms
	RESET_HIGH;
	HAL_Delay(200);

	write_comm(0xcf);	//power control B
	write_data(0x00);
	write_data(0xC1);
	write_data(0x30);

	write_comm(0xed);	//power on sequence control
	write_data(0x67);
	write_data(0x03);
	write_data(0x12);
	write_data(0x81);

	write_comm(0xcb);	//power control A
	write_data(0x39);
	write_data(0x2c);
	write_data(0x00);
	write_data(0x34);
	write_data(0x02);

	write_comm(0xea);	//driver timing control B
	write_data(0x00);
	write_data(0x00);

	write_comm(0xe8);	//driver timing control A
	write_data(0x85);
	write_data(0x0a);
	write_data(0x78);

	write_comm(0xF7);	//pump ratio control
	write_data(0x20);

	write_comm(0xC0); //Power control
	write_data(0x26); //VRH[5:0]

	write_comm(0xC1); //Power control
	write_data(0x01); //SAP[2:0];BT[3:0]

	write_comm(0xC5); //VCM control
	write_data(0x2b);
	write_data(0x2F);

	write_comm(0xc7);
	write_data(0xc7);

	write_comm(0x3A);
	write_data(0x55);

	write_comm(0x36); // Memory Access Control
	//	write_data(0x08);
	write_data(0x20);

	write_comm(0xB1); // Frame Rate Control
	write_data(0x00);
	write_data(0x18);

	write_comm(0xB6); // Display Function Control
	write_data(0x0a);
	write_data(0xE2);

	write_comm(0xF2); // 3Gamma Function Disable
	write_data(0x00);
	write_comm(0x26); //Gamma curve selected
	write_data(0x01);
	write_comm(0xE0); //Set Gamma
	write_data(0x0f);
	write_data(0x1d);
	write_data(0x1a);
	write_data(0x09);
	write_data(0x0f);
	write_data(0x09);
	write_data(0x46);
	write_data(0x88);
	write_data(0x39);
	write_data(0x05);
	write_data(0x0f);
	write_data(0x03);
	write_data(0x07);
	write_data(0x05);
	write_data(0x00);

	write_comm(0XE1); //Set Gamma
	write_data(0x00);
	write_data(0x22);
	write_data(0x25);
	write_data(0x06);
	write_data(0x10);
	write_data(0x06);
	write_data(0x39);
	write_data(0x22);
	write_data(0x4a);
	write_data(0x0a);
	write_data(0x10);
	write_data(0x0c);
	write_data(0x38);
	write_data(0x3a);
	write_data(0x0F);

	write_comm(0x11); //Exit Sleep

	HAL_Delay(300);

	write_comm(0x29); //display on
	//	write_comm(0x2C);

	HAL_Delay(100);
}


void write_comm(uint8_t commport)
{
 CS_LOW;
 // Set up to access Index Register (RS == 0)
 RS_LOW;

 (GPIOB->ODR) = ((GPIOB->ODR) & 0xFF00) | commport;
 WR_LOW;
 WR_HIGH;

 RS_HIGH;
 CS_HIGH;

}

void write_data(uint8_t data)
{
 // Set TFT_nCS low
 CS_LOW;

 // Set up to access Data Register (RS == 1)
 RS_HIGH;

 (GPIOB->ODR) = ((GPIOB->ODR) & 0xFF00) | data;
 WR_LOW;
 WR_HIGH;

 // Set TFT_nCS high
 CS_HIGH;

}

void write_data16(uint16_t data)
{
	// Set TFT_nCS low
	CS_LOW;
	// Set up to access Data Register (RS == 1)
	RS_HIGH;

	(GPIOB->ODR) = ((GPIOB->ODR) & 0xFF00) | (data >> 8);
	WR_LOW;
	WR_HIGH;
	(GPIOB->ODR) = ((GPIOB->ODR) & 0xFF00) | data;
	WR_LOW;
	WR_HIGH;
}

void usDelay(volatile uint16_t count)
{
	while(count)
	{
		count--;
	}
}

//rotate screen at desired orientation
void ili9341_setRotation(uint8_t m)
{
	uint8_t rotation;

	write_comm(0x36);
	rotation=m%4;

	switch (rotation)
	{
		case 0:
			write_data(0x40|0x08);
			break;
		case 1:
			write_data(0x20|0x08);
			break;
		case 2:
			write_data(0x80|0x08);
			break;
		case 3:
			write_data(0x40|0x80|0x20|0x08);
			break;
	}
}

// ==========================================
// Clear screen
void ClrScreen(void)
{
	FillRect(ScreenX0, ScreenY0, ScreenXsize, ScreenYsize, clBlack);
}

void SetWindow(uint16_t x, uint16_t xsize, uint16_t y, uint16_t ysize)
{
	write_comm(0x2A);

	write_data(x >> 8);
	write_data(x);
	x = x + xsize - 1;
	write_data(x >> 8);
	write_data(x);

	write_comm(0x2B);
	write_data(y >> 8);
	write_data(y);
	y = y + ysize - 1;
	write_data(y >> 8);
	write_data(y);
}

void drawFastVLine(uint16_t x, uint16_t y, uint16_t h, uint16_t color)
{
	SetWindow(x, 1, y, h);
	OnScrean;
	for (uint16_t j = 0; j < h + 1; j++)
	{
		write_data16(color);
	}
	CS_HIGH;
}

void drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color)
{
	SetWindow(x, w, y, 1);
	OnScrean;
	for (uint16_t j = 0; j < w + 1; j++)
	{
		write_data16(color);
	}
	CS_HIGH;
}

void drawPixel(uint16_t x, uint16_t y, uint16_t color)
{
	SetWindow(x, 1, y, 1);
	OnScrean;
	write_data16(color);
	CS_HIGH;
}

void fillImage(uint16_t *image, uint16_t x, uint16_t y, uint16_t w, uint16_t h)
{
	SetWindow(x, w, y, h);
	OnScrean;
	for (uint16_t i = 0; i < w; i++)
	{
		for (uint16_t j = 0; j < h; j++)
		{
			write_data16(image[j*w + w - 1 - i]);
		}
	}
	CS_HIGH;
}


// Fill rectangle area with given color
void FillRect(uint16_t x, uint16_t y, uint16_t xsize, uint16_t ysize, uint16_t color)
{
	uint32_t tmp = xsize * ysize;
	SetWindow(x, xsize, y, ysize);
	OnScrean;

	RS_HIGH;
	while(tmp)
	{
		(GPIOB->ODR) = ((GPIOB->ODR) & 0xFF00) | (color >> 8);
		WR_LOW;
		WR_HIGH;
		(GPIOB->ODR) = ((GPIOB->ODR) & 0xFF00) | color;
		WR_LOW;
		WR_HIGH;
		tmp--;
	}
	CS_HIGH;
}

void draw_Bitmap(uint16_t x, uint16_t y, uint8_t *image, uint16_t fgcolor,  uint16_t bgcolor, uint16_t w, uint16_t h)
{
	uint8_t tmp;
	uint16_t color;
	SetWindow(x, w, y, h);
	OnScrean;

	for(uint16_t hc=h; hc>0; hc--)
	{
		for(uint16_t wc=w; wc>0; wc-=8)
		{
			tmp = *image++;
			for(uint16_t bc=8; bc>0; bc--)
			{
				color = (tmp & 0x80) ? fgcolor : bgcolor;

				(GPIOB->ODR) = ((GPIOB->ODR) & 0xFF00) | (color >> 8);
				WR_LOW;
				WR_HIGH;
				(GPIOB->ODR) = ((GPIOB->ODR) & 0xFF00) | color;
				WR_LOW;
				WR_HIGH;
				tmp<<=1;
			}
		}
	}
	CS_HIGH;
}


// Put at (x, y) a 15X16 character [ch] with [f_color] and [b_color]
//
void LCD_Putc(uint16_t x, uint16_t y, uint8_t ch, uint16_t fgcolor, uint16_t bgcolor, FONT *font)
{
	uint8_t tmp, tmp2;
	uint16_t tmp1, tmp3;
	uint8_t *ptmp;

	// Font address
	ptmp = (uint8_t *)font->Array 	+ (ch - font->IndexOfs) * ((font->Xsize + 7)/8) * font->Ysize;

	SetWindow(x, font->Xsize, y, font->Ysize);
	OnScrean;

	tmp1 = (font->Xsize * font->Ysize)/8;
	while(tmp1)
	{
		tmp = *ptmp;
		tmp2 = 8;
		while(tmp2)
		{
			tmp3 = (tmp & 0x80) ? fgcolor : bgcolor;

			(GPIOB->ODR) = ((GPIOB->ODR) & 0xFF00) | (tmp3 >> 8);
			WR_LOW;
			WR_HIGH;
			(GPIOB->ODR) = ((GPIOB->ODR) & 0xFF00) | tmp3;
			WR_LOW;
			WR_HIGH;

			tmp <<= 1;
			tmp2--;
		}
		ptmp++;
		tmp1--;
	}
	CS_HIGH;
}

void LCD_Puts(uint16_t x, uint16_t y, uint8_t *str, uint16_t fgcolor, uint16_t bgcolor, FONT *font)
{
	uint8_t tmp;

	while((tmp = *str++))
	{
		LCD_Putc(x, y, tmp, fgcolor, bgcolor, font);
		x += font->CharPitch;
		if(x >= ScreenXsize)
		{
			y += font->LinePitch;
			x = 0;
		}
	}
}