#ifndef TRANSPORT_HPP
#define TRANSPORT_HPP

#include "../packet.hpp"

class TransportLayer {
public:
  Packet encapsulate(Packet &packet);
  Packet decapsulate(Packet &packet);
};

#endif