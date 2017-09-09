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
const int sensor1 = 11;
const int sensor2 = 12;
const int sensor3 = 0;

long duracion, distancia;

void setup() {
  pinMode (enableA, OUTPUT);
  pinMode (pinA1, OUTPUT);
  pinMode (pinA2, OUTPUT);
  pinMode (enableB, OUTPUT);
  pinMode (pinB1, OUTPUT);
  pinMode (pinB2, OUTPUT);
  pinMode (led, OUTPUT);
  pinMode(Pecho, INPUT);
  pinMode(Ptrig, OUTPUT);
  pinMode(13, 1);
  pinMode(sensor1 , INPUT);
  pinMode(sensor2 , INPUT);
  pinMode(sensor3 , INPUT);
}

void loop() {
  digitalWrite (pinA1, HIGH);
  digitalWrite (pinA2, LOW);
  digitalWrite (pinB1, HIGH);
  digitalWrite (pinB2, LOW);
  //  digitalWrite(Ptrig, LOW);
  //  delayMicroseconds(2);
  //  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  //  delayMicroseconds(10);
  //  digitalWrite(Ptrig, LOW);
  //
  //  duracion = pulseIn(Pecho, HIGH);
  //  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros

  if (digitalRead(sensor1) && digitalRead(sensor2) && digitalRead(sensor3)) {
    digitalWrite (enableA, HIGH);
    digitalWrite (enableB, HIGH);
  }

  if (digitalRead(sensor1) && !digitalRead(sensor2) && digitalRead(sensor3)) {
    digitalWrite (enableA, HIGH);
    digitalWrite (enableB, HIGH);
  }

  if (digitalRead(sensor1) && !digitalRead(sensor3)) {
    digitalWrite (enableA, LOW);
    digitalWrite (enableB, HIGH);
  }

  if (!digitalRead(sensor1) && digitalRead(sensor3)) {
    digitalWrite (enableA, HIGH);
    digitalWrite (enableB, LOW);
  }
}
