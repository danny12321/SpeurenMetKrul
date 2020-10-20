//
// Created by Danny on 15-10-2020.
//

#include "EnlInstruction.hpp"

EnlInstruction::EnlInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void EnlInstruction::Do() {
    std::string val = _speur->PopStack();
    _speur->PushStack(val + "\n");
}
