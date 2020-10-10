//
// Created by Danny on 10-10-2020.
//

#include "GNEInstruction.hpp"

GNEInstruction::GNEInstruction(Speur* speur, std::string line) : BaseInstruction(speur, line) {

}

void GNEInstruction::Do() {
    std::cout << "GNE instruction: " << _line << std::endl;
    int label = stoi(_speur->RemoveFromStack(0));
    int val1 = stoi(_speur->GetFromStack(0, true));
    int val2 = stoi(_speur->GetFromStack(1, true));

    if(val1 != val2) {
        std::cout << "GO TO instruction: " << label << std::endl;
        _speur->InstructionIndex = label;
    } else {
        std::cout << "GO FURTHER" << std::endl;
    }
}