const int switchPin1 = 13;
const int switchPin2 = 12;

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
int switchState1 = digitalRead(switchPin1);
int switchState2 = digitalRead(switchPin2);

if (switchState1 == HIGH) {
  pinMode (10, HIGH);
  delay(500);
  pinMode(10, LOW);
  delay(500);
} else {
  pinMode(10, LOW);
}

if (switchState2 == HIGH) {
  pinMode (6, HIGH);
  delay(250);
  pinMode(6, LOW);
  delay(250);
} else {
  pinMode(6, LOW);
}
}

