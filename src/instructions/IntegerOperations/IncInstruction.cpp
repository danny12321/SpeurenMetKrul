//
// Created by Danny on 15-10-2020.
//

#include "IncInstruction.hpp"

IncInstruction::IncInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void IncInstruction::Do() {
    std::cout << "Increment instruction: " << std::endl;
    int val = stoi(_speur->RemoveFromStack(0)) + 1;
    _speur->Stack.push_back(std::to_string(val));
}
