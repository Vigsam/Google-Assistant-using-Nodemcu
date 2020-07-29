void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);  //D7 Board Number = 13 
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);
delay(10000);
digitalWrite(13,LOW);
delay(4000);
}
