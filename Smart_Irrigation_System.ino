int soil = 7;    
int relay = 8;     

void setup() {
  pinMode(soil, INPUT);
  pinMode(relay, OUTPUT);

  
}

void loop() {

  if (digitalRead(soil) == LOW) {      
    
    digitalWrite(relay, HIGH);   
  } 
  else {
    
    digitalWrite(relay, LOW); 
    delay(200);
  }


}
