//definição das constantes: pinos e entradas
#define pinoBuzzer 2

//leds
#define pinoDo 3
#define pinoRe 4
#define pinoMi 5
#define pinoFa 6
#define pinoSol 7
#define pinoLa 8
#define pinoSi 9
#define pinoDo2 10

byte doh, re, mi, fa, sol, la, si, doh2 = 0;

void setup() {
  pinMode(pinoBuzzer, OUTPUT);

  pinMode(pinoDo, INPUT);
  pinMode(pinoRe, INPUT);
  pinMode(pinoMi, INPUT);
  pinMode(pinoFa, INPUT);
  pinMode(pinoSol, INPUT);
  pinMode(pinoLa, INPUT);
  pinMode(pinoSi, INPUT);
  pinMode(pinoDo2, INPUT);

  Serial.begin(9600);
  delay(1000);
}

void loop() {
  //leitura dos botões armazenada nas variáveis de controle
  doh = digitalRead(pinoDo);
  re = digitalRead(pinoRe);
  mi = digitalRead(pinoMi);
  fa = digitalRead(pinoFa);
  sol = digitalRead(pinoSol);
  la = digitalRead(pinoLa);
  si = digitalRead(pinoSi);
  doh2 = digitalRead(pinoDo2);

  //verificando qual nota foi acionada
  if (doh == 1) {
    //ativa a nota do
    tone(pinoBuzzer, 523);
  } 
  else if (re == 1) {
    tone(pinoBuzzer, 587);
  }
  else if (mi == 1){
    tone(pinoBuzzer, 659);
  }
  else if (fa == 1){
    tone(pinoBuzzer, 349);
  }
  else if (sol == 1){
    tone(pinoBuzzer, 415);
  }
  else if (la == 1){
    tone(pinoBuzzer, 440);
  }
  else if (si == 1){
    tone(pinoBuzzer, 494);
  }
  else if (doh2 == 1){
    tone(pinoBuzzer, 554);
  }


  else {
    //deliga a Buzzer
    noTone(pinoBuzzer);
  }
  delay(75); //tempo de execução da nota musical
}
