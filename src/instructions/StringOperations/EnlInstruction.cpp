//
// Created by Danny on 15-10-2020.
//

#include "EnlInstruction.hpp"

EnlInstruction::EnlInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void EnlInstruction::Do() {
    std::cout << "Enl instruction: " << std::endl;
    std::string val = _speur->RemoveFromStack(0);
    _speur->Stack.push_back(val + "\n");
}
