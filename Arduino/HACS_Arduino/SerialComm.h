#ifndef SERIALCOMM_H
#define SERIALCOMM_H

#include <Arduino.h>

class SerialComm
{
  private:
    int m_nBaudrate;
    int m_nPacketSize; //# of pins * 2 (pin info is 2 bytes long)
    union Packet_t {
      byte m_bPacket[];
      int m_iPacket[];
    } m_nPacket;
      
  public:
    //Constructor
    SerialComm(int nBaudrate = 9600, int nPacketSize = 40);
        
    void Init(int nBaudRate, int nPacketSize);
    void Send(void);
    boolean Receive(void);
    int* GetPacket(void);
    void SetPacket(int* n_PacketRX);
};

#endif
