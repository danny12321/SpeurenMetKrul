//
// Created by Danny on 10-10-2020.
//

#include "GNEInstruction.hpp"

GNEInstruction::GNEInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void GNEInstruction::Do() {
    int label = stoi(_speur->PopStack());
    std::string val1 = _speur->PopStack();
    std::string val2 = _speur->PopStack();

    if (val1 != val2) {
        _speur->SetInstructionIndex(label);
    }
}