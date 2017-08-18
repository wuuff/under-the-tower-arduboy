#include "overworld.h"

const byte dude[] PROGMEM = {8,8,
B00011000,
B01100110,
B10000001,
B10100101,
B01000010,
B00111100,
B11011011,
B00100100,
};

const byte dudedn1[] PROGMEM = {8,8,
B00011000,
B01100110,
B10000001,
B10100101,
B01000010,
B10111100,
B01011010,
B00100001,
};

const byte dudedn2[] PROGMEM = {8,8,
B00011000,
B01100110,
B10000001,
B10100101,
B01000010,
B00111101,
B01011010,
B10000100,
};

const byte dudeup[] PROGMEM = {8,8,
B00011000,
B01100110,
B10000001,
B10000001,
B01000010,
B00111100,
B11011011,
B00100100,
};

const byte dudeup1[] PROGMEM = {8,8,
B00011000,
B01100110,
B10000001,
B10000001,
B01000010,
B10111100,
B01011010,
B00100001,
};

const byte dudeup2[] PROGMEM = {8,8,
B00011000,
B01100110,
B10000001,
B10000001,
B01000010,
B00111101,
B01011010,
B10000100,
};

const byte dudert[] PROGMEM = {8,8,
B00011000,
B01100110,
B10000001,
B10000101,
B01000010,
B00111100,
B01011010,
B00100100,
};

const byte dudert1[] PROGMEM = {8,8,
B00011000,
B01100110,
B10000001,
B10000101,
B01000010,
B00111100,
B01011010,
B00101000,
};

const byte dudert2[] PROGMEM = {8,8,
B00011000,
B01100110,
B10000001,
B10000101,
B01000010,
B00111100,
B01011010,
B00010100,
};

const byte tiles[] PROGMEM = {
  8,8,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
8,8,
B00100010,
B11111111,
B10001000,
B11111111,
B00100010,
B11111111,
B10001000,
B11111111,
8,8,
B10000001,
B10000001,
B10000001,
B11111111,
B10000001,
B10000001,
B10000001,
B11111111,
8,8,
B00011000,
B01100110,
B10000001,
B11111111,
B10000001,
B10000001,
B11011011,
B11111111,
8,8,
B11111111,
B10000001,
B10000001,
B10000001,
B11000001,
B10000001,
B10000001,
B10000001,
8,8,
B00111100,
B01111110,
B11111111,
B11111111,
B11111111,
B10000101,
B01010110,
B01010010,
8,8,
B00111100,
B01111110,
B11111111,
B11111111,
B11111111,
B10010001,
B01010110,
B01000110,
8,8,
B01010010,
B01000010,
B01000010,
B01001010,
B01001010,
B01001010,
B01000010,
B01010010,
8,8,
B01000110,
B01010010,
B01010010,
B01010010,
B01000010,
B01001010,
B01001010,
B01001010,
8,8,
B00111010,
B11111111,
B10011000,
B11111111,
B00111010,
B11111111,
B10011000,
B11111111,
8,8,
B00000000,
B11111111,
B10101010,
B01010101,
B00000000,
B10101010,
B01010101,
B11111111,
8,8,
B00111100,
B01100110,
B11111111,
B10100101,
B10100101,
B11111111,
B01100110,
B00111100,
8,8,
B00100010,
B01100110,
B10001000,
B10011001,
B00100010,
B01100110,
B10001000,
B10011001,
8,8,
B00100010,
B01010100,
B10001000,
B00010101,
B00100010,
B01010100,
B10001000,
B00010101,
8,8,
B00111010,
B11111111,
B10100100,
B11100111,
B00100110,
B11100111,
B10011000,
B11111111,
8,8,
B00100010,
B01010101,
B10001000,
B01010101,
B00100010,
B01010101,
B10001000,
B01010101,
8,8,
B00100010,
B01010101,
B00000000,
B01010101,
B00100010,
B01010101,
B00000000,
B01010101,
8,8,
B00000000,
B00100000,
B01011100,
B00000000,
B00000000,
B00000100,
B00011010,
B00000000,
8,8,
B00000000,
B00000001,
B11100010,
B00000000,
B00000000,
B10000000,
B01000011,
B00000000,
8,8,
B11111111,
B10011001,
B10011001,
B11111111,
B10011001,
B10011001,
B11111111,
B11111111,
8,8,
B11111111,
B01010101,
B00110110,
B00010100,
B00010100,
B00010100,
B00010100,
B00010100,
8,8,
B10000000,
B10010000,
B10101100,
B10000000,
B10000000,
B10000100,
B10111010,
B10000000,
8,8,
B10000000,
B10000100,
B10111010,
B10000000,
B10000000,
B10010000,
B10101100,
B10000000,
8,8,
B00000010,
B00011101,
B00000000,
B00001000,
B01110100,
B00000000,
B00000000,
B11111111,
8,8,
B00100000,
B01011100,
B00000000,
B00000100,
B00001011,
B00000000,
B00000000,
B11111111,
8,8,
B11111111,
B10001001,
B10010001,
B10100011,
B11000101,
B10001001,
B10010001,
B11111111,
8,8,
B00000000,
B11111111,
B10100001,
B10011001,
B11000101,
B10100011,
B10011001,
B11111111,
8,8,
B00000001,
B00000001,
B00000001,
B11111111,
B00010000,
B00010000,
B00010000,
B11111111,
8,8,
B00000000,
B00000000,
B00000000,
B11111111,
B00000000,
B00000000,
B00000000,
B11111111,
8,8,
B00000000,
B00000011,
B00001100,
B11110000,
B11000000,
B00000000,
B00000000,
B00000000,
8,8,
B00000000,
B00000000,
B00000000,
B11111111,
B00000001,
B00001110,
B01110000,
B10000000,
8,8,
B00010100,
B00010100,
B00010100,
B00010100,
B00010100,
B00010100,
B00010100,
B11111111,
8,8,
B00010100,
B00010100,
B00010100,
B00010100,
B00010100,
B00010100,
B00010100,
B00010100,
8,8,
B00000000,
B00000000,
B01011000,
B01100110,
B10111010,
B10111101,
B11100011,
B11111111,
8,8,
B00000000,
B00000100,
B01011010,
B00110010,
B01100110,
B00111011,
B01100110,
B00010000,
8,8,
B00011000,
B11011011,
B11000011,
B00001000,
B11011110,
B11011110,
B00011100,
B00000000,
8,8,
B00011000,
B00011000,
B00011000,
B11111111,
B11111111,
B00011000,
B00011000,
B00011000,
8,8,
B00000011,
B00001100,
B00110000,
B11010000,
B00010011,
B00011101,
B00110001,
B11000001,
8,8,
B11000000,
B00110000,
B00001100,
B00001011,
B11001000,
B10111000,
B10001100,
B10000011,
8,8,
B00000011,
B00001100,
B00110000,
B11010000,
B00010011,
B00011100,
B00110000,
B11000000,
8,8,
B00000011,
B00001100,
B00110000,
B11000000,
B00000000,
B00000000,
B00000000,
B00000000,
8,8,
B11000000,
B00110000,
B00001100,
B00001011,
B11001000,
B00111000,
B00001100,
B00000011,
8,8,
B11000000,
B00110000,
B00001100,
B00000011,
B00000000,
B00000000,
B00000000,
B00000000,
8,8,
B10000000,
B10010000,
B10101110,
B10000000,
B10001000,
B10110100,
B10000000,
B11111111,
8,8,
B10000000,
B10000100,
B10011010,
B10000000,
B10010000,
B10101110,
B10000000,
B11111111,
8,8,
B11111111,
B11010101,
B10110110,
B10010100,
B10010100,
B10010100,
B10010100,
B10010100,
8,8,
B00000000,
B00000000,
B00000000,
B11111111,
B10000000,
B01110000,
B00001110,
B11111111,
8,8,
B00000000,
B11000000,
B00110000,
B00001111,
B00000011,
B00000000,
B00000000,
B11111111,
8,8,
B00010000,
B00001000,
B00001000,
B00010000,
B00001000,
B00001000,
B00000100,
B00001000,
8,8,
B00000000,
B00000000,
B00011000,
B00100100,
B00010011,
B00010000,
B00001000,
B00010000,
8,8,
B00000000,
B00000000,
B00001100,
B10010010,
B01100001,
B00000000,
B00000000,
B00000000,
8,8,
B00000000,
B00000000,
B00011000,
B00100100,
B11000010,
B00000100,
B00001000,
B00010000,
8,8,
B00001000,
B00010000,
B00010000,
B00001000,
B00000100,
B00001000,
B00010000,
B00001000,
8,8,
B00010000,
B00001000,
B00000100,
B00001000,
B11000100,
B00100010,
B00011100,
B00000000,
8,8,
B00000000,
B00000000,
B00000000,
B01101001,
B10010110,
B00000000,
B00000000,
B00000000,
8,8,
B00010000,
B00100000,
B00100000,
B01000001,
B00100010,
B00011010,
B00000100,
B00000000,
};

const byte water1[] PROGMEM = {8,8,
B00000000,
B00100000,
B01011100,
B00000000,
B00000000,
B00000100,
B00011010,
B00000000,
};

const byte water2[] PROGMEM = {8,8,
B00000000,
B00000001,
B11100010,
B00000000,
B00000000,
B10000000,
B01000011,
B00000000,
};

const byte drain1[] PROGMEM = {8,8,
B00111100,
B01111110,
B11111111,
B11111111,
B11111111,
B10000101,
B01010110,
B01010010,
};

const byte drain2[] PROGMEM = {8,8,
B00111100,
B01111110,
B11111111,
B11111111,
B11111111,
B10010001,
B01010110,
B01000110,
};

const byte flow1[] PROGMEM = {8,8,
B01010010,
B01000010,
B01000010,
B01001010,
B01001010,
B01001010,
B01000010,
B01010010,
};

const byte flow2[] PROGMEM = {8,8,
B01000110,
B01010010,
B01010010,
B01010010,
B01000010,
B01001010,
B01001010,
B01001010,
};

const byte world[] PROGMEM = {
15,15,15,15,15,2,15,15,15,15,15,2,15,15,15,15,15,2,1,1,1,38,38,38,38,27,27,27,27,27,27,27,27,37,37,37,37,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,17,17,17,17,17,
1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,38,38,38,38,27,11,27,27,27,27,11,27,37,37,37,37,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,17,17,17,17,17,
1,19,1,19,1,2,1,19,1,19,1,2,1,19,1,19,1,2,1,1,1,38,38,38,38,27,27,27,27,27,27,27,27,37,37,37,37,1,1,1,1,1,2,1,2,1,1,1,1,1,19,19,1,1,1,1,1,1,2,17,17,17,17,17,
14,1,1,1,14,2,14,1,1,1,14,2,14,1,1,1,14,2,1,14,1,38,38,38,38,27,11,27,27,27,27,11,27,37,37,37,37,1,1,1,1,1,2,1,2,1,14,1,14,1,19,19,1,14,1,1,1,1,2,17,17,17,17,17,
9,1,4,1,9,2,9,1,4,1,9,2,9,1,4,1,9,2,1,9,1,38,38,38,38,27,27,27,27,27,27,27,27,37,37,37,37,1,14,1,14,1,2,0,2,1,9,1,9,1,1,1,1,9,1,4,1,1,2,17,17,17,17,17,
0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,38,38,38,38,27,11,27,27,27,27,11,27,37,37,37,37,1,9,1,9,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,17,17,17,17,
0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,38,38,38,38,27,27,27,27,27,27,27,27,37,37,37,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,22,17,17,17,17,
10,10,10,10,10,3,10,10,10,10,10,3,10,10,10,10,10,3,0,0,0,38,38,38,38,27,11,27,27,27,27,11,27,37,37,37,37,0,0,0,0,0,0,3,10,10,10,10,10,10,10,10,10,10,10,10,3,0,25,22,17,17,17,17,
15,15,15,15,15,2,15,15,15,15,15,2,15,15,15,15,15,2,0,0,0,38,38,38,38,27,27,27,27,27,27,27,27,37,37,37,37,0,0,0,0,0,0,2,15,15,15,15,15,15,15,15,15,15,15,15,2,0,0,22,17,17,17,17,
15,15,15,15,15,2,15,15,15,15,15,2,15,15,15,15,15,2,0,0,0,38,38,38,38,27,11,27,27,27,27,11,27,37,37,37,37,0,0,0,0,3,10,2,15,15,15,15,15,15,15,15,15,15,15,15,2,10,3,17,17,17,17,17,
1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,1,1,2,0,0,0,38,38,38,38,27,27,27,27,27,27,27,27,37,37,37,37,0,0,0,0,32,27,2,27,27,27,27,27,27,27,27,27,27,27,27,2,27,32,17,17,17,17,17,
1,19,1,19,1,2,1,19,1,19,1,2,1,19,1,19,1,2,0,0,0,38,38,38,38,27,11,27,27,27,27,11,27,37,37,37,37,0,0,0,0,32,27,2,27,19,27,19,27,27,27,27,19,27,19,27,2,27,32,17,17,17,17,17,
14,1,1,1,14,2,14,1,1,1,14,2,14,1,1,1,14,2,0,0,0,38,38,38,38,27,27,27,27,27,27,27,27,37,37,37,37,0,0,0,0,32,0,2,27,27,27,27,27,27,27,27,27,27,27,27,2,0,32,17,17,17,17,17,
9,1,4,1,9,2,9,1,4,1,9,2,9,1,4,1,9,2,0,0,0,38,38,38,38,27,11,27,27,27,27,11,27,37,37,37,37,0,0,0,0,32,0,2,27,19,27,19,27,27,27,27,19,27,19,27,2,0,32,17,17,17,17,17,
0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,38,38,38,27,27,27,27,27,27,27,27,37,37,37,37,0,0,0,0,32,0,2,27,27,27,27,36,27,27,36,27,27,27,27,2,0,32,17,17,17,17,17,
0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,41,38,38,27,11,27,27,27,27,11,27,39,37,39,40,0,0,0,0,32,0,2,27,19,27,19,27,27,27,27,19,27,19,27,2,0,32,17,17,17,17,17,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,3,0,0,0,0,0,42,41,27,27,27,4,4,27,27,27,39,40,0,0,0,0,0,0,32,0,2,27,27,27,27,27,4,4,27,27,27,27,27,2,0,32,17,17,17,17,17,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,17,17,17,17,17,
10,10,10,3,15,15,15,15,15,15,15,15,15,15,15,15,15,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,17,17,17,17,17,
12,12,12,2,1,1,1,1,3,10,10,10,3,1,1,1,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,36,0,0,36,0,0,0,0,0,0,32,17,17,17,17,17,
12,12,12,2,1,1,1,1,2,12,12,12,2,1,1,19,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,3,10,10,10,10,10,10,3,0,0,3,10,10,10,10,10,10,3,17,17,17,17,17,
1,1,1,2,10,10,10,10,2,12,12,12,2,1,1,1,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,25,0,0,0,0,2,27,27,27,27,27,27,2,0,0,2,27,27,27,27,27,27,2,17,17,17,17,17,
1,1,1,2,1,1,1,1,2,19,35,19,2,1,1,19,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,2,27,27,27,27,27,27,2,0,0,2,27,27,27,27,27,27,2,17,17,17,17,17,
1,1,1,2,1,1,1,1,2,1,1,1,2,1,1,1,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,17,17,17,17,17,
10,10,10,10,10,3,0,0,2,19,4,19,3,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,25,17,17,17,17,17,
12,12,12,12,12,2,0,0,0,0,0,0,2,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,2,3,10,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,25,17,17,17,17,17,
12,12,12,12,12,2,0,0,0,0,0,0,2,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,2,2,1,1,2,3,10,10,10,10,10,10,10,10,10,10,10,3,0,0,0,0,3,10,10,10,10,10,10,3,17,17,17,17,17,
1,1,1,1,1,2,0,0,0,0,0,0,2,19,19,19,19,27,27,27,19,19,19,19,27,27,27,19,19,2,2,1,1,2,2,13,13,13,13,13,13,13,13,13,13,13,2,0,0,0,0,2,13,13,13,13,13,13,2,17,17,17,17,17,
1,1,1,1,1,2,0,0,0,0,0,0,2,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,2,0,0,0,0,2,13,13,13,13,13,13,13,13,13,13,13,2,3,0,0,3,2,13,13,13,13,13,13,2,17,17,17,17,17,
5,1,5,1,5,2,0,0,0,0,0,0,2,19,19,19,19,27,27,27,19,19,19,19,27,4,4,19,19,2,0,0,0,0,2,1,1,1,1,1,1,1,1,1,1,1,2,2,0,0,2,2,1,1,1,1,1,1,2,17,17,17,17,17,
7,1,7,1,7,2,54,3,0,0,3,50,54,54,50,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,1,1,19,1,1,19,1,1,19,1,2,0,0,0,0,2,1,19,1,1,19,1,2,17,17,17,17,17,
17,17,17,17,17,17,17,32,0,0,32,17,17,17,17,55,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,4,1,1,1,1,1,1,1,4,1,2,0,0,0,0,2,1,1,4,1,1,1,2,17,17,17,17,17,
17,17,17,17,17,17,17,3,0,0,3,17,17,17,17,17,48,3,10,10,10,10,10,10,10,10,10,10,10,10,3,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,17,17,17,17,
54,54,50,54,50,54,54,2,0,0,2,54,50,51,17,17,48,2,13,13,13,13,13,13,13,13,13,13,13,13,2,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,17,17,17,17,
10,10,10,10,10,10,3,0,0,0,0,0,0,48,17,17,52,2,13,13,13,13,13,13,13,13,13,13,13,13,2,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,17,17,17,17,
12,12,12,12,12,12,2,0,0,0,0,0,0,48,17,17,52,2,27,27,27,27,27,27,27,27,27,27,27,27,2,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,17,17,17,17,
12,12,12,12,12,12,2,0,0,0,0,0,0,52,17,17,52,2,27,27,27,27,27,27,27,27,27,27,27,3,10,10,10,10,10,10,10,10,10,10,3,0,0,0,0,45,20,20,20,20,20,20,20,20,20,20,20,20,20,17,17,17,17,17,
1,1,1,1,1,1,2,0,0,0,0,0,0,52,17,17,52,2,19,27,27,27,19,27,27,27,19,27,27,2,13,13,13,13,13,13,13,13,13,13,2,0,0,0,0,21,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,
1,19,19,19,19,1,2,0,0,0,0,0,0,48,17,17,48,2,27,27,27,27,27,27,27,27,27,27,27,2,13,13,13,13,13,13,13,13,13,13,2,0,0,0,0,21,17,17,17,17,17,17,20,17,17,17,17,20,17,17,17,20,17,17,
1,1,1,1,1,1,2,0,0,0,0,0,0,3,10,10,3,0,0,0,0,0,0,0,0,0,0,0,0,2,1,1,1,1,1,1,1,1,1,1,2,0,0,0,0,21,17,17,17,17,17,17,20,17,17,17,17,20,17,17,17,20,17,17,
10,10,10,10,10,3,0,0,0,0,0,0,0,2,1,1,2,0,0,0,0,0,0,0,0,0,0,0,0,2,1,1,1,1,1,1,1,1,1,1,2,0,0,0,0,43,23,23,23,17,17,17,32,17,17,17,17,32,17,17,17,32,17,17,
12,12,12,12,12,2,0,0,0,0,0,0,0,0,0,0,0,0,3,10,10,10,10,10,10,10,3,0,0,2,1,1,1,1,1,1,1,1,1,1,2,0,0,0,0,0,0,26,0,21,23,23,31,23,23,23,23,31,23,23,23,31,23,23,
12,12,12,12,12,2,0,0,0,0,0,0,0,3,10,10,3,0,2,12,12,12,12,12,12,12,2,0,0,2,1,1,1,1,1,1,1,1,1,1,2,0,0,0,0,0,0,25,0,43,47,46,28,28,28,28,4,28,28,28,11,28,30,29,
1,1,1,1,1,2,0,3,10,10,10,3,0,2,1,1,2,0,2,1,1,1,1,1,1,1,2,0,0,0,0,3,10,10,10,10,3,10,10,10,10,10,10,10,3,0,0,0,0,0,0,0,0,0,26,0,0,0,0,28,30,29,17,17,
1,1,19,19,1,2,0,2,12,12,12,2,0,2,17,17,2,0,2,5,1,5,1,5,1,5,2,0,0,0,0,2,12,12,12,12,2,13,13,13,13,13,13,13,2,0,0,0,0,0,0,26,0,0,25,26,0,0,0,21,17,17,17,17,
1,1,19,19,1,2,0,2,1,1,1,2,49,53,17,17,48,0,2,7,1,7,1,7,1,7,2,0,0,0,0,2,12,12,12,12,2,13,13,13,13,13,13,13,2,0,0,0,0,0,0,25,26,0,0,25,0,0,26,21,17,17,17,17,
10,10,10,10,10,3,0,2,5,1,5,2,48,17,17,17,55,50,2,7,1,7,1,7,1,7,2,51,0,0,0,2,1,1,1,1,2,1,1,1,1,1,1,1,2,0,0,0,0,0,0,25,25,0,0,0,0,0,25,21,17,17,17,17,
12,12,12,12,12,2,0,2,7,1,7,2,53,17,17,17,17,17,17,17,17,17,17,17,17,17,17,55,51,0,0,2,1,1,1,1,2,19,19,1,1,1,19,19,2,0,0,0,0,45,20,20,20,20,20,20,20,20,20,17,17,17,17,17,
12,12,12,12,12,2,0,52,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,55,51,0,2,1,1,1,1,2,1,1,1,4,1,1,1,2,0,0,0,0,21,17,17,17,17,17,17,17,17,17,17,17,17,17,17,
1,1,1,1,1,2,0,48,17,17,17,17,17,17,17,17,17,49,50,54,51,17,17,17,17,17,17,17,17,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,17,17,17,17,17,17,17,17,17,17,17,17,17,17,
1,1,19,19,1,2,0,55,54,51,17,17,17,17,17,17,17,48,0,0,55,51,17,17,17,17,17,17,17,55,54,51,0,0,0,3,10,10,10,10,10,10,10,10,3,0,0,0,0,21,23,23,23,23,23,23,23,23,23,23,23,17,17,17,
1,1,19,19,1,2,0,0,0,55,50,54,50,54,50,54,50,53,0,0,0,55,54,50,54,50,51,17,17,17,17,48,0,0,0,2,13,13,13,13,13,13,13,13,2,0,0,0,0,43,47,46,28,28,28,28,28,4,28,30,29,17,17,17,
1,1,1,1,1,2,0,0,0,0,0,0,33,34,0,34,0,0,0,0,0,0,0,0,34,0,48,17,17,17,17,52,0,0,0,2,13,13,13,13,13,13,13,13,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,17,17,17,17,
10,10,10,10,10,10,10,10,3,0,0,0,33,0,0,0,0,34,33,33,0,0,34,0,0,0,48,17,17,17,17,48,0,0,0,2,1,1,1,1,1,1,1,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,17,17,17,17,
12,12,12,12,12,12,12,12,2,0,0,0,0,34,0,0,34,0,0,0,0,0,0,0,33,34,48,17,17,17,17,3,0,0,0,2,1,1,1,1,1,1,1,1,2,0,0,0,0,45,20,20,20,20,20,20,20,20,20,17,17,17,17,17,
12,12,12,12,12,12,12,12,2,0,0,0,34,0,0,0,34,0,34,0,0,0,0,33,0,0,55,51,17,17,17,32,0,0,0,2,1,14,1,1,1,1,1,14,2,0,0,0,0,21,17,17,17,17,17,17,17,26,17,17,17,17,17,17,
1,1,1,1,1,1,1,1,2,0,0,0,33,0,0,0,0,33,0,0,0,34,0,34,0,0,0,48,17,17,17,3,0,0,0,2,1,9,1,1,4,1,1,9,2,0,0,0,0,43,23,23,23,23,23,23,26,25,26,17,17,17,17,17,
1,1,1,1,1,1,1,1,2,0,0,33,0,0,0,0,34,0,0,0,33,0,34,0,0,0,0,52,17,17,17,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,25,25,21,17,17,17,17,
1,5,1,5,1,5,1,5,2,0,0,0,0,0,49,54,54,51,0,0,0,0,0,0,0,34,49,53,17,17,17,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,0,0,0,0,0,0,0,0,0,0,21,17,17,17,17,
1,7,1,7,1,7,1,7,2,54,54,50,54,50,53,17,17,55,50,50,54,50,50,54,50,50,53,17,17,17,17,2,20,2,20,2,20,2,20,2,20,2,20,2,20,2,20,2,20,20,20,20,20,20,20,20,20,20,20,17,17,17,17,17,
17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,
17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,
17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,
17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,
};

uint16_t dudex = 8*8;//25*8;
uint16_t dudey = 27*8;//57*8;

byte dudeanimation = DOWN;
byte dudeframe = 0;

byte worldframe = 0;

void draw_world(){
  uint8_t tile;
  gb.display.println(dudex/8 - 6);
  gb.display.println(dudey/8 - 4);
  //Signed because we may seek off the edge of the map
  for( int8_t x = dudex/8 - 6; x <= dudex/8 + 6; x++ ){
    for( int8_t y = dudey/8 - 4; y <= dudey/8 + 4; y++ ){
      //Draw the tile at the relative distance from the player
      tile = pgm_read_byte(&world[y*64+x]);
      switch( tile ){
        case DRAIN:
        case FLOW:
        case WATER:
        case DOCK1:
        case DOCK2:
        case DOCK3:
          //First 4 are first frame, second 4 are second frame
          if( worldframe >= 0 && worldframe <= 3 ){
            gb.display.drawBitmap( (x*8 - dudex) + SCREEN_WIDTH/2 - 4, (y*8 - dudey) + SCREEN_HEIGHT/2 - 4, &tiles[tile*10] );
          }else{
            //All animated tiles have their variation one tile after it
            gb.display.drawBitmap( (x*8 - dudex) + SCREEN_WIDTH/2 - 4, (y*8 - dudey) + SCREEN_HEIGHT/2 - 4, &tiles[(tile+1)*10] );
          }
          break;
          
        default:
          gb.display.drawBitmap( (x*8 - dudex) + SCREEN_WIDTH/2 - 4, (y*8 - dudey) + SCREEN_HEIGHT/2 - 4, &tiles[tile*10] );
      } 
    }
  }
  worldframe+=1;
  worldframe%=8;
}

uint8_t test_world_collision(uint8_t dir){
  uint8_t tile = 0;
  if( dir == UP ){
    tile = pgm_read_byte(&world[((dudey-1)/8)*64+dudex/8]);
    if( tile != DOOR && pgm_read_byte(&world[((dudey-1)/8)*64+(dudex+7)/8]) )
      return pgm_read_byte(&world[((dudey-1)/8)*64+(dudex+7)/8]);
    else
      return tile;
  }else if( dir == DOWN ){
    return pgm_read_byte(&world[((dudey+8)/8)*64+dudex/8]) ||
      pgm_read_byte(&world[((dudey+8)/8)*64+(dudex+7)/8]) != 0;
  }else if( dir == LEFT ){
    return pgm_read_byte(&world[((dudey)/8)*64+(dudex-1)/8]) != 0 ||
      pgm_read_byte(&world[((dudey+7)/8)*64+(dudex-1)/8]) != 0;
  }else{
    return pgm_read_byte(&world[((dudey)/8)*64+(dudex+8)/8]) != 0 ||
      pgm_read_byte(&world[((dudey+7)/8)*64+(dudex+8)/8]) != 0;
  }
}

void step_world(){
  byte moved = 0;
  
  dudeframe%=7;
  
  dudeframe++;
  
  if( gb.buttons.repeat(BTN_UP,1) ){
    uint8_t collision = 0;
    collision = test_world_collision(UP);
    if( collision == DOOR ){
      //Check whether we collided with a door based on our top left or top right
      collision = pgm_read_byte(&world[((dudey-1)/8)*64+dudex/8]);
      //Depending on which, we set dungeon position to tile x/y of door.
      //This signals to the dungeon generator which dungeon we want to enter.
      if( collision == DOOR ){
        dungeonx = dudex/8;
        dungeony = (dudey-1/8);
      }else{
        dungeonx = dudex+7/8;
        dungeony = (dudey-1/8);
      }
      mode = DUNGEON;
      dungeon_generated = 0;
      dungeon_level = 0;
      return;
    }
    if( !collision ){
      //Overwrite standing sprite
      if(dudeframe/2 == 0){
        gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudeup1);
      }else if(dudeframe/2 == 2){
        gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudeup2);
      }else{
        gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudeup);
      }
      
      dudey--;
      dudeanimation = UP;
      moved = 1;
      //try_combat();  TODO: Restore combat
    }
  }
  else if(gb.buttons.repeat(BTN_DOWN,1) && !test_world_collision(DOWN)){
    //Overwrite standing sprite
    if(dudeframe/2 == 0){
      gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudedn1);
    }else if(dudeframe/2 == 2){
      gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudedn2);
    }else{
      gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dude);
    }
    
    dudey++;
    dudeanimation = DOWN;
    moved = 1;
    //try_combat();  TODO: Restore combat
  }
  if(gb.buttons.repeat(BTN_LEFT,1) && !test_world_collision(LEFT)){
    if(dudeframe/2 == 0){
      gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudert1,NOROT,FLIPH);
    }else if(dudeframe/2 == 2){
      gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudert2,NOROT,FLIPH);
    }else{
      gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudert,NOROT,FLIPH);
    }
    
    dudex--;
    dudeanimation = LEFT;
    moved = 1;
    //try_combat();  TODO: Restore combat
  }
  else if(gb.buttons.repeat(BTN_RIGHT,1) && !test_world_collision(RIGHT)){
    if(dudeframe/2 == 0){
      gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudert1);
    }else if(dudeframe/2 == 2){
      gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudert2);
    }else{
      gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudert);
    }
    
    dudex++;
    dudeanimation = RIGHT;
    moved = 1;
    //try_combat();  TODO: Restore combat
  }

  if( !moved ){
    if( dudeanimation == UP ){
      gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudeup);
    }
    else if( dudeanimation == DOWN ){
      gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dude);
    }
    else if( dudeanimation == LEFT ){
      gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudert,NOROT,FLIPH);
    }
    else if( dudeanimation == RIGHT ){
      gb.display.drawBitmap(SCREEN_WIDTH/2-4,SCREEN_HEIGHT/2-4,dudert);
    }
  }
}
