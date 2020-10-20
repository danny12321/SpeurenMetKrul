//
// Created by Danny on 13-10-2020.
//

#include "FunInstruction.hpp"
#include "../TestAndJumps/GTOInstruction.hpp"

FunInstruction::FunInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void FunInstruction::Prepare(){
}

void FunInstruction::Do() {
    _speur->PushCallStack(_speur->GetInstructionIndex());

    GTOInstruction gto(_speur, "");
    gto.Do();
}