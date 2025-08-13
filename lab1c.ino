// C++ code
//
const int led[]={2,3,4,5,6};
void setup()
{
  for(int i=4;i<=0;i--){
  pinMode(led[i], OUTPUT);
  }
}

void loop()
{
  
  for(int i=4;i<=0;i--){
  digitalWrite(led[i], HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(led[i], LOW);
  delay(500); // Wait for 1000 millisecond(s)
}
}