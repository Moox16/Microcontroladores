#define switchPin1 13
#define switchPin2 12
char state = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(10,OUTPUT);
digitalWrite(10,LOW);
pinMode(6,OUTPUT);
digitalWrite(6, LOW);
pinMode(switchPin1, INPUT_PULLUP);
pinMode(switchPin2, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(switchPin1) == LOW) {
 state = 1;
}

if (digitalRead(switchPin2) == LOW) {
  state = 2;
}

switch(state) {
  case 1:

  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  break;
}

switch(state) {
  case 2:

  digitalWrite (6, HIGH);
  delay(250);
  digitalWrite(6, LOW);
  delay(250);
  break;
}
}

