//
// Created by Danny on 6-10-2020.
//

#include "VariableAssignment.hpp"

VariableAssignment::VariableAssignment(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void VariableAssignment::Do() {
    _line.erase(0, 1);

    _speur->Vars[_line] = _speur->RemoveFromStack(0);
}
