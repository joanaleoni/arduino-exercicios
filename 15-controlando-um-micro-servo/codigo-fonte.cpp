// Biblioteca para manipular o servo
#include <Servo.h>

//Variável da posição do servo
int i = 0;

//Variável do micro servo
Servo servo_11;

void setup()
{
  // Conecta o micro servo na porta 11
  servo_11.attach(11, 500, 2500);
}

void loop()
{
  // Avança de 0 graus até 90 graus
  for (i = 0; i <= 90; i += 1) {
    servo_11.write(i);
    delay(15); 
  }
  
  // Avança de 90 graus até 180 graus
  for (i = 0; i <= 90; i += 1) {
    servo_11.write(i);
    delay(30); 
  }
  delay(1000); 
  
  // Avança de 180 graus até 90 graus
  for (i = 180; i >= 90; i -= 1) {
    servo_11.write(i);
    delay(30);
  }

  // Avança de 90 graus até 0 graus
  for (i = 180; i >= 0; i -= 1) {
    servo_11.write(i);
    delay(15); 
  }
}
