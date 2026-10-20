const int I2C_SDA_PIN = 6;
const int I2C_SCL_PIN = 7;
const int DHT_PIN = 3;
const int BUTTON_ONE_PIN = 4;
const int BUTTON_TWO_PIN = 5;
const bool USE_DHT11 = false;const MenuItem MENU_ITEMS[] = {
  {"NAP",   1,  18, -4, NAP_REACTION},   // top
  {"PLAY", 12, -9, -5, RUN_REACTION},    // right
  {"FEED",  3,  2, 18, JUMP_REACTION},   // bottom
  {"PET",   7,  0,  0, HEART_REACTION},  // left
};
{"DANCE", 15, -12, -3, JUMP_REACTION},  // left
void drawSparkle(int x, int y) {
  display.drawPixel(x, y - 2, SSD1306_WHITE);
  display.drawPixel(x - 1, y - 1, SSD1306_WHITE);
  display.drawPixel(x + 1, y - 1, SSD1306_WHITE);
  display.drawPixel(x - 2, y, SSD1306_WHITE);
  display.drawPixel(x, y, SSD1306_WHITE);
  display.drawPixel(x + 2, y, SSD1306_WHITE);
  display.drawPixel(x - 1, y + 1, SSD1306_WHITE);
  display.drawPixel(x + 1, y + 1, SSD1306_WHITE);
  display.drawPixel(x, y + 2, SSD1306_WHITE);
}
if (!isNapping() && (now / 250) % 2 == 0) {
  drawSparkle(petX - 4, petY + 18);
}

const int PET_SPRITE_WIDTH = 32;
const int PET_SPRITE_HEIGHT = 32;

const uint8_t PROGMEM PET_SPRITE[] = {
  "C:\Users\salim\Downloads\Tony Stark!.jpg".
};