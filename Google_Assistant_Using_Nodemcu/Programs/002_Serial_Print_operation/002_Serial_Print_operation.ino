void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);  //default baud rate = 115200
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Hello");  //Serial printing line by line
delay(1000); //delay in 1000 milliseconds
}
