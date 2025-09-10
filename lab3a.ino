int value=0;
void setup()
{
  pinMode(A0 ,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  value=analogRead(A0);
  Serial.print(value);
  if(value>=800){
    
  digitalWrite(13, HIGH);
   Serial.print("vary dry:");
  }
  else if(value <800 &&value>=600){
  Serial.println("medium:");
  }
  else {
    digitalWrite(13, LOW);
    Serial.println("vary WET:");
  }
}