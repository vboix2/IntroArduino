int LED = 3;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for(int i=0; i<256; i++){   // Augmentem progressivament la intensitat del LED 0-255
    analogWrite(LED, i);
    delay(15);
  }

  for(int i=255; i>=0; i--){  // Disminuim progressivament la intensitat del LED 255-0
    analogWrite(LED, i);
    delay(15);
  }
}
