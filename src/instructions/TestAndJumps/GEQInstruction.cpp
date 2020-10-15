//
// Created by Danny on 10-10-2020.
//

#include "GEQInstruction.hpp"

GEQInstruction::GEQInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void GEQInstruction::Do() {
    int label = stoi(_speur->RemoveFromStack(0));
    std::string val1 = _speur->RemoveFromStack(0);
    std::string val2 = _speur->RemoveFromStack(0);

    if (val1 == val2) {
        _speur->InstructionIndex = label;
    }
}