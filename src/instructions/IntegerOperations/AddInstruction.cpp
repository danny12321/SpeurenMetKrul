//
// Created by Danny on 10-10-2020.
//

#include "AddInstruction.hpp"

AddInstruction::AddInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void AddInstruction::Do() {
    std::cout << "Add instruction: " << std::endl;

    int index = _speur->GetCurrentStackIndex();
    int val1 = stoi(_speur->RemoveFromStack(index));
    int val2 = stoi(_speur->RemoveFromStack(index -1));


    _speur->Stack.push_back(std::to_string(val1 + val2));
}
