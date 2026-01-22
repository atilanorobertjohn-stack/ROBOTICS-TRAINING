int sound = A0;     
int ledPin = 8;       
int buzzerPin = 9;     
int threshold = 75;   


void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  int soundValue = analogRead(sound);

  if (soundValue > threshold) {
    // sound DETECTED
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1900);
    delay (500);
    digitalWrite(ledPin, LOW);
    tone(buzzerPin, 1800);
    delay (500);
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1900);
    delay (500);
   digitalWrite(ledPin, LOW);
    tone(buzzerPin, 1800);
    delay (500);
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1900);
    delay (500);
    digitalWrite(ledPin, LOW);
    tone(buzzerPin, 1800);
    delay (500);
     digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1900);
    delay (500);
    digitalWrite(ledPin, LOW);
    tone(buzzerPin, 1800);
    delay (500);
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1900);
    delay (500);
   digitalWrite(ledPin, LOW);
    tone(buzzerPin, 1800);
    delay (500);
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1900);
    delay (500);
    digitalWrite(ledPin, LOW);
    tone(buzzerPin, 1800);
    delay (500);

  }
  else {
    // No sound
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

  
}
