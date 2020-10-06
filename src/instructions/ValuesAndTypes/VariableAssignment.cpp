//
// Created by Danny on 6-10-2020.
//

#include "VariableAssignment.hpp"

VariableAssignment::VariableAssignment(std::string line) : BaseInstruction(line) {

}

void VariableAssignment::Do() {
    _line.erase(0, 1);
    std::cout << "Variable Assignment: " << _line << std::endl;

    Speur& speur = Speur::get_instance();

    speur.SetVariable(_line, speur.GetFromStack(0));
    speur.RemoveFromStack(0);
}
