//
// Created by Danny on 5-10-2020.
//

#include "TextInstruction.hpp"

TextInstruction::TextInstruction(std::string line) : BaseInstruction(line) {

}

void TextInstruction::Do() {
    _line.erase(0, 1);

    std::cout << "Text instruction: " << _line << std::endl;
    Speur::get_instance().AddToStack(_line);
}
