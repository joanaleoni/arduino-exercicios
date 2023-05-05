int tempo = 0;

void setup()
{
  // Porta 13 (LED_BUILTIN) em modo de saída (escrita)
  pinMode(LED_BUILTIN, OUTPUT);
  tempo = 1000;
}

void loop()
{
  delay(tempo); // Aguarda 1000 milésimos de segundo
  digitalWrite(LED_BUILTIN, LOW); //Desliga o LED
  delay(tempo); // Aguarda 1000 milésimos de segundo
  digitalWrite(LED_BUILTIN, HIGH); //Liga o LED
}
