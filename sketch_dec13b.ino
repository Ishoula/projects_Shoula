int potvalue=0;
int potpin=A0;
int ledpin=11;
int ledvalue=0;
void setup(){
  pinMode(potpin,INPUT);
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  potvalue=analogRead(potpin);
  ledvalue=map(potvalue,0,1023,0,255);
  analogWrite(ledpin,ledvalue);
  Serial.printl(ledvalue);
  delay(2);
}