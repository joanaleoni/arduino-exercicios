int valorLido = 0;

void setup()
{
  // Porta analógica 0 em modo de entrada
  pinMode(A0, INPUT); 
  Serial.begin(9600);
}

void loop()
{
  // Leitura da porta analógica A0
  valorLido = analogRead(A0);

  // Liga o LED
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(valorLido); 
  
  // Desliga o LED
  digitalWrite(LED_BUILTIN, LOW); 
  delay(valorLido); 
}
