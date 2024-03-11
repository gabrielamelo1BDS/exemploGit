//Declaração das variáveis que representam os pinos dos leds
int ledAmarelo = 8;
int ledVermelho = 9;
int ledVerde = 10;
int ledAmarelo2 = 3;
int ledVermelho2 = 4;
in ledVerde2 = 2;

void setup() {
  //Definindo os tipos dos pinos
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo2, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
  pinMode(ledVerde2, OUTPUT);

  delay(1000);
}

void loop() {
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledVerde2, HIGH);
  delay(5000);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo2, HIGH);
  delay(1000);
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho2, HIGH);
  delay(5000);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
  delay(1000);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho2, LOW);
}
