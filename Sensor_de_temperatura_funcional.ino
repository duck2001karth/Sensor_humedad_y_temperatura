#include <DHT.h>
#define DHTTYPE DHT11
#define SENSOR 4 //Variable declarada para el NodeMCU que corresponde a la letra "D2" sabiendo que interna es "GPI04"

DHT dht(SENSOR, DHTTYPE); 
void setup(void) 
{ 
     dht.begin();
     Serial.begin(9600); 
     Serial.println("Humedad y Temperatura "); 
     delay(1000); //1 segundo
} 
void loop() { 
     float hum = dht.readHumidity(); 
     float term = dht.readTemperature(); 
     Serial.print("Humedad = "); 
     Serial.print(hum); 
     Serial.print("% "); 
     Serial.print("Temperatura = "); 
     Serial.print(term); 
     Serial.println("C "); 
     delay(2000); //2 segundos
}
