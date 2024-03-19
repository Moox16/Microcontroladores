#define switchPin1 13
#define LEDRED_P 9 
#define LEDGREEN_P 11 
#define LEDRED 2 
#define LEDGREEN 6 
#define LEDYELLOW 4
char cont = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(LEDGREEN_P,OUTPUT);
digitalWrite(LEDGREEN_P,LOW);
pinMode(LEDGREEN,OUTPUT);
digitalWrite(LEDGREEN, LOW);
pinMode(LEDRED_P, OUTPUT);
digitalWrite(LEDRED_P, LOW);
pinMode(LEDRED, OUTPUT);
digitalWrite(LEDRED, LOW);
pinMode(LEDYELLOW, OUTPUT);
digitalWrite(LEDYELLOW, LOW);
pinMode(switchPin1, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LEDGREEN, HIGH);
digitalWrite(LEDRED_P, HIGH);

while (digitalRead(switchPin1) == HIGH);
  delay(1000);
  digitalWrite(LEDYELLOW, HIGH);
  digitalWrite(LEDGREEN,LOW);
  delay(2000);
  digitalWrite(LEDYELLOW, LOW);
  digitalWrite(LEDRED, HIGH);
  digitalWrite(LEDRED_P, LOW);
  digitalWrite(LEDGREEN_P, HIGH);
  delay(10000);

for (cont=0; cont<3; cont++) {
  digitalWrite(LEDGREEN_P, LOW);
  delay(500);
  digitalWrite(LEDGREEN_P, HIGH);
  delay(500);
}

digitalWrite(LEDGREEN_P, LOW);
digitalWrite(LEDRED_P, HIGH);
delay(1000);
digitalWrite(LEDRED, LOW);
digitalWrite(LEDGREEN, HIGH);
digitalWrite(LEDRED_P, HIGH);
}


