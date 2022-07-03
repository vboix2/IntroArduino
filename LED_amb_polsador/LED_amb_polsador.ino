// Constants
int POLSADOR = 2;                 // El polsador està connectat al pin 2
int LED = 3;                      // El LED està connectat al pin 3

void setup() {
  pinMode(POLSADOR, INPUT);       // Definim el polsador com a entrada
  pinMode(LED, OUTPUT);           // Definim el LED com a sortida
}

void loop() {
  if (digitalRead(POLSADOR) == HIGH) { // Si el polsador està apretat...
    digitalWrite(LED, HIGH);      // encenem el LED
  }
  else {                          // En cas contrari...
    digitalWrite(LED, LOW);       // apaguem el LED
  }
}
