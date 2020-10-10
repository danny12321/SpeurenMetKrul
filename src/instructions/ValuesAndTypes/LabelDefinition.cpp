//
// Created by Danny on 6-10-2020.
//

#include "LabelDefinition.hpp"

LabelDefinition::LabelDefinition(Speur* speur, std::string line) : BaseInstruction(speur, line) {

}

void LabelDefinition::Do() {
    std::cout << "LabelDefinition instruction: " << _line << std::endl;
    _line.erase(0, 1);
    _speur->Labels[_line] = _speur->InstructionIndex + 1;
}
