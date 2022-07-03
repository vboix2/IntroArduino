// Importem la llibreria per al control del servomotor
#include <Servo.h>

// Creem un objecte de la classe Servo que representarà al servomotor
Servo servo;

int PINSERVO = 2;
int POLSMIN = 1000;   // Pols mínim corresponent a l'angle 0º
int POLSMAX = 2000;   // Pols màxim corresponent a l'angle 180º

void setup() {
  // Inicialitzem el servomotor
  servo.attach(PINSERVO, POLSMIN, POLSMAX);
}

void loop() {
  servo.write(0);     // Servo a 0º
  delay(5000);
  servo.write(180);   // Servo a 180º
  delay(5000);
}
