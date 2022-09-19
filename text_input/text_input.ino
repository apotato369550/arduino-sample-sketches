String input = "";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() == 0) {}
  byte b = Serial.read();

  if(b != '\n'){
    input += (char) b;
    return;
  }  
    
  Serial.println(input);

  // print separate strings here and shiz


  
  input = "";
  
  
  /*
  Serial.print("I got: ");
  Serial.print(b);
  */
}
