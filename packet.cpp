#include "packet.hpp"
#include <iostream>

void Packet::print() {
  if (packet_structure.link_header != "") {
    std::cout << packet_structure.link_header << "|";
  }

  if (packet_structure.network_header != "") {
    std::cout << packet_structure.network_header << "|";
  }

  if (packet_structure.transport_header != "") {
    std::cout << packet_structure.transport_header << "|";
  }

  if (packet_structure.application_header != "") {
    std::cout << packet_structure.application_header << "|";
  }

  std::cout << packet_structure.payload << std::endl;
}