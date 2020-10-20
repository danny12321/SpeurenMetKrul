//
// Created by Danny on 12-10-2020.
//

#include <algorithm>
#include "RevInstruction.hpp"

RevInstruction::RevInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void RevInstruction::Do() {
    std::string val = _speur->PopStack();
    std::reverse(val.begin(), val.end());
    _speur->PushStack(val);
}
