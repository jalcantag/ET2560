//#include <filename.h> Goes here


int main(void)
{
  init();  //Turns Hardware ON
  int ledPin;            //Set Variable "ledPin"
  ledPin = 13;          //Set ledPin to 13; (Internal mounted LED)
  pinMode(ledPin, OUTPUT);          //Set the pin 13 to an Output so it has POWER
  digitalWrite(ledPin, LOW);      //Write a 5v Signal LOW to pin
  delay(5000);                   //Wait for 5 seconds
  digitalWrite(ledPin, HIGH);    //Write a 5v Signal HIGH to pin
  delay(5000);
  digitalWrite(ledPin, LOW);
  delay(5000);
  digitalWrite(ledPin, HIGH);
  delay(5000);
  return 0;               //Release Program
}




