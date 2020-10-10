//
// Created by Danny on 10-10-2020.
//

#include "DecInstruction.hpp"

DecInstruction::DecInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void DecInstruction::Do() {
    std::cout << "Dec instruction: " << std::endl;
    int val = stoi(_speur->RemoveFromStack(0));
    std::cout << val << std::endl;
    val--;
    _speur->Stack.push_back(std::to_string(val));
}
