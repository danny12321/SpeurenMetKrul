//
// Created by Danny on 10-10-2020.
//

#include "DecInstruction.hpp"

DecInstruction::DecInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void DecInstruction::Do() {
    int val = stoi(_speur->PopStack()) - 1;
    _speur->PushStack(std::to_string(val));
}
