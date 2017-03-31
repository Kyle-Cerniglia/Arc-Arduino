#include <TVout.h>
#include <fontALL.h>

TVout TV;

int x = 0;

void setup() {
  TV.begin(PAL,120,96);
  TV.select_font(font6x8);
}

void loop() {
  TV.println(x);
  x++;
  //delay(72000);
  TV.delay(1000);
}
