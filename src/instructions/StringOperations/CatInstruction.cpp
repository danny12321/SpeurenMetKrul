//
// Created by Danny on 10-10-2020.
//

#include "CatInstruction.hpp"

CatInstruction::CatInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void CatInstruction::Do() {
    std::cout << "Cat instruction: " << std::endl;
    std::string val1 = _speur->RemoveFromStack(0);
    std::string val2 = _speur->RemoveFromStack(0);

    _speur->Stack.push_back(val2 + val1);
}
