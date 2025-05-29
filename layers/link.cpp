#include "link.hpp"

Packet LinkLayer::encapsulate(Packet &packet) {
  Packet new_packet;

  new_packet.packet_structure.payload = packet.packet_structure.payload;
  new_packet.packet_structure.application_header =
      packet.packet_structure.application_header;
  new_packet.packet_structure.transport_header =
      packet.packet_structure.transport_header;
  new_packet.packet_structure.network_header =
      packet.packet_structure.network_header;
  new_packet.packet_structure.link_header = "LINK_HDR";

  return new_packet;
}

Packet LinkLayer::decapsulate(Packet &packet) {
  Packet new_packet;

  new_packet.packet_structure.payload = packet.packet_structure.payload;
  new_packet.packet_structure.application_header =
      packet.packet_structure.application_header;
  new_packet.packet_structure.transport_header =
      packet.packet_structure.transport_header;
  new_packet.packet_structure.network_header =
      packet.packet_structure.network_header;

  return new_packet;
}