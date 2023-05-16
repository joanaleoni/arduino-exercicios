// Luminosidade do fotoresistor
int luminosidade = 0;

void setup()
{
  // Porta 0 (analógica) em modo de entrada para o fotoresistor
  pinMode(A0, INPUT);
}

void loop()
{
  // Leitura do fotoresistor
  luminosidade = analogRead(A0);
  // Saída da variável no monitor serial
  Serial.println(luminosidade);
  delay(10);
}
