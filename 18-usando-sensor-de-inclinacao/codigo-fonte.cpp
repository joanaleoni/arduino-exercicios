// Biblioteca para manipular o sensor de inclinação
#include <SW200D.h> 

SW200D sensor; 
int ledPin = 13; 

void setup() 
{
  pinMode(ledPin, OUTPUT);  
  //Inicializa o sensor de inclinação
  sensor.begin(); 
}

void loop() 
{
  if (sensor.getAngle() > 45) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW); 
  }
  delay(10); 
}
