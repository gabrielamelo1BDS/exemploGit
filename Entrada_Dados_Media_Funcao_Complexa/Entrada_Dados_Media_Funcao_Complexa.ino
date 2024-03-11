//declaração das variáveis/números Reais
float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  // Inicia a comunicação com o Serial Monitor
  Serial.begin(9600);
  delay(1000);  //Espera estratégica
}

void loop() {

  Serial.println("Digite a nota 1: ");
  //Lê o  valor do serial e guarda na variável nota1
  nota1 = aguardandoEntradaNumerica();
  Serial.print(nota1);

  Serial.print("Digite a nota 2: ");
  nota2 = aguardandoEntradaNumerica();
  Serial.println(nota2);

  Serial.print("Digite a nota 3: ");
  nota3 = aguardandoEntradaNumerica();
  Serial.println(nota3);

  //Atribuição dos pesos
  Serial.print("Digite o peso 1: ");
  peso1 = aguardandoEntradaNumerica();
  Serial.println(peso1);

  Serial.print("Digite o peso 2: ");
  peso2 = aguardandoEntradaNumerica();
  Serial.println(peso2);

  Serial.print("Digite o peso 3: ");
  peso3 = aguardandoEntradaNumerica();
  Serial.println(peso3);

  //Cálculo de média ponderada
  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  //Exibe o valor da média ponderada
  Serial.print("Media Ponderada: ");
  Serial.println(media, 1);

  delay(1000);
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