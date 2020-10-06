//
// Created by Danny on 6-10-2020.
//

#include "Digits.hpp"

Digits::Digits(std::string line) : BaseInstruction(line) {

}

void Digits::Do() {
    std::cout << "Digits instruction: " << _line << std::endl;
    Speur::get_instance().AddToStack(_line);
}
