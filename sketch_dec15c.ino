const int potPin=A0;
const int ledPin=9;
const int switchPin=2;
bool ledState=true;


void setup() {
 pinMode(ledPin,OUTPUT);
 pinMode(switchPin,INPUT_PULLUP);

}

void loop() {
 static bool lastSwitchState=HIGH;
 bool CurrentSwitchState=digitalRead(switchPin);
 if(currentSwitchState==LOW && lastSwitchState=HIGH){
  delay(50);
  if(digitalRead(switchpin)==LOW){
    ledState=!ledState;
  }
 }
 lastSwitchState=currentSwitchState;
 if(ledState){
  int potValue=analogRead(potPin);
  int pwmValue=map(potValue,0,1023,0,255);
  analogWrite(ledPin,potValue);
 }
 else{
  analogWrite(ledPin,0);
 }

}
