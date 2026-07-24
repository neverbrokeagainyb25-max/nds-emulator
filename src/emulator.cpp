#include "emulator.hpp"

#include <iostream>

namespace nds {

bool Emulator::initialize() {
    std::cout << "Initializing Nintendo DS emulator...\n";
    return true;
}

void Emulator::run() {
    std::cout << "Emulator is running.\n";
    std::cout << "No ROM loaded.\n";
}

} // namespace nds
