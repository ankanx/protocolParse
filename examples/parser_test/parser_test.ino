#include <protocolParse.h>
byte byteArray[100];
byte *p;

protocolParse parser;

void setup() {
  p = byteArray;
  Serial.begin(9600);

}

void loop() {

  String myString = String((char *)byteArray);
  Serial.println(myString);

}

void serialEvent(){

parser.test(p);

}
