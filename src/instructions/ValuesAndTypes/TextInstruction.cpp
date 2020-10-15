//
// Created by Danny on 5-10-2020.
//

#include "TextInstruction.hpp"

TextInstruction::TextInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void TextInstruction::Do() {
    _line.erase(0, 1);

    _speur->Stack.push_back(_line);
}
