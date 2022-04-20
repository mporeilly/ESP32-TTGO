#include <Arduino.h>

#include <TFT_eSPI.h>

TFT_eSPI g_Display;


void setup() {
  // put your setup code here, to run once:
  //Serial.begin(115200);
  g_Display.init();
  g_Display.setRotation(0);
  g_Display.fillScreen(TFT_RED);
  g_Display.setTextColor(TFT_WHITE, TFT_RED);
  g_Display.textsize = 4;
  g_Display.println("Temp. 20C");
  g_Display.println("Set:  20C");
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("hello world");
}