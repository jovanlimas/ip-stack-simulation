#include "ip-stack.hpp"
#include <iostream>

std::string message = "Hello, Network!";

int main() {
  IPStack ip_stack;
  Packet packet = ip_stack.send(message);
  std::cout << std::endl;
  ip_stack.receive(packet);

  return 0;
}