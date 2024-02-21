void setup() {
  // Configuração inicial so sistema 
 
  //Iniciando a comunicação com o Monitor Serial
  Serial.begin(9600);

}

void loop() {
  // Código que será executado repedidamente
  Serial.println("Hoje é o último dia de mês de Janeiro!!"); //Mostra a frase no monitor 
 
  delay(1000); //espera 1 segundo antes de seguir o loop

}
