const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void loop() {
  nombre(1,1,1,0,0,1,1);  // 9
  delay(1000);
  nombre(1,1,1,1,1,1,1);  // 8
  delay(1000);
  nombre(1,1,1,0,0,0,0);  // 7
  delay(1000);
  nombre(1,0,1,1,1,1,1);  // 6
  delay(1000);
  nombre(1,0,1,1,0,1,1);  // 5
  delay(1000);
  nombre(0,1,1,0,0,1,1);  // 4
  delay(1000);
  nombre(1,1,1,1,0,0,1);  // 3
  delay(1000);
  nombre(1,1,0,1,1,0,1);  // 2
  delay(1000);
  nombre(0,1,1,0,0,0,0);  // 1
  delay(1000);
  nombre(1,1,1,1,1,1,0);  // 0
  delay(1000);

}

void nombre(int a, int b, int c, int d, int e, int f, int g){
  digitalWrite(A, a);
  digitalWrite(B, b);
  digitalWrite(C, c);
  digitalWrite(D, d);
  digitalWrite(E, e);
  digitalWrite(F, f);
  digitalWrite(G, g);
}
