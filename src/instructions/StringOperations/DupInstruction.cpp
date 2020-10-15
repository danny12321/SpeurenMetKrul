//
// Created by Danny on 10-10-2020.
//

#include "DupInstruction.hpp"

DupInstruction::DupInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void DupInstruction::Do() {
    std::cout << "Dub instruction: " << std::endl;
    _speur->Stack.push_back(_speur->GetFromStack(0, 1));
}
