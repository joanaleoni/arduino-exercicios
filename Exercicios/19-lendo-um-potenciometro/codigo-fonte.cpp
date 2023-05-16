void setup()
{
  // Porta Analógica 0 em modo de entrada
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // Leitura da porta analógica A0
  Serial.println(analogRead(A0));
  delay(250);
}
