#include "M5Atom.h"

const unsigned char Scrolly::font[][7] PROGMEM =
{
  { // [ ]
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    32,
    5
  },
  { // A
    0b00000110,
    0b00001001,
    0b00001111,
    0b00001001,
    0b00001001,
    65,
    5
  },
  { // B
    0b00001110,
    0b00001001,
    0b00001110,
    0b00001001,
    0b00001110,
    66,
    5
  },
  { // C
    0b00000110,
    0b00001001,
    0b00001000,
    0b00001001,
    0b00000110,
    67,
    5
  },
  { // D
    0b00001110,
    0b00001001,
    0b00001001,
    0b00001001,
    0b00001110,
    68,
    5
  },
  { // E
    0b00001111,
    0b00001000,
    0b00001110,
    0b00001000,
    0b00001111,
    69,
    5
  },
  { // F
    0b00001111,
    0b00001000,
    0b00001110,
    0b00001000,
    0b00001000,
    70,
    5
  },
  { // G
    0b00000110,
    0b00001001,
    0b00001011,
    0b00001001,
    0b00000110,
    71,
    5
  },
  { // H
    0b00001001,
    0b00001001,
    0b00001111,
    0b00001001,
    0b00001001,
    72,
    5
  },
  { // I
    0b00000111,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000111,
    73,
    5
  },
  { // J
    0b00001111,
    0b00000010,
    0b00000010,
    0b00001010,
    0b00000100,
    74,
    5
  },
  { // K
    0b00001001,
    0b00001010,
    0b00001100,
    0b00001010,
    0b00001001,
    75,
    5
  },
  { // L
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001111,
    76,
    5
  },
  { // M
    0b00010001,
    0b00011011,
    0b00010101,
    0b00010001,
    0b00010001,
    77,
    6
  },
  { // N
    0b00001001,
    0b00001101,
    0b00001101,
    0b00001011,
    0b00001001,
    78,
    5
  },
  { // O
    0b00000110,
    0b00001001,
    0b00001001,
    0b00001001,
    0b00000110,
    79,
    5
  },
  { // P
    0b00001110,
    0b00001001,
    0b00001110,
    0b00001000,
    0b00001000,
    80,
    5
  },
  { // Q
    0b00000110,
    0b00001001,
    0b00001001,
    0b00001011,
    0b00000101,
    81,
    5
  },
  { // R
    0b00001110,
    0b00001001,
    0b00001110,
    0b00001001,
    0b00001001,
    82,
    5
  },
  { // S
    0b00000111,
    0b00001000,
    0b00000110,
    0b00000001,
    0b00001110,
    83,
    5
  },
  { // T
    0b00011111,
    0b00000100,
    0b00000100,
    0b00000100,
    0b00000100,
    84,
    6
  },
  { // U
    0b00001001,
    0b00001001,
    0b00001001,
    0b00001001,
    0b00001111,
    85,
    5
  },
  { // V
    0b00010001,
    0b00010001,
    0b00010001,
    0b00001010,
    0b00000100,
    86,
    6
  },
  { // W
    0b00010001,
    0b00010001,
    0b00010101,
    0b00010101,
    0b00001010,
    87,
    6
  },
  { // X
    0b00010001,
    0b00001010,
    0b00000100,
    0b00001010,
    0b00010001,
    88,
    6
  },
  { // Y
    0b00010001,
    0b00001010,
    0b00000100,
    0b00000100,
    0b00000100,
    89,
    6
  },
  { // Z
    0b00011111,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00011111,
    90,
    6
  },
  { // 0
    0b00000110,
    0b00001001,
    0b00001001,
    0b00001001,
    0b00000110,
    48,
    5
  },
  { // 1
    0b00000010,
    0b00000110,
    0b00000010,
    0b00000010,
    0b00000111,
    49,
    5
  },
  { // 2
    0b00000110,
    0b00001001,
    0b00000010,
    0b00001100,
    0b00001111,
    50,
    5
  },
  { // 3
    0b00001110,
    0b00000001,
    0b00000110,
    0b00000001,
    0b00001110,
    51,
    5
  },
  { // 4
    0b00001000,
    0b00001000,
    0b00001010,
    0b00001111,
    0b00000010,
    52,
    5
  },
  { // 5
    0b00001111,
    0b00001000,
    0b00001110,
    0b00000001,
    0b00001110,
    53,
    5
  },
  { // 6
    0b00000111,
    0b00001000,
    0b00001110,
    0b00001001,
    0b00000110,
    54,
    5
  },
  { // 7
    0b00001111,
    0b00000001,
    0b00000010,
    0b00000100,
    0b00001000,
    55,
    5
  },
  { // 8
    0b00000110,
    0b00001001,
    0b00000110,
    0b00001001,
    0b00000110,
    56,
    5
  },
  { // 9
    0b00000110,
    0b00001001,
    0b00000111,
    0b00000001,
    0b00001110,
    57,
    5
  },
  { // !
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000000,
    0b00000001,
    33,
    2
  }, 
  { // "
    0b00000101,
    0b00000101,
    0b00000000,
    0b00000000,
    0b00000000,
    34,
    4
  }, 
  { // #
    0b00001001,
    0b00001111,
    0b00001001,
    0b00001111,
    0b00001001,
    35,
    5
  }, 
  { // $
    0b00001111,
    0b00001110,
    0b00000101,
    0b00001111,
    0b00000100,
    36,
    5
  }, 
  { // +
    0b00000000,
    0b00000010,
    0b00000111,
    0b00000010,
    0b00000000,
    43,
    4
  }, 
  { // -
    0b00000000,
    0b00000000,
    0b00000111,
    0b00000000,
    0b00000000,
    45,
    4
  }, 
  { // .
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000010,
    46,
    3
  }, 
  { // /
    0b00000001,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    47,
    6
  }, 

  { // END
    0,0,0,0,0,8,0
  }
};
