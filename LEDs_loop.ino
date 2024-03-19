#define SW1 A0
#define SW2 A1
#define SW3 A2
#define SW4 2
#define SW5 6
#define SW6 4

#define D1 A3
#define D2 7
#define D3 8
#define D4 13
#define D5 3
#define D6 11
#define D7 12
#define D8 10

bool isLooping = false;
int time;

// 0 é ligado e 1 e desligado

void setup() {
  // put your setup code here, to run once:
pinMode(D1,OUTPUT);
pinMode(D2,OUTPUT);
pinMode(D3,OUTPUT);
pinMode(D4,OUTPUT);
pinMode(D5,OUTPUT);
pinMode(D6,OUTPUT);
pinMode(D7,OUTPUT);
pinMode(D8,OUTPUT);
digitalWrite(D1,HIGH);
digitalWrite(D2,HIGH);
digitalWrite(D3,HIGH);
digitalWrite(D4,HIGH);
digitalWrite(D5,HIGH);
digitalWrite(D6,HIGH);
digitalWrite(D7,HIGH);
digitalWrite(D8,HIGH);
pinMode(SW1,INPUT);
pinMode(SW2,INPUT);
pinMode(SW3,INPUT);
pinMode(SW4,INPUT);
pinMode(SW5,INPUT);
pinMode(SW6,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(SW1) == LOW) {
  isLooping = true;
  time = 500;
}

if (digitalRead(SW2) == LOW) {
  isLooping = true;
  time = 1000;
}

while (isLooping) {
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  delay(time);
  if (digitalRead(SW6) == LOW) {
  isLooping = false;
  break; }
  digitalWrite(D1,HIGH);
  digitalWrite(D2,HIGH);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  delay(time);
  if (digitalRead(SW6) == LOW) {
  isLooping = false;
  break; }
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  delay(time);
  if (digitalRead(SW6) == LOW) {
  isLooping = false;
  break; }
  digitalWrite(D5,HIGH);
  digitalWrite(D6,HIGH);
  digitalWrite(D7,LOW);
  digitalWrite(D8,LOW);
  delay(time);
  if (digitalRead(SW6) == LOW) {
  isLooping = false;
  break;}
  digitalWrite(D7,HIGH);
  digitalWrite(D8,HIGH);
}

if (digitalRead(SW6) == LOW) {
  isLooping = false; }
  digitalWrite(D1,HIGH);
  digitalWrite(D2,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,HIGH);
  digitalWrite(D6,HIGH);
  digitalWrite(D7,HIGH);
  digitalWrite(D8,HIGH);
}
