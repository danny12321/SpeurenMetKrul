//
// Created by Danny on 12-10-2020.
//

#include "ModInstruction.hpp"

ModInstruction::ModInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void ModInstruction::Do() {
    int val1 = stoi(_speur->PopStack());
    int val2 = stoi(_speur->PopStack());

    _speur->PushStack(std::to_string(val2 % val1));
}
