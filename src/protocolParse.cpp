/*
  protocolParser
*/
#include "Arduino.h"
#include "protocolParse.h"



void protocolParse::parse(boolean *Complete,byte *byteArray)
{
 byte CR;
 byte LF;
 int j=0;
  while (Serial.available()) {
    // get the new byte:
    byte inByte = (byte)Serial.read();
    // Store message byte in Array
    *(byteArray+ j) = inByte;
    //Serial.write(byteArray[j]);
    
      // Increment in wait for new byte
      j++;
      
    // Look for CRLF message complete
    if (inByte == 0x0d){
      CR = 0x0d;
    }
    if (inByte == 0x0a){
      LF = 0x0a;
    }
    
    if(inByte == 0x04 && CR == 0x0d && LF == 0x0a)
    {
       // Got CRLF
       *Complete = true;
     }
  }

}

void protocolParse::test(byte *byteArray)
{
 byte CR;
 byte LF;
 int j=0;
  while (Serial.available()) {
    // get the new byte:
    byte inByte = (byte)Serial.read();
    // Store message byte in Array
    *(byteArray+ j) = inByte;
    //Serial.write(byteArray[j]);
    Serial.println((char)*(byteArray+ j));
      // Increment in wait for new byte
      j++;
    
    if(inByte == 0x0d)
    {
         Serial.println("fick allt");

     }
  }

}



