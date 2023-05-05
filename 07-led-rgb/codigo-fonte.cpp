void setup()
{
  //Porta 11 em modo de saída(escrita).
  pinMode(11, OUTPUT); // Vermelho
  //Porta 10 em modo de saída(escrita).
  pinMode(10, OUTPUT); // Azul
  //Porta 9 em modo de saída(escrita).
  pinMode(9, OUTPUT); // Verde
}

void loop()
{
  // Escreve 255 no pino digital 11
  digitalWrite(11, 255);
  // Aguarda 1000 milésimos de segundo
  delay(1000);
  //Escreve 0 no pino digital 11
  digitalWrite(11, 0);
  // Aguarda 1000 milésimos de segundo
  delay(1000);
  // Escreve 255 no pino digital 10
  digitalWrite(10, 255);
  // Aguarda 1000 milésimos de segundo
  delay(1000);
  //Escreve 0 no pino digital 10
  digitalWrite(10, 0);
  // Aguarda 1000 milésimos de segundo
  delay(1000);
  // Escreve 255 no pino digital 9
  digitalWrite(9, 255);
  // Aguarda 1000 milésimos de segundo
  delay(1000);
}
