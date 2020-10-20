//
// Created by Danny on 12-10-2020.
//

#include "MulInstruction.hpp"

MulInstruction::MulInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void MulInstruction::Do() {
    int val1 = stoi(_speur->PopStack());
    int val2 = stoi(_speur->PopStack());

    _speur->PushStack(std::to_string(val1 * val2));
}