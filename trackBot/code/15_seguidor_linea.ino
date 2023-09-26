int M1=4;
int M2=5;
int M3=6;
int M4=7;

int V1=3;
int V2=11;

int sensorIz=13;
int sensorDe=2;

int SENSORI;
int SENSORD;

void setup() {
pinMode(M1,OUTPUT);
pinMode(M2,OUTPUT);
pinMode(M3,OUTPUT);
pinMode(M4,OUTPUT);

pinMode(V1,OUTPUT);
pinMode(V2,OUTPUT);
Serial.begin(9600);
}

void loop() {
SENSORD = digitalRead(sensorDe);
SENSORI = digitalRead(sensorIz);



if(SENSORD == 0 && SENSORI == 0){
  paro();
}

if(SENSORD == 0 && SENSORI == 1){
  girar_derecha();
}

if(SENSORD == 1 && SENSORI == 0){
  girar_izquierda();
}

if (SENSORD == 1 && SENSORI == 1){
  avanzar();
}


}

void avanzar(){
  digitalWrite (M1,HIGH);
  digitalWrite (M2,LOW);
  analogWrite (V1,80);

  digitalWrite (M3,HIGH);
  digitalWrite (M4,LOW);
  analogWrite (V2,80);
}  

void paro(){
  digitalWrite (M1,LOW);
  digitalWrite (M2,LOW);
  digitalWrite (M3,LOW);
  digitalWrite (M4,LOW);
}

void girar_izquierda(){
  digitalWrite(M1,LOW);
  digitalWrite(M2,HIGH);
  analogWrite(V1,90); 

  digitalWrite(M3,HIGH);
  digitalWrite(M4,LOW);
  analogWrite(V2,90);
}

void girar_derecha(){
  digitalWrite(M1,HIGH);
  digitalWrite(M2,LOW);
  analogWrite(V1,90); 

  digitalWrite(M3,LOW);
  digitalWrite(M4,HIGH);
  analogWrite(V2,90);
}
