
/*10 bit ADC Calculation 

2^10 = 1024 

( So Value in between the range (0-1024) )

*/

#include <DHT.h>

#define DHTPIN          5

#define DHTTYPE         DHT11

DHT dht(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:

Serial.begin(115200);
dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
int temperature = dht.readTemperature();
int Humidity = dht.readHumidity();

if(isnan(temperature)  || isnan(Humidity))
{
   Serial.print("DHT11 not found");
  
  }

  else{
    Serial.println("Temperature =" + String(temperature) + " C");
    Serial.println("Humidity =" + String(Humidity) + " %");
    
    }

}
