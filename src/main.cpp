#include <iostream>
#include "Speur.hpp"

int main() {
    std::cout << "Start tracing the secret message!" << std::endl;
    Speur speur;
    speur.Init("https://www.swiftcoder.nl/cpp1/start.txt");


//    std::vector<std::string> instructions {
//            ":loop",
//            "4",
//            "0",
//            ">loop",
//            "gne"
//            ".txtaa"
//    };
//    speur.Run(instructions);

    return 0;
}
