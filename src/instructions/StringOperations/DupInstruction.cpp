//
// Created by Danny on 10-10-2020.
//

#include "DupInstruction.hpp"

DupInstruction::DupInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void DupInstruction::Do() {
    std::cout << "Dub instruction: " << std::endl;
    std::string val = _speur->RemoveFromStack(0);
    _speur->Stack.push_back(val);
    _speur->Stack.push_back(val);
}
