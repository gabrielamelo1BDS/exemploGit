//declaração de variáveis
float sal, percentual, aumento, novosal;

void setup() {
  //inicia a comunicação com o Serial Monitor
  Serial.begin(9660);
  delay(1000);
}

void loop() {
  Serial.println("Digite o salario: ");
  sal = aguardandoEntradaNumerica();
  Serial.println(sal);

  Serial.println("Digite o percentual: ");
  percentual = aguardandoEntradaNumerica();
  Serial.print(percentual);


  aumento = sal * percentual / 100;
  Serial.print("Aumento: ");
  Serial.println(aumento);
  novosal = sal + aumento;
  Serial.print("novosal: ");
  Serial.println(novosal);
}
//Criando uma função chamada
float aguardandoEntradaNumerica() {
  while (!Serial.available()) {
    //Aguarda até que um valor seja digitado
  }

  //verifica se a entrada é numérica ou ponto
  while (!isdigit(Serial.peek()) && Serial.peek() != '.') {
    //descarta a entrada não numérica
    Serial.read();
    while (Serial.available() == 0) {
      //aguarda a nova entrada do usuário
    }
  }

  //Retornar o valor digitado do Serial em tipo float
  return Serial.parseFloat();
}