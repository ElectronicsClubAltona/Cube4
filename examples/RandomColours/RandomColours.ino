/*
 * File:    RandomColours.ino
 * Version: 1.0
 * Author:  Jonathan Oxer (jon@freetronics.com)
 * License: GPLv3
 */

#include "SPI.h"
#include "Cube.h"

byte xPos;
byte yPos;
byte zPos;
byte rr;
byte gg;
byte bb;
rgb_t colour;

Cube cube;

void setup(void) {
  cube.begin();
}

void loop(void) {

  xPos = random(4);
  yPos = random(4);
  zPos = random(4);
  rr = random(0, 2) * 255;
  gg = random(0, 2) * 255;
  bb = random(0, 2) * 255;
  
  
  cube.set(xPos, yPos, zPos, RGB(rr, gg, bb));
  delay(2);
}
