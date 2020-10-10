//
// Created by Danny on 5-10-2020.
//
#ifndef SPEURENMETKRUL_INSTRUCTIONFACTORY_HPP
#define SPEURENMETKRUL_INSTRUCTIONFACTORY_HPP


#include "../instructions/BaseInstruction.hpp"
#include "../instructions/ValuesAndTypes/TextInstruction.hpp"
#include "../instructions/ValuesAndTypes/VariableAssignment.hpp"
#include "../instructions/ValuesAndTypes/VariableReference.hpp"
#include "../instructions/ValuesAndTypes/Digits.hpp"
#include "../instructions/ValuesAndTypes/LabelDefinition.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

class InstructionFactory {
public:
    BaseInstruction* GetInstruction(std::string instruction);
};


#endif //SPEURENMETKRUL_INSTRUCTIONFACTORY_HPP
