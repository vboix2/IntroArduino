int VERMELL = 9;
int VERD = 10;
int BLAU = 11;

void setup() {
  pinMode(VERMELL, OUTPUT);
  pinMode(VERD, OUTPUT);
  pinMode(BLAU, OUTPUT);
}

void loop() {
  // Color vermell
  analogWrite(VERMELL, 255);
  analogWrite(VERD, 0);
  analogWrite(BLAU, 0);
  delay(2000);

  ledColor(0, 255, 0);    // Color verd
  delay(2000);

  ledColor(0, 0, 255);    // Color blau
  delay(2000);

  ledColor(255, 255, 0);  // Color groc
  delay(2000);

  ledColor(127, 0, 255);  // Color violeta
  delay(2000);
}

void ledColor(int r, int g, int b){
  analogWrite(VERMELL, r);
  analogWrite(VERD, g);
  analogWrite(BLAU, b);
}
