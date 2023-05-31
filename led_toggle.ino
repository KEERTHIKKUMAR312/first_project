int toggle=HIGH;
int led=3;
void setup()
{
 
  pinMode(led,OUTPUT);
 
}

void loop()
 {
  toggle=!toggle;
  digitalWrite(led,toggle);
  delay(100);
}
