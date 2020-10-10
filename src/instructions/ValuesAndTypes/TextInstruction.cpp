//
// Created by Danny on 5-10-2020.
//

#include "TextInstruction.hpp"

TextInstruction::TextInstruction(Speur* speur, std::string line) : BaseInstruction(speur, line) {

}

void TextInstruction::Do() {
    _line.erase(0, 1);

    std::cout << "Text instruction: " << _line << std::endl;
    _speur->AddToStack(_line);
}
