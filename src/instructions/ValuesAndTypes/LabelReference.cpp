//
// Created by Danny on 6-10-2020.
//

#include "LabelReference.hpp"

LabelReference::LabelReference(Speur* speur, std::string line) : BaseInstruction(speur, line) {

}

void LabelReference::Do() {
    _line.erase(0, 1);
    std::cout << "Variable Reference: " << _line << std::endl;

    _speur->AddToStack(_speur->GetFromStack(_speur->GetLabel(_line), false));
}
