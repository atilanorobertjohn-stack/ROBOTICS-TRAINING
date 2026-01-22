int sound = A0;     
int buzzer = 9;     
int threshold = 75;   


void setup() {
  
  pinMode(buzzer, OUTPUT);

}

void loop() {
 

  if (analogRead(sound) > threshold) {
    tone(buzzer, 1900);
   

  }
  else {
    
    noTone(buzzer);
  }

  
}
