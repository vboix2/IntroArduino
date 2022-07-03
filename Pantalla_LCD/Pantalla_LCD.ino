#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

void setup() {
  // Inicialitzem la pantalla amb les mides 16x2
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0,0);              // Situem el cursor a l'inici de la primera línia (0,0)
  lcd.print("Hola, han passat");   // Escrivim per pantalla
  lcd.setCursor(0,1);              // Situem el cursor a la segona línia (0,1)
  lcd.print(millis() / 1000);      // Mostrem els segons d'execució
  lcd.print(" segons");
}
