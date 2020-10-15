//
// Created by Danny on 15-10-2020.
//

#include "NegInstruction.hpp"

NegInstruction::NegInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void NegInstruction::Do() {
    std::cout << "Neg instruction: " << std::endl;
    int val = stoi(_speur->RemoveFromStack(0));
    val = val * -1;
    _speur->Stack.push_back(std::to_string(val));
}
