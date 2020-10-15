//
// Created by Danny on 12-10-2020.
//

#include "GLTInstruction.hpp"

GLTInstruction::GLTInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void GLTInstruction::Do() {
    std::cout << "GLT instruction: " << _line << std::endl;
    int label = stoi(_speur->RemoveFromStack(0));
    int val1 = stoi(_speur->RemoveFromStack(0));
    int val2 = stoi(_speur->RemoveFromStack(0));

    if (val1 > val2) {
        std::cout << "GO TO instruction: " << label << std::endl;
        _speur->InstructionIndex = label - 1;
    }
}