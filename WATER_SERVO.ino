#include <Servo.h>

int waterSensor = 8;   
Servo myServo;

void setup() {
  pinMode(waterSensor, INPUT);
  myServo.attach(9);
  myServo.write(0);     
}

void loop() {
  int waterDetected = digitalRead(waterSensor);

  if (waterDetected == LOW) {   
    myServo.write(90);          
    delay(500);
  } 
  else {                        
    myServo.write(0);           
    delay(500);
  }
}
