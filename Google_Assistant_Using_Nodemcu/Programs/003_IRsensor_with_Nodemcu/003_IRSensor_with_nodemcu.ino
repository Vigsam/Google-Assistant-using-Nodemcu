void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int ir_value = digitalRead(0);
Serial.println(ir_value);
delay(1000);
if(ir_value == 0)
{
  Serial.println("Detected");
  digitalWrite(5,HIGH);
  }
else{
  Serial.println("Not Detected");
  digitalWrite(5,LOW);
  }
}
