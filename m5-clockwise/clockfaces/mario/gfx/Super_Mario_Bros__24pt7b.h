#include <Arduino.h>
#include <M5Stack.h>
//#include <gfxfont.h>


const uint8_t Super_Mario_Bros__24pt7bBitmaps[] PROGMEM = {
  0x00, 0xFF, 0xEC, 0x30, 0xDE, 0xF6, 0x6C, 0xDB, 0xFB, 0x6F, 0xED, 0x9B,
  0x00, 0x10, 0xFB, 0x83, 0xE0, 0xFF, 0x84, 0x00, 0xC7, 0x9C, 0x71, 0xC7,
  0x1C, 0xF1, 0x80, 0x61, 0xA3, 0x5B, 0xED, 0x99, 0x9D, 0x80, 0xFC, 0x36,
  0xCC, 0xC6, 0x30, 0xC6, 0x33, 0x36, 0xC0, 0x6C, 0x73, 0xF9, 0xC6, 0xC0,
  0x30, 0xCF, 0xCC, 0x30, 0x6F, 0x00, 0xFF, 0xF0, 0xF0, 0x06, 0x1C, 0x71,
  0xC7, 0x1C, 0x30, 0x00, 0x7D, 0x9F, 0x3E, 0x7C, 0xF9, 0xDF, 0x00, 0x77,
  0x9C, 0xE7, 0x3B, 0xE0, 0x7D, 0x9C, 0x39, 0xE7, 0x1C, 0x3F, 0x80, 0x7E,
  0x18, 0xE0, 0x60, 0xF9, 0xDF, 0x00, 0x1C, 0x79, 0xB6, 0x6F, 0xE1, 0x83,
  0x00, 0xFD, 0x83, 0xF0, 0x70, 0xF9, 0xDF, 0x00, 0x7D, 0x83, 0xF6, 0x7C,
  0xF9, 0xDF, 0x00, 0xFF, 0x9C, 0x30, 0xC3, 0x06, 0x0C, 0x00, 0x7D, 0x9F,
  0x3B, 0xEC, 0xF9, 0xDF, 0x00, 0x7D, 0x9F, 0x3B, 0xF0, 0xE1, 0xDF, 0x00,
  0xF3, 0xC0, 0x6C, 0x37, 0x80, 0x19, 0x99, 0x86, 0x18, 0x60, 0xF8, 0x01,
  0xF0, 0xC3, 0x0C, 0x33, 0x33, 0x00, 0x7D, 0x8F, 0x18, 0xE3, 0x00, 0x0C,
  0x00, 0x7D, 0x06, 0xED, 0x5B, 0xF0, 0x1F, 0x00, 0x38, 0xFB, 0x9F, 0x3F,
  0xFC, 0xF9, 0x80, 0xFD, 0xCF, 0x9F, 0xEE, 0x7C, 0xFF, 0x00, 0x3C, 0xCF,
  0x87, 0x0E, 0x0C, 0xCF, 0x00, 0xF9, 0xDB, 0x9F, 0x3E, 0x7D, 0xBE, 0x00,
  0xFF, 0xC3, 0x87, 0xEE, 0x1C, 0x3F, 0x80, 0xFF, 0xC3, 0x87, 0xEE, 0x1C,
  0x38, 0x00, 0x3C, 0xC3, 0x87, 0x7E, 0x6C, 0xCF, 0x80, 0xE7, 0xCF, 0x9F,
  0xFE, 0x7C, 0xF9, 0x80, 0xFB, 0x9C, 0xE7, 0x3B, 0xE0, 0x1E, 0x0C, 0x18,
  0x3E, 0x7C, 0xDF, 0x00, 0xE7, 0xDB, 0xE7, 0x8F, 0x9D, 0xB9, 0x80, 0xE3,
  0x8E, 0x38, 0xE3, 0x8F, 0xC0, 0xC7, 0xDF, 0xFF, 0xFD, 0x78, 0xF1, 0x80,
  0xC7, 0xCF, 0xDF, 0xFE, 0xFC, 0xF9, 0x80, 0x7D, 0xCF, 0x9F, 0x3E, 0x7C,
  0xDF, 0x00, 0xFD, 0xCF, 0x9F, 0x3F, 0xDC, 0x38, 0x00, 0x7D, 0xCF, 0x9F,
  0x3F, 0xFD, 0x9E, 0x80, 0xFD, 0xCF, 0x9F, 0x6F, 0x9D, 0xB9, 0x80, 0x79,
  0xDB, 0x83, 0xE0, 0x7C, 0xDF, 0x00, 0xFE, 0x70, 0xE1, 0xC3, 0x87, 0x0E,
  0x00, 0xE7, 0xCF, 0x9F, 0x3E, 0x7C, 0xDF, 0x00, 0xE7, 0xCF, 0x9F, 0x36,
  0xC7, 0x04, 0x00, 0xC7, 0x8F, 0x5E, 0xBF, 0xFD, 0xF1, 0x80, 0xC7, 0xDD,
  0xF1, 0xC7, 0xDD, 0xF1, 0x80, 0xE7, 0xCF, 0x9B, 0xE3, 0x87, 0x0E, 0x00,
  0xFE, 0x1C, 0x71, 0xC7, 0x1C, 0x3F, 0x80, 0xFC, 0xCC, 0xCC, 0xF0, 0xC1,
  0xC1, 0xC1, 0xC1, 0xC1, 0xC1, 0x80, 0xF3, 0x33, 0x33, 0xF0, 0x76, 0xC0,
  0xFE, 0x90, 0x38, 0xFB, 0x9F, 0x3F, 0xFC, 0xF9, 0x80, 0xFD, 0xCF, 0x9F,
  0xEE, 0x7C, 0xFF, 0x00, 0x3C, 0xCF, 0x87, 0x0E, 0x0C, 0xCF, 0x00, 0xF9,
  0xDB, 0x9F, 0x3E, 0x7D, 0xBE, 0x00, 0xFF, 0xC3, 0x87, 0xEE, 0x1C, 0x3F,
  0x80, 0xFF, 0xC3, 0x87, 0xEE, 0x1C, 0x38, 0x00, 0x3C, 0xC3, 0x87, 0x7E,
  0x6C, 0xCF, 0x80, 0xE7, 0xCF, 0x9F, 0xFE, 0x7C, 0xF9, 0x80, 0xFB, 0x9C,
  0xE7, 0x3B, 0xE0, 0x1E, 0x0C, 0x18, 0x3E, 0x7C, 0xDF, 0x00, 0xE7, 0xDB,
  0xE7, 0x8F, 0x9D, 0xB9, 0x80, 0xE3, 0x8E, 0x38, 0xE3, 0x8F, 0xC0, 0xC7,
  0xDF, 0xFF, 0xFD, 0x78, 0xF1, 0x80, 0xC7, 0xCF, 0xDF, 0xFE, 0xFC, 0xF9,
  0x80, 0x7D, 0xCF, 0x9F, 0x3E, 0x7C, 0xDF, 0x00, 0xFD, 0xCF, 0x9F, 0x3F,
  0xDC, 0x38, 0x00, 0x7D, 0xCF, 0x9F, 0x3F, 0xFD, 0x9E, 0x80, 0xFD, 0xCF,
  0x9F, 0x6F, 0x9D, 0xB9, 0x80, 0x79, 0xDB, 0x83, 0xE0, 0x7C, 0xDF, 0x00,
  0xFE, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x00, 0xE7, 0xCF, 0x9F, 0x3E, 0x7C,
  0xDF, 0x00, 0xE7, 0xCF, 0x9F, 0x36, 0xC7, 0x04, 0x00, 0xC7, 0x8F, 0x5E,
  0xBF, 0xFD, 0xF1, 0x80, 0xC7, 0xDD, 0xF1, 0xC7, 0xDD, 0xF1, 0x80, 0xE7,
  0xCF, 0x9B, 0xE3, 0x87, 0x0E, 0x00, 0xFE, 0x1C, 0x71, 0xC7, 0x1C, 0x3F,
  0x80, 0x36, 0x6C, 0x66, 0x30, 0xFF, 0xFC, 0xC6, 0x63, 0x66, 0xC0, 0x71,
  0x74, 0x70 };

const GFXglyph Super_Mario_Bros__24pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   8,    0,    0 },   // 0x20 ' '
  {     1,   3,   7,   8,    2,   -6 },   // 0x21 '!'
  {     4,   5,   3,   8,    1,   -6 },   // 0x22 '"'
  {     6,   7,   7,   8,    0,   -6 },   // 0x23 '#'
  {    13,   7,   7,   8,    0,   -6 },   // 0x24 '$'
  {    20,   7,   7,   8,    0,   -6 },   // 0x25 '%'
  {    27,   7,   7,   8,    0,   -6 },   // 0x26 '&'
  {    34,   2,   3,   8,    2,   -6 },   // 0x27 '''
  {    35,   4,   7,   8,    2,   -6 },   // 0x28 '('
  {    39,   4,   7,   8,    1,   -6 },   // 0x29 ')'
  {    43,   7,   5,   8,    0,   -5 },   // 0x2A '*'
  {    48,   6,   5,   8,    1,   -5 },   // 0x2B '+'
  {    52,   3,   3,   8,    1,   -1 },   // 0x2C ','
  {    54,   6,   2,   8,    1,   -3 },   // 0x2D '-'
  {    56,   2,   2,   8,    2,   -1 },   // 0x2E '.'
  {    57,   7,   7,   8,    0,   -6 },   // 0x2F '/'
  {    64,   7,   7,   8,    0,   -6 },   // 0x30 '0'
  {    71,   5,   7,   8,    1,   -6 },   // 0x31 '1'
  {    76,   7,   7,   8,    0,   -6 },   // 0x32 '2'
  {    83,   7,   7,   8,    0,   -6 },   // 0x33 '3'
  {    90,   7,   7,   8,    0,   -6 },   // 0x34 '4'
  {    97,   7,   7,   8,    0,   -6 },   // 0x35 '5'
  {   104,   7,   7,   8,    0,   -6 },   // 0x36 '6'
  {   111,   7,   7,   8,    0,   -6 },   // 0x37 '7'
  {   118,   7,   7,   8,    0,   -6 },   // 0x38 '8'
  {   125,   7,   7,   8,    0,   -6 },   // 0x39 '9'
  {   132,   2,   5,   8,    2,   -5 },   // 0x3A ':'
  {   134,   3,   6,   8,    1,   -5 },   // 0x3B ';'
  {   137,   5,   7,   8,    1,   -6 },   // 0x3C '<'
  {   142,   5,   4,   8,    1,   -4 },   // 0x3D '='
  {   145,   5,   7,   8,    1,   -6 },   // 0x3E '>'
  {   150,   7,   7,   8,    0,   -6 },   // 0x3F '?'
  {   157,   7,   7,   8,    0,   -6 },   // 0x40 '@'
  {   164,   7,   7,   8,    0,   -6 },   // 0x41 'A'
  {   171,   7,   7,   8,    0,   -6 },   // 0x42 'B'
  {   178,   7,   7,   8,    0,   -6 },   // 0x43 'C'
  {   185,   7,   7,   8,    0,   -6 },   // 0x44 'D'
  {   192,   7,   7,   8,    0,   -6 },   // 0x45 'E'
  {   199,   7,   7,   8,    0,   -6 },   // 0x46 'F'
  {   206,   7,   7,   8,    0,   -6 },   // 0x47 'G'
  {   213,   7,   7,   8,    0,   -6 },   // 0x48 'H'
  {   220,   5,   7,   8,    1,   -6 },   // 0x49 'I'
  {   225,   7,   7,   8,    0,   -6 },   // 0x4A 'J'
  {   232,   7,   7,   8,    0,   -6 },   // 0x4B 'K'
  {   239,   6,   7,   8,    1,   -6 },   // 0x4C 'L'
  {   245,   7,   7,   8,    0,   -6 },   // 0x4D 'M'
  {   252,   7,   7,   8,    0,   -6 },   // 0x4E 'N'
  {   259,   7,   7,   8,    0,   -6 },   // 0x4F 'O'
  {   266,   7,   7,   8,    0,   -6 },   // 0x50 'P'
  {   273,   7,   7,   8,    0,   -6 },   // 0x51 'Q'
  {   280,   7,   7,   8,    0,   -6 },   // 0x52 'R'
  {   287,   7,   7,   8,    0,   -6 },   // 0x53 'S'
  {   294,   7,   7,   8,    0,   -6 },   // 0x54 'T'
  {   301,   7,   7,   8,    0,   -6 },   // 0x55 'U'
  {   308,   7,   7,   8,    0,   -6 },   // 0x56 'V'
  {   315,   7,   7,   8,    0,   -6 },   // 0x57 'W'
  {   322,   7,   7,   8,    0,   -6 },   // 0x58 'X'
  {   329,   7,   7,   8,    0,   -6 },   // 0x59 'Y'
  {   336,   7,   7,   8,    0,   -6 },   // 0x5A 'Z'
  {   343,   4,   7,   8,    2,   -6 },   // 0x5B '['
  {   347,   7,   7,   8,    0,   -6 },   // 0x5C '\'
  {   354,   4,   7,   8,    1,   -6 },   // 0x5D ']'
  {   358,   5,   2,   8,    1,   -6 },   // 0x5E '^'
  {   360,   7,   1,   8,    0,    1 },   // 0x5F '_'
  {   361,   2,   2,   8,    2,   -6 },   // 0x60 '`'
  {   362,   7,   7,   8,    0,   -6 },   // 0x61 'a'
  {   369,   7,   7,   8,    0,   -6 },   // 0x62 'b'
  {   376,   7,   7,   8,    0,   -6 },   // 0x63 'c'
  {   383,   7,   7,   8,    0,   -6 },   // 0x64 'd'
  {   390,   7,   7,   8,    0,   -6 },   // 0x65 'e'
  {   397,   7,   7,   8,    0,   -6 },   // 0x66 'f'
  {   404,   7,   7,   8,    0,   -6 },   // 0x67 'g'
  {   411,   7,   7,   8,    0,   -6 },   // 0x68 'h'
  {   418,   5,   7,   8,    1,   -6 },   // 0x69 'i'
  {   423,   7,   7,   8,    0,   -6 },   // 0x6A 'j'
  {   430,   7,   7,   8,    0,   -6 },   // 0x6B 'k'
  {   437,   6,   7,   8,    1,   -6 },   // 0x6C 'l'
  {   443,   7,   7,   8,    0,   -6 },   // 0x6D 'm'
  {   450,   7,   7,   8,    0,   -6 },   // 0x6E 'n'
  {   457,   7,   7,   8,    0,   -6 },   // 0x6F 'o'
  {   464,   7,   7,   8,    0,   -6 },   // 0x70 'p'
  {   471,   7,   7,   8,    0,   -6 },   // 0x71 'q'
  {   478,   7,   7,   8,    0,   -6 },   // 0x72 'r'
  {   485,   7,   7,   8,    0,   -6 },   // 0x73 's'
  {   492,   7,   7,   8,    0,   -6 },   // 0x74 't'
  {   499,   7,   7,   8,    0,   -6 },   // 0x75 'u'
  {   506,   7,   7,   8,    0,   -6 },   // 0x76 'v'
  {   513,   7,   7,   8,    0,   -6 },   // 0x77 'w'
  {   520,   7,   7,   8,    0,   -6 },   // 0x78 'x'
  {   527,   7,   7,   8,    0,   -6 },   // 0x79 'y'
  {   534,   7,   7,   8,    0,   -6 },   // 0x7A 'z'
  {   541,   4,   7,   8,    2,   -6 },   // 0x7B '{'
  {   545,   2,   7,   8,    3,   -6 },   // 0x7C '|'
  {   547,   4,   7,   8,    1,   -6 },   // 0x7D '}'
  {   551,   7,   3,   8,    0,   -4 } }; // 0x7E '~'

const GFXfont Super_Mario_Bros__24pt7b PROGMEM = {
  (uint8_t  *)Super_Mario_Bros__24pt7bBitmaps,
  (GFXglyph *)Super_Mario_Bros__24pt7bGlyphs,
  0x20, 0x7E, 9 };

// Approx. 1226 bytes
