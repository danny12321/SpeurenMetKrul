//
// Created by Danny on 15-10-2020.
//

#include "SLCInstruction.hpp"

SLCInstruction::SLCInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void SLCInstruction::Do() {
    std::cout << "Slc instruction: " << std::endl;
    int to = stoi(_speur->RemoveFromStack(0));
    int from = stoi(_speur->RemoveFromStack(0));
    std::string val = _speur->RemoveFromStack(0);
    std::string sub = val.substr(from, (to - from - 1));
    _speur->Stack.push_back(sub);
}
