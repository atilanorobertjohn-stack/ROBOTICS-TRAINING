int soilPin = 7;      // Digital output of soil sensor
int relayPin = 8;     // Relay control pin

void setup() {
  pinMode(soilPin, INPUT);
  pinMode(relayPin, OUTPUT);

  
}

void loop() {
  int soilState = digitalRead(soilPin);

  if (soilState == LOW) {      
    // Soil is dry
    digitalWrite(relayPin, HIGH);   // Turn relay ON
  } 
  else {
    // Soil is wet
    digitalWrite(relayPin, LOW);    // Turn relay OFF
  }

  delay(200);
}
