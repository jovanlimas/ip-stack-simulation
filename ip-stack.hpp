#ifndef IP_STACK_HPP
#define IP_STACK_HPP

#include "layers/application.hpp"
#include "layers/link.hpp"
#include "layers/network.hpp"
#include "layers/transport.hpp"

class IPStack {
private:
  ApplicationLayer application_layer;
  TransportLayer transport_layer;
  NetworkLayer network_layer;
  LinkLayer link_layer;

public:
  Packet send(std::string &message);
  void receive(Packet &packet);
};

#endif