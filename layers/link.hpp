#include "../packet.hpp"

class LinkLayer {
public:
  Packet encapsulate(Packet &packet);
  Packet decapsulate(Packet &packet);
};