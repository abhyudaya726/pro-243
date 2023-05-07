#define REDPIN 13
#define YELLOWPIN 12
#define GREENPIN 14

void setup() {
  pinMode(REDPIN,OUTPUT);
  pinMode(YELLOWPIN,OUTPUT);
  pinMode(GREENPIN,OUTPUT);
  digitalWrite(REDPIN,LOW);
  digitalWrite(YELLOWPIN,LOW);
  digitalWrite(GREENPIN,LOW);
}

void loop() {
  digitalWrite(REDPIN,HIGH);
  delay(500);
  digitalWrite(YELLOWPIN,HIGH);
  delay(500);
  digitalWrite(GREENPIN,HIGH);
  delay(500);
  digitalWrite(GREENPIN,LOW);
  delay(500);
  digitalWrite(YELLOWPIN,LOW);
  delay(500);
  digitalWrite(REDPIN,LOW);
  delay(500);
}
