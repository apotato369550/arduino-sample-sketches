#include "DHT.h"

#define dhtType DHT11

int dht_pin = 8;

DHT dht(dht_pin, dhtType);

float humidity_val;
float temp_val_c;
float temp_val_f;
float heat_index_c;
float heat_index_f;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  dht.begin();
}

void loop() {
  humidity_val = dht.readHumidity();
  temp_val_c = dht.readTemperature();
  temp_val_f = dht.readTemperature(true);

  if(isnan(humidity_val) && isnan(temp_val_c) && isnan(temp_val_f)){
    Serial.println("Reading DHT sensor failed!");

    return;
  }

  heat_index_c = dht.computeHeatIndex(temp_val_c, humidity_val, false);

  heat_index_f = dht.computeHeatIndex(temp_val_f, humidity_val);

  Serial.print("Humidity: ");
  Serial.print(humidity_val);
  Serial.print(" %/t");

  
  Serial.print("Temperature: ");
  Serial.print(temp_val_c);
  Serial.print(" C ");
  Serial.print(temp_val_f);
  Serial.print(" F\t");

  
  Serial.print("Windchill: ");
  Serial.print(heat_index_c);
  Serial.print(" C ");
  Serial.print(heat_index_f);
  Serial.print(" F \n");

  delay(2000);

}
