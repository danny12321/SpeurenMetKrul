//
// Created by Danny on 15-10-2020.
//

#include "AbsInstruction.hpp"

AbsInstruction::AbsInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void AbsInstruction::Do() {
    int val = stoi(_speur->RemoveFromStack(0));
    val = abs(val);
    _speur->Stack.push_back(std::to_string(val));
}
