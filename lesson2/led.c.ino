void setup()
{
  int i;
  for(i=0;i<8;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
  int i;
  i=0;
  do
  {
  digitalWrite(i, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(i, LOW);
  delay(200); // Wait for 200 millisecond(s)
    i++;
  }while(i<8);
  
  
  do
    {
  digitalWrite(i, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(i, LOW);
  delay(200); // Wait for 200 millisecond(s)
    i--;
  }while(i<8);
}