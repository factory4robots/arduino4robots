
#include<Servo.h>
int motor1A=6;
int motor1B=7;
int velocidad1=3;

int motor2A=4;
int motor2B=5;
int velocidad2=11;

Servo montacargas;

void setup() {
  pinMode(motor1A,OUTPUT);
  pinMode(motor1B,OUTPUT);
  pinMode(velocidad1,OUTPUT);
  pinMode(motor2A,OUTPUT);
  pinMode(motor2B,OUTPUT);
  pinMode(velocidad2,OUTPUT);
  montacargas.attach(10);
 

}

void loop() {
/*  
bajar();
frente();
paro();
subir();
reversa();
giro_90();
paro();
delay(3000);

*/
frente();
paro();
reversa();
paro();
}


void frente(){

  digitalWrite(motor1A,HIGH);
  digitalWrite(motor1B,LOW);
  analogWrite(velocidad1,180);
  digitalWrite(motor2A,HIGH);
  digitalWrite(motor2B,LOW);
  analogWrite(velocidad2,180);
  delay(500);

}


void reversa(){

  digitalWrite(motor1A,LOW);
  digitalWrite(motor1B,HIGH);
  analogWrite(velocidad1,180);
  digitalWrite(motor2A,LOW);
  digitalWrite(motor2B,HIGH);
  analogWrite(velocidad2,180);
  delay(500);

}

void paro(){

  digitalWrite(motor1A,LOW);
  digitalWrite(motor1B,LOW);
  digitalWrite(motor2A,LOW);
  digitalWrite(motor2B,LOW);
  delay(500);

}

void giro_90(){

  digitalWrite(motor1A,HIGH);
  digitalWrite(motor1B,LOW);
  analogWrite(velocidad1,150);
  digitalWrite(motor2A,LOW);
  digitalWrite(motor2B,HIGH);
  analogWrite(velocidad2,150);
  delay(500);

}

void bajar(){

montacargas.write(180);
delay(1500);

}

void subir(){

montacargas.write(100);
delay(1500);

}
