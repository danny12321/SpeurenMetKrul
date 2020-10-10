//
// Created by Danny on 6-10-2020.
//

#include "LabelDefinition.hpp"

LabelDefinition::LabelDefinition(Speur* speur, std::string line) : BaseInstruction(speur, line) {

}

void LabelDefinition::Do() {
    _line.erase(0, 1);
    std::cout << "LabelDefinition instruction: " << _line << std::endl;

    _speur->SetLabel(_line, _speur->GetCurrentStackIndex());
}
