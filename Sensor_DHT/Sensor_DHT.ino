// Llibreries del sensor
#include <DHT.h>


// Objecte sensor de tipus DHT22 connectat al pin 2
DHT dht(2, DHT22);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // Llegim dades del sensor
  float temperatura = dht.readTemperature();
  float humitat = dht.readHumidity();

  // Mostrem els resultats per pantalla
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print("ºC\tHumitat: ");
  Serial.print(humitat);
  Serial.println("%");
  delay(500);
}
