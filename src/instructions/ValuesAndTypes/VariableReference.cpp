//
// Created by Danny on 6-10-2020.
//

#include "VariableReference.hpp"

VariableReference::VariableReference(Speur* speur, std::string line) : BaseInstruction(speur, line) {

}

void VariableReference::Do() {
    _line.erase(0, 1);
    std::cout << "Variable Reference: " << _line << std::endl;

    _speur->AddToStack(_speur->GetVariable(_line));
}
