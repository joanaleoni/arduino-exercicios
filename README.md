# Arduino exercícios
> Prática com Arduino

01. [Manipulando um LED](https://github.com/joanaleoni/arduino-exercicios/tree/main/01-manipulando-um-led)  
Neste experimento você irá fazer com que o LED incorporado e um LED pisque utilizando o pino digital 13 (pino digital incorporado LED_BUILTIN = 13).
  
02. [Manipulando 2 LEDs em sequência](https://github.com/joanaleoni/arduino-exercicios/tree/main/02-manipulando-2-leds-em-sequencia)  
Neste experimento você irá fazer com que o LED incorporado e dois LEDs pisquem juntos utilizando o pino digital 13 (pino digital incorporado LED_BUILTIN = 13). |
  
03. [Manipulando 2 LEDs em paralelo](https://github.com/joanaleoni/arduino-exercicios/tree/main/03-manipulando-2-leds-em-paralelo)  
Neste experimento você irá fazer com que o LED incorporado e dois LEDs pisquem alternadamente utilizando o pino digital 13 (pino digital incorporado LED_BUILTIN = 13) e o pino digital 12. 
  
04. [Semáforo de 2 luzes](https://github.com/joanaleoni/arduino-exercicios/tree/main/04-semaforo-de-2-luzes)  
Neste experimento você irá fazer com que o LED incorporado e dois LEDs acendam e apaguem em sequência utilizando o pino digital 13 (pino digital incorporado LED_BUILTIN = 13) e o pino digital 12. 
  
05. [Semáforo de 3 luzes](https://github.com/joanaleoni/arduino-exercicios/tree/main/05-semaforo-de-3-luzes)  
Neste experimento você irá fazer com que o LED incorporado e três LEDs acendam e apaguem em sequência utilizando o pino digital 13 (pino digital incorporado LED_BUILTIN = 13), pino digital 12 e pino digital 11.

06. [Aumentando o brilho do LED](https://github.com/joanaleoni/arduino-exercicios/tree/main/06-aumentando-brilho-do-led)  
Neste experimento você irá fazer com que o LED conectado na porta digital 11 (PMW) aumente gradativamente o brilho no intervalo de 0 a 255 em passo 5. 
  
07. [LED RGB](https://github.com/joanaleoni/arduino-exercicios/tree/main/07-led-rgb)  
Neste experimento você irá fazer com que um LED RGB controlado pelas portas digitais 9, 10 e 11 (PMW) acendam de forma intermitente. O LED RGB possui 3 LEDs em seu interior, onde o pino 9 controla o LED vermelho, 10 controla o LED azul e o 11 controla o verde. O brilho de cada LED é controlado atribuindo um valor entre 0 e 255. 
  
08. [Medindo a luminosidade](https://github.com/joanaleoni/arduino-exercicios/tree/main/08-medindo-a-luminosidade)  
Neste experimento será realizado a leitura de um fotoresistor e armazenado em uma variável, depois esta variável será impressa no monitor serial. O fotoresistor será conectado à porta analógica 0. 
  
09. [LED sensível à luminosidade](https://github.com/joanaleoni/arduino-exercicios/tree/main/09-led-sensivel-a-luminosidade)
Neste experimento você irá fazer com que um LED controlado pela porta 13 digital seja ligado quando a luminosidade do ambiente baixe para menos de 750 unidades do fotoresistor, caso contrário o LED deve ser desligado. O fotoresistor será conectado à porta analógica 0. 
  
10. [Medindo a distância](https://github.com/joanaleoni/arduino-exercicios/tree/main/10-medindo-a-distancia)  
Neste experimento será realizado a leitura de um sensor ultrassônico e armazenado em uma variável, depois esta variável será impressa no monitor serial. O sensor ultrassônico será conectado à porta digital 4 para o acionador (trigger) e a porta digital 5 para echo. Sensores ultrassônicos usam o mesmo princípio que os morcegos (mamíferos voadores) usam para detectar obstáculos - enviando sinais ultrassônicos e analisando a reflexão/eco.
  
11. [Medindo a distância com 2 LEDs](https://github.com/joanaleoni/arduino-exercicios/tree/main/11-medindo-a-distancia-com-2-leds)  
Neste experimento será realizado a leitura de um sensor ultrassônico e armazenado em uma variável, depois esta variável utilizada para acender o LED vermelho quando a distância for menor que 10 cms, caso contrário acender a o LED verde. O sensor ultrassônico será conectado à porta digital 4 para o acionador (trigger) e a porta digital 5 para echo. Sensores ultrassônicos usam o mesmo princípio que os morcegos (mamíferos voadores) usam para detectar obstáculos - enviando sinais ultrassônicos e analisando a reflexão/eco. O LED vermelho conectado a porta digital 12 e o LED verde na porta digital 13.
   
12. [Usando um botão](https://github.com/joanaleoni/arduino-exercicios/tree/main/12-usando-um-botao)  
Neste experimento um LED será acesso ao se pressionar um botão. Atenção, nenhuma porta será utilizada.
  
13. [Liga e desliga um LED com um botão](https://github.com/joanaleoni/arduino-exercicios/tree/main/13-liga-e-desliga-um-led-com-um-botao)  
Neste experimento um LED na porta 13 será controlado pelo botão na porta digital 12. Ao pressionar o botão uma vez este deve ligar o LED. Ao pressionar novamente o botão este deverá desligar o LED e assim sucessivamente. 
  
14. [Detector de movimento e LED](https://github.com/joanaleoni/arduino-exercicios/tree/main/14-detector-de-movimento-e-led)  
Neste experimento um LED na porta 13 será controlado pelo botão na porta digital 12. Ao pressionar o botão uma vez este deve ligar o LED. Ao pressionar novamente o botão este deverá desligar o LED e assim sucessivamente. 
  
15. [Controlando um micro servo](https://github.com/joanaleoni/arduino-exercicios/tree/main/15-controlando-um-micro-servo)  
Neste experimento iremos controlar um micro servo na porta PWM 11. Um micro servo é um motor que possibilita o controle de sua posição utilizado em aeromodelismo ou em projetos mecatrônicos. O servo mais comum é o Micro Servo TowerPro 9g SG90. Iremos mover o servo de 0 a 90 graus aguardando 15 milésimos de segundo, depois de 90 a 180 graus aguardando de 30 milésimos, aguarda um segundo (1000 milésimos), então volta movendo de 180 a 90 graus aguardando 30 milésimos e por fim de 90 a 0 graus aguardando 15 milésimos de segundo.
