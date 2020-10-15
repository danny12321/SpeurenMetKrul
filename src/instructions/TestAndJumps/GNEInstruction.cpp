//
// Created by Danny on 10-10-2020.
//

#include "GNEInstruction.hpp"

GNEInstruction::GNEInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void GNEInstruction::Do() {
    std::cout << "GNE instruction: " << _line << std::endl;
    int label = stoi(_speur->RemoveFromStack(0));
    std::string val1 = _speur->RemoveFromStack(0);
    std::string val2 = _speur->RemoveFromStack(0);

    if (val1 != val2) {
        std::cout << "GO TO instruction: " << label << std::endl;
        _speur->InstructionIndex = label;
    }
}