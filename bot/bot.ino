#define enableA  10
#define pinA1 2
#define pinA2 3
//Motor B
#define enableB 9
#define pinB1 4
#define pinB2 5
#define led 13
#define Pecho 6
#define Ptrig 7
long duracion, distancia;   

void setup() {
  pinMode (enableA, OUTPUT);
  pinMode (pinA1, OUTPUT);
  pinMode (pinA2, OUTPUT);
  pinMode (enableB, OUTPUT);
  pinMode (pinB1, OUTPUT);
  pinMode (pinB2, OUTPUT);
  pinMode (led, OUTPUT);
  pinMode(Pecho, INPUT);     // define el pin 6 como entrada (echo)
  pinMode(Ptrig, OUTPUT);    // define el pin 7 como salida  (triger)
  pinMode(13, 1);            // Define el pin 13 como salida
}

void loop() {
  digitalWrite (enableA, HIGH);
  digitalWrite (enableB, HIGH);
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
  
  if (distancia <= 1000) {
    
  }
}
