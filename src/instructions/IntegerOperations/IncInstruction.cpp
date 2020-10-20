//
// Created by Danny on 15-10-2020.
//

#include "IncInstruction.hpp"

IncInstruction::IncInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void IncInstruction::Do() {
    int val = stoi(_speur->PopStack()) + 1;
    _speur->PushStack(std::to_string(val));
}
