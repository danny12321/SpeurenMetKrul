//
// Created by Danny on 15-10-2020.
//

#include "LenInstruction.hpp"

LenInstruction::LenInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void LenInstruction::Do() {
    std::string val = _speur->RemoveFromStack(0);
    _speur->Stack.push_back(std::to_string(val.length()));
}
