void setup()
{

  Serial.begin(9600);
  pinMode(5 , INPUT);
  pinMode(4, OUTPUT);

}

void loop()
{
  int a=digitalRead(5);
  Serial.println(a);
  if (a==1)
  {
    digitalWrite(4 , HIGH);
    Serial.println("LED IS ON");
  }
  else
  {
    digitalWrite(4 , LOW);
    Serial.println("LED IS OFF");
  }

}
