#include "Adafruit_NeoPixel.h"
#define PIN 5
#define NUMPIXELS 167
Adafruit_NeoPixel strip(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// int brightness = 255;

// while (brightness > 0) {
//   strip.clear();
//   strip.setBrightness(255);
//   for (int i = startPosition; i < endPosition; i++) {
//     strip.setPixelColor(i, strip.Color(brightness, brightness, brightness));
//   }
//   strip.show();
//   brightness -= 3;
//   if (brightness < 0) brightness = 0;
// }


// int brightness = 0;

// while (brightness < 255) {
//   strip.clear();
//   strip.setBrightness(brightness);
//   for (int i = startPosition; i < endPosition; i++) {
//     strip.setPixelColor(i, strip.Color(255, 255, 255));
//   }
//   strip.show();
//   brightness += 3;
//   if (brightness > 255) brightness = 255;
// }

void stopStrip() {
  for (int i = 0; i < NUMPIXELS; i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0));
    strip.show();
  }
}

void setup() {
  strip.begin();
  strip.setBrightness(255);  // luminosité de la LED (maximum 255)
  stopStrip();

  // initialisation de la communication série
  Serial.begin(9600);

  delay(100);
}

void loop(void) {
}
