#include "DHT.h"

//Pins connections on Arduino
#define DHTPIN 7
#define DHTTYPE DHT11 // DHT 11

float t;  // Variable for temp in C
float h; //Variable for humidity readings in %

//Initialization of DHT sensor
DHT dht(DHTPIN, DHTTYPE); 

void setup() {
Serial.begin(115200);
dht.begin();   //initialize dht 
}

void loop() {
delay(100);

// variables declaration
t = dht.readTemperature();
h = dht.readHumidity();
}

void display_data(int rdm) {
    String data="f"+String(rdm);

    t = dht.readTemperature();
    h = dht.readHumidity();
    data+=",t"+String(t+25);
    data+=",h"+String(h+70);
}
