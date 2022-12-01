// Importem la llibreria per al control del servomotor
#include <Servo.h>

// Creem un objecte de la classe Servo que representarà al servomotor
Servo servo;

int PINSERVO = 2;

void setup() {
  // Inicialitzem el servomotor
  servo.attach(PINSERVO);
}

void loop() {
  servo.write(0);     // Servo a 0º
  delay(5000);
  servo.write(180);   // Servo a 180º
  delay(5000);
}
