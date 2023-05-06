// Armazena o estado do botão lido
int estadoBotao = 0;

void setup()
{
  // Porta 13 (LED_BUILTIN) em modo de saída
  pinMode(LED_BUILTIN, OUTPUT);
  // Porta 12 (botão) em modo de entrada
  pinMode(12, INPUT);
}

void loop() 
{
  // Leitura do botão na porta 12
  estadoBotao = digitalRead(12);

  // Liga ou desliga o LED
  if (estadoBotao == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(10);
}
