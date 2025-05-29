#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "../packet.hpp"
#include <string>

class ApplicationLayer {
public:
  Packet encapsulate(std::string &message);
  std::string decapsulate(Packet &packet);
};

#endif