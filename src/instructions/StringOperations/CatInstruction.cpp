//
// Created by Danny on 10-10-2020.
//

#include "CatInstruction.hpp"

CatInstruction::CatInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void CatInstruction::Do() {
    std::string val1 = _speur->PopStack();
    std::string val2 = _speur->PopStack();

    _speur->PushStack(val2 + val1);
}
