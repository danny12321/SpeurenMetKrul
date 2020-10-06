//
// Created by Danny on 6-10-2020.
//

#include "LabelDefinition.hpp"

LabelDefinition::LabelDefinition(std::string line) : BaseInstruction(line) {

}

void LabelDefinition::Do() {
    _line.erase(0, 1);
    std::cout << "LabelDefinition instruction: " << _line << std::endl;

    Speur& speur = Speur::get_instance();

    speur.SetLabel(_line, speur.GetCurrentStackIndex());
}
