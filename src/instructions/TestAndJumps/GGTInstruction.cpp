//
// Created by Danny on 12-10-2020.
//

#include "GGTInstruction.hpp"

GGTInstruction::GGTInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void GGTInstruction::Do() {
    int label = stoi(_speur->PopStack());
    int val1 = stoi(_speur->PopStack());
    int val2 = stoi(_speur->PopStack());

    if (val1 < val2) {
        _speur->InstructionIndex = label;
    }
}