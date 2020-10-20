//
// Created by Danny on 12-10-2020.
//

#include "DivInstruction.hpp"

DivInstruction::DivInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void DivInstruction::Do() {
    int val1 = stoi(_speur->PopStack());
    int val2 = stoi(_speur->PopStack());

    _speur->PushStack(std::to_string(val2 / val1));
}
