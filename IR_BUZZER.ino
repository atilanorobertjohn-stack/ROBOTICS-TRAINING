int IR = 8;
int buzzer = 9;

void setup (){

pinMode (IR, INPUT);
pinMode (buzzer, OUTPUT);

}

void loop (){



if (digitalRead(IR) == LOW) {

  tone(buzzer,1000, 1000);
  delay(500);
  tone(buzzer,800, 800);
  delay(500);
  tone(buzzer,1000, 1000);
  delay(500);
  tone(buzzer,800, 800);
  delay(500);
  tone(buzzer,1000, 1000);
  delay(500);
  tone(buzzer,800, 800);
  delay(500);
  tone(buzzer,1000, 1000);
  delay(500);
  tone(buzzer,800, 800);
  delay(500);

 
}

else{

  noTone(buzzer);

}


}