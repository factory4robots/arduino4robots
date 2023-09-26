int M1=4;
int M2=5;
int M3=6;
int M4=7;

int V1=3;
int V2=11;

int trigger = 9;
int echo = 8;
long tiempo;
int distancia;

void setup() {
pinMode(M1,OUTPUT);
pinMode(M2,OUTPUT);
pinMode(M3,OUTPUT);
pinMode(M4,OUTPUT);

pinMode(V1,OUTPUT);
pinMode(V2,OUTPUT);

pinMode(trigger,OUTPUT);
pinMode(echo,INPUT);
digitalWrite(trigger,LOW);

Serial.begin(9600);
}



void loop() {
digitalWrite(trigger,LOW);
delayMicroseconds(5);
digitalWrite(trigger,HIGH);
delayMicroseconds(10);

digitalWrite(trigger,LOW);
tiempo = pulseIn(echo,HIGH);
distancia = (tiempo*0.034/2);

if (distancia <= 15){
  paro();
  reversa();
  girar_derecha();
}
else{
  avanzar();
}


}

void avanzar(){
  digitalWrite (M1,HIGH);
  digitalWrite (M2,LOW);
  analogWrite (V1,180);

  digitalWrite (M3,HIGH);
  digitalWrite (M4,LOW);
  analogWrite (V2,180);
  //delay(200); 
}  

void paro(){
  digitalWrite (M1,LOW);
  digitalWrite (M2,LOW);
  digitalWrite (M3,LOW);
  digitalWrite (M4,LOW);
  delay(200); 
}

void girar_derecha(){
  digitalWrite(M1,LOW);
  digitalWrite(M2,HIGH);
  analogWrite(V1,120); 

  digitalWrite(M3,HIGH);
  digitalWrite(M4,LOW);
  analogWrite(V2,120);
  delay(200);
}

void girar_izquierda(){
  digitalWrite(M1,HIGH);
  digitalWrite(M2,LOW);
  analogWrite(V1,120); 

  digitalWrite(M3,LOW);
  digitalWrite(M4,HIGH);
  analogWrite(V2,120);
  delay(200);
}

void reversa(){
  digitalWrite (M1,LOW);
  digitalWrite (M2,HIGH);
  analogWrite (V1,180);

  digitalWrite (M3,LOW);
  digitalWrite (M4,HIGH);
  analogWrite (V2,180);
  delay(300); 
}  



