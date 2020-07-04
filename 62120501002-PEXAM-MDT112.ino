const int buzzer = 8; //buzzer to arduino pin 8

void setup(){
  pinMode(buzzer, OUTPUT);
  tone(buzzer, 800);
  delay(400);
  noTone(buzzer);

}

void loop(){

}