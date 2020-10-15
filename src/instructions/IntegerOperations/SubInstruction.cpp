//
// Created by Danny on 15-10-2020.
//

#include "SubInstruction.hpp"

SubInstruction::SubInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void SubInstruction::Do() {
    std::cout << "Sub instruction: " << std::endl;
    int val1 = stoi(_speur->RemoveFromStack(0));
    int val2 = stoi(_speur->RemoveFromStack(0));

    _speur->Stack.push_back(std::to_string(val2 - val1));
}
