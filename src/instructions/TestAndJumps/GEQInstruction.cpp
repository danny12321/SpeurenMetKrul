//
// Created by Danny on 10-10-2020.
//

#include "GEQInstruction.hpp"

GEQInstruction::GEQInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void GEQInstruction::Do() {
    int label = stoi(_speur->PopStack());
    std::string val1 = _speur->PopStack();
    std::string val2 = _speur->PopStack();

    if (val1 == val2) {
        _speur->InstructionIndex = label;
    }
}