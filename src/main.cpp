#include <iostream>
#include "Speur.hpp"

int main() {
    std::cout << "Start tracing the secret message!" << std::endl;
    Speur speur;
//    speur.Init("https://www.swiftcoder.nl/cpp1/start.txt");
    speur.Init("https://www.swiftcoder.nl/cpp1/aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.txt");
    speur.Init("https://www.swiftcoder.nl/cpp1/4812-9-6727.txt");

//    std::vector<std::string> instructions {
//            "1",
//            "2",
//            "mul"
//    };
//    speur.Run(instructions);

//    CurlRequest req;
//    speur.Run(req.Test());

    return 0;
}
