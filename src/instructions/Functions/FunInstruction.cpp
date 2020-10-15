//
// Created by Danny on 13-10-2020.
//

#include "FunInstruction.hpp"

FunInstruction::FunInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void FunInstruction::Prepare(){
}

void FunInstruction::Do() {
    std::cout << "Function: instruction" << std::endl;
    _speur->CallStack.push_back(_speur->InstructionIndex);

    GTOInstruction gto(_speur, "");
    gto.Do();
}