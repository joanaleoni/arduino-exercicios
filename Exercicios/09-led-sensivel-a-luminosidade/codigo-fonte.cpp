// Luminosidade do fotoresistor
int luminosidade = 0;

void setup()
{
  // Porta 0 (analógica) em modo de entrada para o fotoresistor
  pinMode(A0, INPUT);
  // Porta 13 (LED_BUILTIN) em modo de saída
  pinMode(LED_BUILTIN, OUTPUT); // LED VERMELHO
}

void loop()
{
  // Leitura do fotoresistor
  luminosidade = analogRead(A0);
  // Avalia a variável
  if (luminosidade < 750) {
    digitalWrite(LED_BUILTIN, HIGH); // Liga o LED VERMELHO
  } else {
    digitalWrite(LED_BUILTIN, LOW); // Desliga o LED VERMELHO
  }
  delay(10);
}
