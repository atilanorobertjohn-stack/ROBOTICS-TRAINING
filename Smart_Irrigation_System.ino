int soil = 7;    
int relay = 8;     

void setup() {
  pinMode(soil, INPUT);
  pinMode(relay, OUTPUT);

  
}

void loop() {

  if (digitalRead(soil) == LOW) {      
    
    digitalWrite(relayPin, HIGH);   
  } 
  else {
    
    digitalWrite(relayPin, LOW); 
  }

  delay(200);
}