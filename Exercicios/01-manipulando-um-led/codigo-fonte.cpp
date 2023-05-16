void setup()
{
  // Porta 13 (LED_BUILTIN) em modo de saída (escrita)
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  delay(1000); // Aguarda 1000 milésimos de segundo
  digitalWrite(LED_BUILTIN, LOW); // Desliga o LED
  delay(1000); // Aguarda 1000 milésimos de segundo
  digitalWrite(LED_BUILTIN, HIGH); // Liga o LED
}
