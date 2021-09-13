#include "M5Atom.h"

#include "Scrolly.h"
//#include "Scrolly_Font.h"


Scrolly s(5, 5,        100, 5, 3); // displWidth, displHeight, buffWidth, buffHeight, BuffCols

float x = 0;

void setup() {
  M5.begin(true, true, true);
  delay(200);

  s.pixelBoard->clearPixelBoard(0, 0, 0);
  s.setFontColor(128, 128, 255);
  s.addChar(' ');
  s.print("TEST %i", 123);

  s.setFontColor(255, 0, 255);
  s.addChar(' ');
  s.addChar('A');
  s.setFontColor(255, 0, 0);
  s.addChar('B');
  s.setFontColor(0, 255, 0);
  s.addChar('C');
  s.setFontColor(0, 0, 255);
  s.addChar('D');

}

void loop() {
  x += 0.1;
  if (x > s.cursorX + 5) x = 0;
  s.display->drawMessageBuffer(x);
  s.display->show();
  delay(15);
}
