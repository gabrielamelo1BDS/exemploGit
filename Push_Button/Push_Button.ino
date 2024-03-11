//Declaração da constante que armazena o pino do Push Button
#define pinoButton 8

//Declaração da variável de estado do botão
bool status = false;

void setup() {
  //Definir a modalidade do pino
  pinMode(pinoButton, INPUT);

  Serial.begin(9600);

  delay(1000);
}

void loop() {
  Serial.println(digitalRead(pinoButton));
  //Lendo o pino digital através da constante

  if(digitalRead(pinoButton) == 1 && status == false){
    Serial.print("Botão apertado ON");
    status = true;
  }
  else if(digitalRead(pinoButton) == 1 && status == true){
    Serial.println("Botão apertado OFF");
    status = false;
  }


  delay(1000);
}
