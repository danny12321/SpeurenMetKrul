//
// Created by Danny on 15-10-2020.
//

#include "LenInstruction.hpp"

LenInstruction::LenInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void LenInstruction::Do() {
    std::string val = _speur->PopStack();
    _speur->PushStack(std::to_string(val.length()));
}
