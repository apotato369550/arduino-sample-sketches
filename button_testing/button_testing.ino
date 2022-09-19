#define BUTTON 13

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

int button_status = 0;

void loop() {
  // put your main code here, to run repeatedly:
  int button_status = digitalRead(BUTTON);
  Serial.println(button_status);
  delay(500);
}
