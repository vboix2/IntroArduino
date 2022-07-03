int TRIG = 10;
int ECO = 9;


void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);

  // Inicialitzem el monitor sèrie
  Serial.begin(9600);
}

void loop() {

  // Generem un pols de 1 ms a la sortida Trigger
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);

  // Mesurem el pols de retorn a l'entrada Eco
  int durada = pulseIn(ECO, HIGH);

  // Calculem la distància en centímetres
  int distancia = durada / 58.2;

  // Mostrem la distància per pantalla
  Serial.println(distancia);
  delay(200);
}
