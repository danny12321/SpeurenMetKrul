//
// Created by Danny on 12-10-2020.
//

#include "MulInstruction.hpp"

MulInstruction::MulInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void MulInstruction::Do() {
    std::cout << "Mul instruction: " << std::endl;
    int val1 = stoi(_speur->RemoveFromStack(0));
    int val2 = stoi(_speur->RemoveFromStack(0));

    _speur->Stack.push_back(std::to_string(val1 * val2));
}