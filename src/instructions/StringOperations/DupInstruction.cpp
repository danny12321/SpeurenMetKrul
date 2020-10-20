//
// Created by Danny on 10-10-2020.
//

#include "DupInstruction.hpp"

DupInstruction::DupInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void DupInstruction::Do() {
    std::string val = _speur->PopStack();
    _speur->PushStack(val);
    _speur->PushStack(val);
}
