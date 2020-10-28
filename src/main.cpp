#include <iostream>
#include "Speur.hpp"

int main() {
    std::cout << "Start tracing the secret message!" << std::endl;

    std::string baseurl = "https://www.swiftcoder.nl/cpp1/";
    std::string path = "start.txt";

    try {
        Speur speur = Speur(baseurl + path);
        path = speur.Run();

        while (speur.GetSecretMessage().empty()) {
            speur = Speur(baseurl + path);
            path = speur.Run();
        }

        std::cout << "\n\nThe secret message is:\n" << speur.GetSecretMessage();

    } catch (const std::exception &e) {
        std::cerr << "Program stopped because:" << std::endl;
        std::cerr << e.what() << std::endl;
    }

//    int* numbers = new int[1000];

    return 0;
}
