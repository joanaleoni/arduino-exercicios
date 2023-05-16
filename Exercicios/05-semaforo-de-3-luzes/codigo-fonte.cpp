int tempo = 0;

void setup() 
{
  // Porta 13 (LED_BUILTIN) em modo de saída (escrita)
  pinMode(13, OUTPUT); //LED VERMELHO
  // Porta 12 em modo de saída (escrita)
  pinMode(12, OUTPUT); // LED AMARELO
  // Porta 11 em modo de saída (escrita)
  pinMode(11, OUTPUT); // LED VERDE
  tempo = 1000;
}

void loop()
{
  digitalWrite(13, HIGH); // Liga o LED VERMELHO
  delay(tempo); // Aguarda 1000 milésimos de segundo
  digitalWrite(13, LOW); // Apaga o LED VERMELHO
  digitalWrite(11, HIGH); // Liga o LED VERDE
  delay(tempo); // Aguarda 1000 milésimos de segundo
  digitalWrite(11, LOW); // Apaga o LED VERDE
  digitalWrite(12, HIGH); // Liga o LED AMARELO
  delay(tempo); // Aguarda 1000 milésimos de segundo
  digitalWrite(12, LOW); // Desliga o LED AMARELO
}
