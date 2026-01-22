#include <Servo.h>

int IR = 8;
Servo servo

void setup() {
  pinMode(IR, INPUT);
  servo.attach(9);   
  servo.write(0);    
}

void loop() {


  if (digitalRead(IR) == LOW) {
    servo.write(90);   
    delay(3000);
  } 
  else {
    servo.write(0);   
    delay(500);
  }
}
