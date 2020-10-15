//
// Created by Danny on 12-10-2020.
//

#include "RevInstruction.hpp"

RevInstruction::RevInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void RevInstruction::Do() {
    std::string val = _speur->RemoveFromStack(0);
    std::reverse(val.begin(), val.end());
    _speur->Stack.push_back(val);
}
