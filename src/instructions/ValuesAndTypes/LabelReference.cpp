//
// Created by Danny on 6-10-2020.
//

#include "LabelReference.hpp"

LabelReference::LabelReference(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void LabelReference::Do() {
    _line.erase(0, 1);

    _speur->PushStack(std::to_string(_speur->GetLabel(_line)));
}
