//
// Created by Danny on 6-10-2020.
//

#include "VariableReference.hpp"

VariableReference::VariableReference(std::string line) : BaseInstruction(line) {

}

void VariableReference::Do() {
    _line.erase(0, 1);
    std::cout << "Variable Reference: " << _line << std::endl;

    Speur& speur = Speur::get_instance();

    speur.AddToStack(speur.GetVariable(_line));
}
