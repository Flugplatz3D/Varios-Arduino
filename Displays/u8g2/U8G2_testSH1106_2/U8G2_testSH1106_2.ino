#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
//U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

int i = -10;

void setup() {
  u8g2.begin();
  u8g2.setFontRefHeightExtendedText();
  u8g2.setDrawColor(1);
  u8g2.setFontPosTop();
  u8g2.setFontDirection(0);
  u8g2.clearBuffer();
  //u8g2.setFont(u8g2_font_6x13_tf);
  //u8g2.setFont(u8g2_font_bauhaus2015_tr);
  //u8g2.setFont(u8g2_font_HelvetiPixel_tr); //59972
  u8g2.setFont(u8g2_font_BBSesque_tf);
  //u8g2.setFont(u8g2_font_finderskeepers_tf);
  //u8g2.setFont(u8g2_font_6x10_tf);
  //u8g2.setFont(u8g2_font_cu12_tr);
  //u8g2.setFont(u8g2_font_freedoomr10_tu);
  //u8g2.setFont(u8g2_font_amstrad_cpc_extended_8f);
  //u8g2.setFont(u8g2_font_amstrad_cpc_extended_8r);
  //u8g2.setFont(u8g2_font_cursor_tf);
  //u8g2.setFont(u8g2_font_4x6_tf);
  //u8g2.setFont(u8g2_font_5x8_tf);
  //u8g2.setFont(u8g2_font_halftone_tf);
  //u8g2.setFont(u8g2_font_tinytim_tf);
  //u8g2.setFont(u8g2_font_tooseornament_tf);
  //u8g2.setFont(u8g2_font_adventurer_tf);
  //u8g2.setFont(u8g2_font_fancypixels_tf);
  //u8g2.setFont(u8g2_font_lastapprenticebold_tr);
  //u8g2.setFont(u8g2_font_ImpactBits_tr);
  //u8g2.setFont(u8g2_font_IPAandRUSLCD_tf);
  //  u8g2.drawStr(0, 0, "NUCLEO-32");
  //  u8g2.drawStr(0, 16, "STM32F303K8");
  //  u8g2.drawStr(0, 32, "Test U8g2lib SH1106");
  u8g2.drawStr(0, 0, "Test U8g2lib SH1106");
  u8g2.setFont(u8g2_font_HelvetiPixel_tr);
  u8g2.sendBuffer();
  delay(3000);
}

void loop() {
  u8g2.clearBuffer();
  u8g2.setCursor(0, 0);
  u8g2.print(millis(), DEC);
  //u8g2.drawCircle(i, 54, 4);
  u8g2.drawDisc(i, 50, 10);
  u8g2.sendBuffer();
  i++;
  //  i = i + 2;
  if (i > 138) i = -10;
}
