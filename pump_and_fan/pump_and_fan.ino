#define FAN 12
#define PUMP 11

#define FAN_POWER 2
#define PUMP_POWER 3

void setup() {
  // put your setup code here, to run once:
  pinMode(FAN, OUTPUT);
  pinMode(PUMP, OUTPUT);
  pinMode(FAN_POWER, OUTPUT);
  pinMode(PUMP_POWER, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  digitalWrite(FAN, HIGH);
  digitalWrite(PUMP, HIGH);
  
  delay(1000);
  digitalWrite(PUMP, LOW);
  digitalWrite(PUMP, LOW);
  delay(1000);
  */
  // pump();
  //fan();
  pump();

  delay(1000);
  
  off();

  delay(1000);
}
void fan(){
  digitalWrite(FAN_POWER, HIGH);
  digitalWrite(PUMP_POWER, HIGH);
  
  digitalWrite(FAN, LOW);
  digitalWrite(PUMP, HIGH);
}

void pump(){
  digitalWrite(FAN_POWER, HIGH);
  digitalWrite(PUMP_POWER, HIGH);
  
  digitalWrite(FAN, HIGH);
  digitalWrite(PUMP, LOW);
}

void off(){
  digitalWrite(FAN_POWER, LOW);
  digitalWrite(PUMP_POWER, LOW);
}
