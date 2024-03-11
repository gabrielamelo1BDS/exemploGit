//declaração de variáveis
  float sal, novosal;

void setup() {
  //inicia a comunicação com o Serial Monitor 
  Serial.begin(9660);
  delay(1000);
}

void loop() {
  Serial.println("Digite o salario: ");
  sal = aguardandoEntradaNumerica();
  Serial.println(sal);
  novosal = sal + sal * (25 / 100);
  Serial.print("Novo salario: ");
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
    while(Serial.available() == 0){
      //aguarda a nova entrada do usuário
    }
  }

  //Retornar o valor digitado do Serial em tipo float
  return Serial.parseFloat();
}