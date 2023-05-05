int i = 0;

void setup()
{
  // Porta 11 em modo de saída (escrita)
  pinMode(11, OUTPUT);
}

void loop()
{
  // Percorre de 0 até 255 com passo 5
  for (i = 0; i <= 255; i += 5) {
    // Escreve i na porta 11
    analogWrite(11, i);
    // Aguarda 50 milésimos de segundo
    delay(50);
  }
}
