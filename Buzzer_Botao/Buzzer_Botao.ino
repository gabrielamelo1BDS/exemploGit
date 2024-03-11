//constante para o pino Buzzer
#define pinoBuzzer 2

//constante do led
#define pinoLedVermelho 3
#define pinoLedVerde 5

//constante do botão
#define pinoBotao 4

void setup() {
  Serial.begin(9600);

  //modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoBotao, INPUT);
  pinMode(pinoLedVerde, OUTPUT);

  delay(1000);
}
void loop() {
  if (digitalRead(pinoBotao) == 1) {
    tone(pinoBuzzer, 523);  //nota musical dó
    digitalWrite(pinoLedVermelho, HIGH);
    digitalWrite(pinoLedVerde, HIGH);
  } 

  else if (digitalRead(pinoBotao) == 0) {
    noTone(pinoBuzzer);                  //desliga a buzzer
    digitalWrite(pinoLedVermelho, LOW);  //apaga o led
    digitalWrite(pinoLedVerde, LOW);
  }
}
