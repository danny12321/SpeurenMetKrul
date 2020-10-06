//
// Created by Danny on 6-10-2020.
//

#include "LabelReference.hpp"

LabelReference::LabelReference(std::string line) : BaseInstruction(line) {

}

void LabelReference::Do() {
    _line.erase(0, 1);
    std::cout << "Variable Reference: " << _line << std::endl;

    Speur& speur = Speur::get_instance();

    speur.AddToStack(speur.GetFromStack(speur.GetLabel(_line), false));
}
