// C++ code
//
int sensor=0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
 Serial.begin(9600);
}

void loop()
{
  sensor=analogRead(A0);
  Serial.println("detected value is:");

if(sensor>=600){
  digitalWrite(5,HIGH);
}
else{
  digitalWrite(5,LOW);
}
    Serial.print(sensor);
  if(sensor>700){
    digitalWrite(7,HIGH);
  }
  else{
    digitalWrite(7,LOW);
  }
  delay(10);
}
 