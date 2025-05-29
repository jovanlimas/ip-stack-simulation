#include "application.hpp"
#include <string>

Packet ApplicationLayer::encapsulate(std::string &message) {
  Packet packet;

  packet.packet_structure.payload = message;
  packet.packet_structure.application_header = "APP_HDR";

  return packet;
}

std::string ApplicationLayer::decapsulate(Packet &packet) {
  return packet.packet_structure.payload;
}