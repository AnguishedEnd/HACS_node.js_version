#include "SerialComm.h"

//Serial constructor
SerialComm::SerialComm(int nBaudrate, int nPacketSize)
{
   Init(nBaudrate, nPacketSize); 
}

void SerialComm::Init(int nBaudrate, int nPacketSize)
{
   m_nBaudrate = nBaudrate;
   m_nPacketSize = nPacketSize;
   Serial.begin(m_nBaudrate); 
}

void SerialComm::Send(void)
{
  Serial.write(255);
  Serial.flush();
  Serial.write(m_nPacket.m_bPacket, m_nPacketSize);
  Serial.flush();
  Serial.write(255);
  Serial.flush();
}

boolean SerialComm::Receive(void)
{
  byte header = Serial.read();
  if (header == 255)
  {
    for (int i = 0; i < m_nPacketSize; i++)
    {
      m_nPacket.m_bPacket[i] = Serial.read();
    }
    byte tail = Serial.read();
    if (tail == 255)
    { 
      return true;
    }
    else 
    {
      return false;
    }
  }
  else 
  {
    return false;
  }
}

int* SerialComm::GetPacket(void)
{
  return m_nPacket.m_iPacket;
}

void SerialComm::SetPacket(int* nPacket)
{
  for (int i = 0; i < (m_nPacketSize/2); i++)
  {
    m_nPacket.m_iPacket[i] = nPacket[i];
  }
}
