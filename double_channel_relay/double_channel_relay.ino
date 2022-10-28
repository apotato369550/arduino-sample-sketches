#define relayPin1 3
#define relayPin2 4

void setup() {
  // put your setup code here, to run once:
  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relayPin1, HIGH);
  digitalWrite(relayPin2, LOW);
  delay(1000);
  digitalWrite(relayPin1, LOW);
  digitalWrite(relayPin2, HIGH);
  delay(1000);
}
