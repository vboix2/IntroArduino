void setup() {              // Funció de configuració. S'executa una vegada a l'inici
  
  pinMode(13, OUTPUT);      // Definim el pin 13 (LED integrat) com a sortida

}

void loop() {               // Cicle de programa. S'executa indefinidament en bucle
  
  digitalWrite(13, HIGH);   // Encenem el LED
  delay(1000);              // Esperem un segon
  digitalWrite(13, LOW);    // Apaguem el LED
  delay(1000);              // Esperem un segon

}
