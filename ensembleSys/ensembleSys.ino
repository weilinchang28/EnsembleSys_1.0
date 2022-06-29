#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

#define PIN 9
#define PIN 10
#define PIN 11

#define NUMPIXELS 28

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 500 // Time (in milliseconds) to pause between pixels

//////////////////////////////////////////////////////

int LED_pin0 = 9;
int LED_pin1 = 10;
int LED_pin2 = 11;

void setup() {
  
  Serial.begin(9600);
  pinMode(LED_pin,OUTPUT);
  
  ////////////////////////////////////////////////////
  #if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
  #endif

  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  
}

void loop() {

  int softPot0 = analogRead(0);
  int softPot1 = analogRead(1);
  int softPot2 = analogRead(2);

  if (Serial.available())
  {
    int value1 = Serial.read();
    if (value1 == 1)
      {
        pixels.clear();
        pixels.setPixelColor(chordIndex[], pixels.Color(255, 255, 255));
        pixels.show();   // Send the updated pixel colors to the hardware.
      }
    else if (value1 == 0)
      {
        pixels.clear();
        pixels.setPixelColor(chordIndex[], pixels.Color(0, 0, 0));
        pixels.show();   // Send the updated pixel colors to the hardware.
      }
      }
  }
  

  delay(DELAYVAL); // Pause before next pass through loop
  
  Serial.print(softPot0);
  Serial.print(" ");
  Serial.print(softPot1);
  Serial.print(" ");
  Serial.println(softPot2);

  delay(5);

}
