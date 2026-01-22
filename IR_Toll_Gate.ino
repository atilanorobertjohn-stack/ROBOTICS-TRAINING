#include <Servo.h>

int IR = 8;
Servo myServo;

void setup() {
  pinMode(IR, INPUT);
  myServo.attach(9);   
  myServo.write(0);    
}

void loop() {


  if (digitalRead(IR) == LOW) {
    myServo.write(90);   
    delay(3000);
  } 
  else {
    myServo.write(0);   
    delay(500);
  }
}
