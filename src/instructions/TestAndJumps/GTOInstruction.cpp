//
// Created by Danny on 10-10-2020.
//

#include "GTOInstruction.hpp"

GTOInstruction::GTOInstruction(Speur* speur, std::string line) : BaseInstruction(speur, line) {

}

void GTOInstruction::Do() {
    std::cout << "GTO instruction: " << _line << std::endl;
    int label = stoi(_speur->RemoveFromStack(0));

    _speur->InstructionIndex = label;
}