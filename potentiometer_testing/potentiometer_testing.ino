#define POTENTIOMETER A2

void setup() {
  // put your setup code here, to run once:
  pinMode(POTENTIOMETER, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(POTENTIOMETER));
  delay(500);
}
