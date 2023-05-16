// Distância do sensor
int distancia = 0;

// Função de leitura do sensor
long readUltrasonicDistance(int triggerPin, int echoPin)
{
  // Porta triggerPin em modo de saída 
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  
  // Envia o pulso de trigger
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  // Porta echoPin em modo de entrada 
  pinMode(echoPin, INPUT);
  
  // Duração do pulso de eco
  long duration = pulseIn(echoPin, HIGH);
  return duration / 58;  
}

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  // Leitura e cálculo da distância do objeto
  distancia = 0.01723 * readUltrasonicDistance(4, 5);
  
  if (distancia < 10) {
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  } else {
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }
  
  delay(10);
}
