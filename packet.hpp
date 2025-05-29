#ifndef PACKET_HPP
#define PACKET_HPP

#include <string>

struct packet_struct {
  std::string payload;
  std::string application_header;
  std::string transport_header;
  std::string network_header;
  std::string link_header;
};

class Packet {
public:
  packet_struct packet_structure;
  void print();
};

#endif