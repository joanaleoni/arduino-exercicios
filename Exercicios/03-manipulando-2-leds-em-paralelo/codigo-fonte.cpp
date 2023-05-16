int tempo = 0;

void setup()
{
  // Porta 13 (LED_BUILTIN) em modo de saída 
  pinMode(LED_BUILTIN, OUTPUT);// LED VERMELHO
  // Porta 12 em modo de saída
  pinMode(12, OUTPUT); // LED VERDE
  tempo = 1000;
}

void loop()
{
  delay(tempo); // Aguarda 1000 milésimos de segundo
  digitalWrite(LED_BUILTIN, LOW); // Liga o LED VERMELHO
  delay(tempo); // Aguarda 1000 milésimos de segundo
  digitalWrite(LED_BUILTIN, HIGH); // Desliga o LED VERMELHO
  delay(tempo); // Aguarda 1000 milésimos de segundo
  digitalWrite(12, LOW); // Liga o LED VERDE
  delay(tempo); // Aguarda 1000 milésimos de segundo
  digitalWrite(12, HIGH); // Desliga o LED VERDE
}
