//
// Created by Danny on 10-10-2020.
//

#include "DecInstruction.hpp"

DecInstruction::DecInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void DecInstruction::Do() {
    int val = stoi(_speur->RemoveFromStack(0)) - 1;
    _speur->Stack.push_back(std::to_string(val));
}
