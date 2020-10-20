//
// Created by Danny on 10-10-2020.
//

#include "GTOInstruction.hpp"

GTOInstruction::GTOInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void GTOInstruction::Do() {
    int label = stoi(_speur->PopStack());

    _speur->SetInstructionIndex(label);
}