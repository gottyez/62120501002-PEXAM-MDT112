const int buzzer = 8;



#include <Stepper.h>

#define STEPS_PER_360_DEGREE 2038

Stepper stepper(STEPS_PER_360_DEGREE, 12, 10, 9, 11);



#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display = Adafruit_SSD1306(128, 32, &Wire);

void setup(){
  pinMode(buzzer, OUTPUT);
  tone(buzzer, 800);
  delay(400);
  noTone(buzzer);

  Serial.begin(9600);
  Serial.println("Hello MDT!");


  stepper.setSpeed(16);

  Serial.println("CW 90");
  stepper.step(STEPS_PER_360_DEGREE/4);
  delay(800);

  Serial.println("CCW 180");
  stepper.step(-STEPS_PER_360_DEGREE/2);
  delay(800);


  display.begin(0x3C);

  display.clearDisplay();
  display.setCursor(35, 20);
  display.setTextColor(1);
  display.setTextSize(1);
  display.println("Hello MDT!");
  display.display();
  delay(1000);

  display.clearDisplay();
  display.display();
}

void loop(){

}