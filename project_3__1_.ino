
 const int Gpin= 10;
 const int Rpin= 12;
 const int Bpin= 13;
 void setup(){
            pinMode(Bpin,OUTPUT);
            pinMode(Rpin,OUTPUT);
            pinMode(Gpin,OUTPUT);}

 void loop(){
  digitalWrite(Gpin,HIGH);
  delay(1000);
  digitalWrite(Gpin,LOW);   
  digitalWrite(Rpin,HIGH);
  delay(2000);
  digitalWrite(Rpin,LOW);   
  digitalWrite(Bpin,HIGH);
  delay(500);
  digitalWrite(Bpin,LOW);
  }
  
  


  
           
           
