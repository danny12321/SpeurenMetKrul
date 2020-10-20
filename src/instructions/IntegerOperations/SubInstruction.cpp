//
// Created by Danny on 15-10-2020.
//

#include "SubInstruction.hpp"

SubInstruction::SubInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void SubInstruction::Do() {
    int val1 = stoi(_speur->PopStack());
    int val2 = stoi(_speur->PopStack());

    _speur->PushStack(std::to_string(val2 - val1));
}
