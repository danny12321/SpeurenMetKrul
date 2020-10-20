//
// Created by Danny on 5-10-2020.
//
#ifndef SPEURENMETKRUL_INSTRUCTIONFACTORY_HPP
#define SPEURENMETKRUL_INSTRUCTIONFACTORY_HPP

#include "../instructions/BaseInstruction.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

class InstructionFactory {
private:
    Speur *_speur;
public:
    InstructionFactory(Speur *speur);

    BaseInstruction *GetInstruction(std::string instruction);
};


#endif //SPEURENMETKRUL_INSTRUCTIONFACTORY_HPP
