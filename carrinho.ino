#include <Servo.h>

Servo motorDireita;

Servo motorEsquerda;

int pwmPin = 9;

int direcaoPin = 8;

void setup() {

  motorDireita.attach(6);

  motorEsquerda.attach(7);

  pinMode(pwmPin, OUTPUT);

  pinMode(direcaoPin, OUTPUT);

}

void loop() {

  // controlar a direção do carrinho

  digitalWrite(direcaoPin, HIGH);

  // controlar a velocidade dos motores

  analogWrite(pwmPin, 150);

  // girar os motores na mesma direção

  motorDireita.write(90);

  motorEsquerda.write(90);

  delay(1000);

  

  // mudar a direção do carrinho

  digitalWrite(direcaoPin, LOW);

  delay(1000);

}

