int motor1A=6;
int motor1B=7;
int velocidad1=3;

int motor2A=4;
int motor2B=5;
int velocidad2=11;

int sensor_derecha;
int sensor_izquierda;
int s_d=8;
int s_i=9;

void setup() {
  pinMode(motor1A,OUTPUT);
  pinMode(motor1B,OUTPUT);
  pinMode(velocidad1,OUTPUT);
  pinMode(motor2A,OUTPUT);
  pinMode(motor2B,OUTPUT);
  pinMode(velocidad2,OUTPUT);

  pinMode(s_d,INPUT);
  pinMode(s_i,INPUT);
}

void loop() {
  
sensor_derecha = digitalRead(s_d);
sensor_izquierda = digitalRead(s_i);

if (sensor_derecha <=0 && sensor_izquierda <=0){
    frente();

}

if (sensor_derecha <=0 && sensor_izquierda == 1){
  giro_derecha();
}

if (sensor_derecha == 1 && sensor_izquierda <= 0){
  giro_izquierda();
}
if (sensor_derecha == 1 && sensor_izquierda == 1){

  paro();
}


  
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

void giro_derecha(){

  digitalWrite(motor1A,HIGH);
  digitalWrite(motor1B,LOW);
  analogWrite(velocidad1,150);
  digitalWrite(motor2A,LOW);
  digitalWrite(motor2B,HIGH);
  analogWrite(velocidad2,150);
  delay(500);

}



void giro_izquierda(){

  digitalWrite(motor1A,LOW);
  digitalWrite(motor1B,HIGH);
  analogWrite(velocidad1,150);
  digitalWrite(motor2A,HIGH);
  digitalWrite(motor2B,LOW);
  analogWrite(velocidad2,150);
  delay(500);

}



