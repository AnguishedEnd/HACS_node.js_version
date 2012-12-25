/*Home Automation Control System (HACS) by COLIN LOBO

  REFERENCES:
  1. http://www.ladyada.net/learn/sensors/tmp36.html
  2. http://www.sparkfun.com/tutorial/AIK/ARDX-EG-SPAR-WEB.pdf (Page 26)
*/

#include "SerialComm.h"

SerialComm SerialComm(9600, 40);


void setup() {
  for(int i = 2; i < 14; i++)
  {
    pinMode(i, OUTPUT);  
    digitalWrite(i, LOW);
  }
}

void loop() {
  boolean PacketState; 
  if(Serial.available() > 0)
  {
    while((Serial.peek() != 255) && (Serial.available() > 0))
    {
      Serial.read(); //discard whats in the buffer until next packet header
    }
    PacketState = SerialComm.Receive();
  }
  if(PacketState == true)
  {
    //int array[] = SerialComm.GetPacket();
    //setPins(array);
  }
  
  //int array[] = readPins;
  //SerialComm.SetPacket(array);
  
  SerialComm.Send();
  delay(100);
}

