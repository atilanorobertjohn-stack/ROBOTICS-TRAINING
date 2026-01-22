int sound = A0;     
int buzzer = 9;     
int threshold = 75;   


void setup() {
  
  pinMode(buzzer, OUTPUT);

}

void loop() {
 

  if (analogRead(sound) > threshold) {
    tone(buzzer, 500);
    delay(5000);
   

  }
  else {
    
    noTone(buzzer);
  }

  
}
