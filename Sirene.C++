int ledVermelho = 8;
int ledAzul = 9;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul, OUTPUT);
}

void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledVermelho, HIGH);
    delay(100);
    digitalWrite(ledVermelho, LOW);
    delay(100);
  }

  delay(150);
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledAzul, HIGH);
    delay(100);
    digitalWrite(ledAzul, LOW);
    delay(100);
  }

  delay(150);
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledAzul, HIGH);
  delay(200);

  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAzul, LOW);
  delay(200);
}
