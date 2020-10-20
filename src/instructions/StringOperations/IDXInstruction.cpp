//
// Created by Danny on 15-10-2020.
//

#include "IDXInstruction.hpp"

IDXInstruction::IDXInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void IDXInstruction::Do() {
    int index = stoi(_speur->PopStack());
    std::string string = _speur->PopStack();
    std::string character = std::string(1, string.at(index));

    _speur->PushStack(character);
}
