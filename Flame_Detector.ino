int flame = 7;
int buzzer = 8; 


void setup (){

pinMode (flame, INPUT);
pinMode (buzzer, OUTPUT);

}

void loop (){

if (digitalRead(flame) == LOW){

tone (buzzer, 600, 500);

}

else {

noTone (buzzer);

}

}