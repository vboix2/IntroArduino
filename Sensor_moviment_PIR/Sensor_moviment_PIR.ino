int PIR = 2;
int LED = 3;

void setup() {
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
  delay(5000);                    // Temps d'espera per estabilitzar el sensor
}

void loop() {
  if(digitalRead(PIR) == HIGH) {  // Si es detecta moviment s'encén el LED 
    digitalWrite(LED, HIGH);
    delay(500);
  }
  else {                          // En cas contrari s'apaga el LED
    digitalWrite(LED, LOW);
  }
}
