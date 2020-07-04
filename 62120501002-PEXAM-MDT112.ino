const int buzzer = 8;

#include <Stepper.h>

#define STEPS_PER_360_DEGREE 2038

Stepper stepper(STEPS_PER_360_DEGREE, 12, 10, 9, 11);

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
}

void loop(){

}