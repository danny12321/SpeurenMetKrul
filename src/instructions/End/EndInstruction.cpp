//
// Created by Danny on 15-10-2020.
//

#include "EndInstruction.hpp"

EndInstruction::EndInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void EndInstruction::Do() {
    _speur->SetSecretMessage(_speur->RemoveFromStack(0));
}
