//Library Installation

//DHT library

#include <DHT.h>

#define DHTPIN        5  //Board Number = D1, GPIO Number = 5 in program

#define DHTTYPE       DHT11 //Type of dht sensor

DHT dht(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
float Temperature = dht.readTemperature();
float Humidity = dht.readHumidity();

if(isnan(Temperature) || isnan(Humidity))
{
  Serial.println("Dht 11 /22 not working!! Kindly Check out the connections");
  return;
  }

else
{
  Serial.println("Temperature = " + String(Temperature) + " C");
  Serial.println("Humidity =" + String(Humidity) + " %");
  delay(1000);
  }
}
