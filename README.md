# ip-stack-simulation

A C++ simulation of a simplified Internet Protocol (IP) stack, demonstrating the flow of data through the application, transport, network, and link layers.

## Features

- Modular implementation of the four main layers of the IP stack:
  - Application Layer
  - Transport Layer
  - Network Layer
  - Link Layer
- Packet creation, encapsulation, and decapsulation at each layer
- Easy to extend for educational or experimental purposes

## Project Structure

```
.
├── ip-stack.cpp / ip-stack.hpp      # Main stack logic
├── main.cpp                        # Entry point and simulation runner
├── packet.cpp / packet.hpp         # Packet data structure and utilities
├── layers/
│   ├── application.cpp / application.hpp
│   ├── transport.cpp / transport.hpp
│   ├── network.cpp / network.hpp
│   └── link.cpp / link.hpp
├── sample_output.txt               # Example output
└── README.md
```

## Getting Started

### Prerequisites

- C++17 or newer compiler (e.g., g++, clang++)
- Make (optional, for build automation)

### Build Instructions

To compile the project using CMake:

```sh
mkdir build && cd build
cmake ..
make
```

The compiled binary will be located in the `bin/` directory.

### Run the Simulation

```sh
./bin/ip_stack_simulation
```

Sample output can be found in `sample_output.txt`.
