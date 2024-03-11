// declaração de variáveis para números decimais
float sal_atual, novo_sal;

void setup() {
  // Configuração inicial so sistema 
  //Será executada apenas no início 

  sal_atual = 1200;

  //Iniciando a comunicação com o Monitor Serial
  Serial.begin(9600);

}

void loop() {
  // Código que será executado repedidamente
  Serial.println("Hoje é o último dia de mês de Janeiro!!"); //Mostra a frase no monitor 
 
  delay(1000); //espera 1 segundo antes de seguir o loop

}
