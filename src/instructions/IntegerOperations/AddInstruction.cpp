//
// Created by Danny on 10-10-2020.
//

#include "AddInstruction.hpp"

AddInstruction::AddInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void AddInstruction::Do() {
    int val1 = stoi(_speur->PopStack());
    int val2 = stoi(_speur->PopStack());

    _speur->PushStack(std::to_string(val1 + val2));
}
