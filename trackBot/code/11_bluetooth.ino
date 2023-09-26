#inclide <Servo.h>
int motor1A=6;
int motor1B=7;
int velocidad1=3;

int motor2A=4;
int motor2B=5;
int velocidad2=11;
char comando;
Servo s1;

void setup() {
  pinMode(motor1A,OUTPUT);
  pinMode(motor1B,OUTPUT);
  pinMode(velocidad1,OUTPUT);
  pinMode(motor2A,OUTPUT);
  pinMode(motor2B,OUTPUT);
  pinMode(velocidad2,OUTPUT);
  s1.attach(10);
  Serial.begin(9600);

}

void loop() {
  
  if (Serial.available()){
    comando = Serial.read();
  }
  if (comando == 'F'){
    frente();
  }
  if (comando == 'B'){
    reversa();
  }
  if (comando == 'R'){
    giro_derecha();
  }
  if (comando == 'L'){
    giro_izquierda();
  }
  if (comando == 'S'){
    paro();
  }

  if (comando == 'U'){
    subir();
  }
  if (comando == 'D'){
    bajar();    
  }

}




void frente(){

  digitalWrite(motor1A,HIGH);
  digitalWrite(motor1B,LOW);
  analogWrite(velocidad1,140);
  digitalWrite(motor2A,HIGH);
  digitalWrite(motor2B,LOW);
  analogWrite(velocidad2,140);
  delay(500);

}


void reversa(){

  digitalWrite(motor1A,LOW);
  digitalWrite(motor1B,HIGH);
  analogWrite(velocidad1,140);
  digitalWrite(motor2A,LOW);
  digitalWrite(motor2B,HIGH);
  analogWrite(velocidad2,140);
  delay(500);

}

void paro(){

  digitalWrite(motor1A,LOW);
  digitalWrite(motor1B,LOW);
  digitalWrite(motor2A,LOW);
  digitalWrite(motor2B,LOW);
  delay(500);

}

void giro_derecha(){

  digitalWrite(motor1A,HIGH);
  digitalWrite(motor1B,LOW);
  analogWrite(velocidad1,140);
  digitalWrite(motor2A,LOW);
  digitalWrite(motor2B,HIGH);
  analogWrite(velocidad2,140);
  delay(500);

}



void giro_izquierda(){

  digitalWrite(motor1A,LOW);
  digitalWrite(motor1B,HIGH);
  analogWrite(velocidad1,140);
  digitalWrite(motor2A,HIGH);
  digitalWrite(motor2B,LOW);
  analogWrite(velocidad2,140);
  delay(500);

}

void subir(){

s1.write(120);
delay(500)

}

void bajar(){

s1.write(180);
delay(500);

}



