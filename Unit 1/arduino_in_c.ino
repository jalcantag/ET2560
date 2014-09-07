

int main(void)
{
  init();
  int ledPin = 13;             //Set "ledPin to number 13
  pinMode(ledPin, OUTPUT);          //Set the pin 13 to an Output
  digitalWrite(ledPin, LOW); //Write a 5v Signal LOW to pin
  delay(2000);               //Wait for 2 seconds
  digitalWrite(ledPin, HIGH);  //Write a 5v Signal HIGH to pin
  delay(2000);
  digitalWrite(ledPin, LOW);
  delay(2000);
  digitalWrite(ledPin, HIGH);
  delay(2000);
  return 0;
}



