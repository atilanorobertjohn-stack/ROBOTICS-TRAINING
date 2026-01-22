int sound = A0;     
int led = 8;       
int buzzer = 9;     
int threshold = 75;   


void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
 

  if (analogRead(sound) > threshold) {
    tone(buzzer, 1900);
   

  }
  else {
    
    digitalWrite(led, LOW);
    noTone(buzzer);
  }

  
}
