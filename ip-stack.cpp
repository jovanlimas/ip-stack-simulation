#include "ip-stack.hpp"
#include <iostream>

Packet IPStack::send(std::string &message) {
  std::cout << "Message sent: " << message << std::endl << std::endl;
  std::cout << "==== Sending ====" << std::endl;

  Packet packet;
  packet.packet_structure.payload = message;

  std::cout << "[Application Layer] Sending: ";
  packet.print();
  packet = application_layer.encapsulate(message);

  std::cout << "[Transport Layer] Sending: ";
  packet.print();
  packet = transport_layer.encapsulate(packet);

  std::cout << "[Network Layer] Sending: ";
  packet.print();
  packet = network_layer.encapsulate(packet);

  std::cout << "[Link Layer] Sending: ";
  packet.print();
  packet = link_layer.encapsulate(packet);

  return packet;
}

void IPStack::receive(Packet &packet) {
  std::cout << "==== Receiving ====" << std::endl;

  std::cout << "[Link Layer] Receiving: ";
  packet.print();
  packet = link_layer.decapsulate(packet);

  std::cout << "[Network Layer] Receiving: ";
  packet.print();
  packet = network_layer.decapsulate(packet);

  std::cout << "[Transport Layer] Receiving: ";
  packet.print();
  packet = transport_layer.decapsulate(packet);

  std::cout << "[Application Layer] Receiving: ";
  packet.print();
  std::string message = application_layer.decapsulate(packet);

  std::cout << std::endl;
  std::cout << "Final message received: " << message << std::endl;
}