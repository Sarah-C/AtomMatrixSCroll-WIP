#ifndef Scrolly_h
#define Scrolly_h

#include "M5Atom.h"
#include "Scrolly_Font.h"

#include "Scrolly_printf.h"
#include "Scrolly_Display.h"
#include "Scrolly_PixelBoard.h"
#include "Scrolly_MultiArrays.h"

struct FontColor {
  uint8_t r;
  uint8_t g;
  uint8_t b;
};

class Scrolly {
  public:
    Scrolly(int displayWidth, int displayHeight, int pixelBoardWidth, int pixelBoardHeight, int pixelBoardChannels);

    Scrolly_Display *display;
    Scrolly_PixelBoard *pixelBoard;

    uint8_t bits[8] = {1, 2, 4, 8, 16, 32, 64, 128};
    int cursorX;

    float currentDisplayX;
    boolean displayAA;
    float stepX;
    int displayDelay;

    uint8_t fontCount;
    FontColor fontColor;

    void clearMessageBuffer(uint8_t r, uint8_t g, uint8_t b);
    void addChar(char c);
    void setFontColor(uint8_t r, uint8_t g, uint8_t b);
    void show(void);
    int findChar(char ascii);
    void print(const char * format, ...);
    void printChars(char * buffer, uint8_t length);

  private:
};

#endif
