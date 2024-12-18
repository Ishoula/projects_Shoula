int LDR=A1;
void setup(){
  pinMode(LDR,INPUT);
  Serial.begin(9600);
}
void loop(){
  LDRvalue=analogRead(LDR);
  Serial.println(LDRvalue);
  delay(2000);
}
