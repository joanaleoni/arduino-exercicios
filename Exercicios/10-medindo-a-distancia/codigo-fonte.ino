// Distância do sensor
int distancia = 0;

// Função de leitura do sensor
long readUltrasonicDistance(int triggerPin, int echoPin)
{
  // Porta triggerPin em modo de saída
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  // Porta echoPin em modo de entrada
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // Leitura e cálculo da distância do objeto
  distancia = 0.01723 * readUltrasonicDistance(4, 5);
  // Saída da variável no monitor serial
  Serial.println(distancia);
  delay(10);
}
