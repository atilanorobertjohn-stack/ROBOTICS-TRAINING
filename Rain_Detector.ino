#include<Servo.h>

int water = A0;     
int threshold = 150; 
Servo servo;  


void setup() {
  servo.attach(6);
  servo.write(0);
  

}

void loop() {
 

  if (analogRead(water) > threshold) {
    servo.write(180);
    delay(500);

  }
  else {
    
    servo.write(0);
    delay(5000);
  }

  
}
