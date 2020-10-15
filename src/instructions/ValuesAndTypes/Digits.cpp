//
// Created by Danny on 6-10-2020.
//

#include "Digits.hpp"

Digits::Digits(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void Digits::Do() {
    _speur->Stack.push_back(_line);
}
