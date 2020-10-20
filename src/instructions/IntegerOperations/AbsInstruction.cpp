//
// Created by Danny on 15-10-2020.
//

#include "AbsInstruction.hpp"

AbsInstruction::AbsInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void AbsInstruction::Do() {
    int val = stoi(_speur->PopStack());
    val = abs(val);
    _speur->PushStack(std::to_string(val));
}
