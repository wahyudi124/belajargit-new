void setup(){
    pinMode(13,OUTPUT);
}

void loop(){
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);    
    pinMode(14,LOW);
    if(digitalRead(14) == 0){
        digitalWrite(13,HIGH);
        delay(1000);
        digitalWrite(13,LOW);
        delay(1000); 
    }
}