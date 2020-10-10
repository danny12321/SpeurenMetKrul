#include <iostream>
#include "Speur.hpp"

int main() {
    std::cout << "Start tracing the secret message!" << std::endl;

    CurlRequest req;
    auto instructions = req.GetInstructions();

    Speur speur;
    speur.Init(instructions);

    return 0;
}
