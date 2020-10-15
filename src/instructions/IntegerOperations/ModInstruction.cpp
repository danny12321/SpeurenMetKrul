//
// Created by Danny on 12-10-2020.
//

#include "ModInstruction.hpp"

ModInstruction::ModInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void ModInstruction::Do() {
    std::cout << "Mod instruction: " << std::endl;
    int val1 = stoi(_speur->RemoveFromStack(0));
    int val2 = stoi(_speur->RemoveFromStack(0));

    _speur->Stack.push_back(std::to_string(val2 % val1));
}
