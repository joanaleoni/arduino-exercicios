int tempo = 0;

void setup()
{
  // Porta 13 (LED_BUILTIN) em modo de saída (escrita)
  pinMode(LED_BUILTIN, OUTPUT);// LED VERMELHO
  // Porta 12 em modo de saída (escrita)
  pinMode(12, OUTPUT); // LED VERDE
  tempo = 1000;
}

void loop()
{
  delay(tempo); // Aguarda 1000 milésimos de segundo
  digitalWrite(LED_BUILTIN, LOW); // Desliga o LED VERMELHO
  delay(tempo); //Aguarda 1000 milésimos de segundo
  digitalWrite(12, HIGH); // Liga o LED VERDE
  delay(tempo); // Aguarda 1000 milésimos de segundo
  digitalWrite(LED_BUILTIN, HIGH); // Liga o LED VERMELHO
  delay(tempo); // Aguarda 1000 milésimos de segundo
  digitalWrite(12, LOW); // Desliga o LED VERDE
}
