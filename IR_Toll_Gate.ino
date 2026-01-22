#include <Servo.h>

int IR = 8;

void setup() {
  pinMode(IR, INPUT);
  Servo.attach(9);   
  Servo.write(0);    
}

void loop() {


  if (digitalRead(IR) == LOW) {
    Servo.write(90);   
    delay(3000);
  } 
  else {
    Servo.write(0);   
    delay(500);
  }
}
