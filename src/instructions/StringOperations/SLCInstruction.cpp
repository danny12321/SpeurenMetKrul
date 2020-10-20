//
// Created by Danny on 15-10-2020.
//

#include "SLCInstruction.hpp"

SLCInstruction::SLCInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void SLCInstruction::Do() {
    int to = stoi(_speur->PopStack());
    int from = stoi(_speur->PopStack());

    std::string val = _speur->PopStack();
    std::string sub = val.substr(from, (to - from));
    _speur->PushStack(sub);
}
