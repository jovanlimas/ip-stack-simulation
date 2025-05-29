#ifndef NETWORK_HPP
#define NETWORK_HPP

#include "../packet.hpp"

class NetworkLayer {
public:
  Packet encapsulate(Packet &packet);
  Packet decapsulate(Packet &packet);
};

#endif