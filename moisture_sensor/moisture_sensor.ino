int ms_sensor = A1;
int ms_value = 0;
int led = 13;
boolean flag = true;

 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ms_sensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ms_value = analogRead(ms_sensor);
  Serial.println(ms_value);

  if(ms_value >= 1000 && flag == false){
    digitalWrite(led, LOW);
    flag = true;
    delay(1000);
  }

  if(ms_value <= 800 && flag == true){
    digitalWrite(led, HIGH);
    flag = false;
    delay(1000);
  }

  delay(1000);
}
