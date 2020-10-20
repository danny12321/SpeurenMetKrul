//
// Created by Danny on 6-10-2020.
//

#include "LabelReference.hpp"

LabelReference::LabelReference(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void LabelReference::Do() {
    _line.erase(0, 1);

    if (_speur->Labels.find(_line) != _speur->Labels.end()) {
        _speur->PushStack(std::to_string(_speur->Labels[_line]));
    }
}
