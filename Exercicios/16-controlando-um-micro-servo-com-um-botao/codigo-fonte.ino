// Biblioteca para manipular o servo
#include <Servo.h>

//Armazena o estado do botão lido
int estadoBotao = 0;

//Guarda o estado
int guardaEstado = 0;

// Variável do micro servo
Servo servo_11;

void setup()
{
  // Porta 12 (botão) em modo de entrada
  pinMode(12, INPUT);
  // Conecta o micro servo na porta 11
  servo_11.attach(11, 500, 2500);
}

void loop()
{
  estadoBotao = digitalRead(12);

  if (estadoBotao == HIGH) {
    if (guardaEstado == HIGH) {
      guardaEstado = LOW;
    } else {
      guardaEstado = HIGH;
    }
  }
  
  if (guardaEstado == HIGH) {
    servo_11.write(180);
  } else {
    servo_11.write(0);
  }
  delay(25); 
}
