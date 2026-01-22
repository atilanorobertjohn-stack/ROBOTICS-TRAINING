int sound = A0;     
int ledPin = 8;       
int buzzerPin = 9;     
int threshold = 75;   


void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
 

  if (analogRead(sound) > threshold) {
    tone(buzzerPin, 1900);
   

  }
  else {
    
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

  
}
