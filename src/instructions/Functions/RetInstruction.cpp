//
// Created by Danny on 13-10-2020.
//

#include "RetInstruction.hpp"

RetInstruction::RetInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void RetInstruction::Do() {
    auto a = _speur->CallStack.back();
    _speur->CallStack.pop_back();
    _speur->InstructionIndex = a;
}