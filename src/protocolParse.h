/*
  Protocol Parser
*/
#ifndef protocolParse_h
#define protocolParse_h

#include "Arduino.h"
#include <Wire.h>

class protocolParse
{
  public:
        void parse(boolean *complete,byte *byteArray);
        void test(byte *byteArray);
  private:

};

#endif
