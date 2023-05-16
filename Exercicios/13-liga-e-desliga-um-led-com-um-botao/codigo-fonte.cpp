// Armazena o estado do botão lido
int estadoBotao = 0;

// Guarda o estado
int guardaEstado = 0;

void setup()
{
  // Porta 12 (Botão) em modo de entrada
  pinMode(12, INPUT);
  // Porta 13 (LED_BUILTIN) em modo de saída
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{
  // Leitura do botão na porta 12
  estadoBotao = digitalRead(12);
  // Se estão do botão igual a HIGH acende o LED na porta 13
  if (estadoBotao == HIGH) {
    // Se o estado guardado é HIGH inverte o valor
    if (guardaEstado == HIGH) { 
      guardaEstado = LOW;
    } else {
      guardaEstado = HIGH;
    }
  }

  // Liga ou desliga o LED
  if (guardaEstado == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(250);
}
