//
// Created by Danny on 6-10-2020.
//

#include "LabelDefinition.hpp"

LabelDefinition::LabelDefinition(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void LabelDefinition::Do() {

}

void LabelDefinition::Prepare() {
    _line.erase(0, 1);
    _speur->Labels[_line] = _speur->InstructionIndex;
}
