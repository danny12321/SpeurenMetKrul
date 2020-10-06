#include <iostream>
#include "Speur.hpp"

int main() {
    std::cout << "Start tracing the secret message!" << std::endl;
    Speur::get_instance().Init();
    return 0;
}
