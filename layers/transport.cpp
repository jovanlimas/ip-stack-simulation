#include "transport.hpp"

Packet TransportLayer::encapsulate(Packet &packet) {
  Packet new_packet;

  new_packet.packet_structure.payload = packet.packet_structure.payload;
  new_packet.packet_structure.application_header =
      packet.packet_structure.application_header;
  new_packet.packet_structure.transport_header = "TRANS_HDR";

  return new_packet;
}

Packet TransportLayer::decapsulate(Packet &packet) {
  Packet new_packet;

  new_packet.packet_structure.payload = packet.packet_structure.payload;
  new_packet.packet_structure.application_header =
      packet.packet_structure.application_header;

  return new_packet;
}