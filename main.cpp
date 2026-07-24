#include "emulator.hpp"

#include <iostream>

int main() {
    std::cout << "Nintendo DS Emulator v0.1.0\n";

    nds::Emulator emulator;

    if (!emulator.initialize()) {
        std::cerr << "Failed to initialize emulator.\n";
        return 1;
    }

    emulator.run();

    return 0;
}
