//
// Created by Danny on 5-10-2020.
//
#ifndef SPEURENMETKRUL_INSTRUCTIONFACTORY_HPP
#define SPEURENMETKRUL_INSTRUCTIONFACTORY_HPP


#include "../instructions/BaseInstruction.hpp"
#include "../instructions/IntegerOperations/AddInstruction.hpp"
#include "../instructions/ValuesAndTypes/TextInstruction.hpp"
#include "../instructions/ValuesAndTypes/VariableAssignment.hpp"
#include "../instructions/ValuesAndTypes/VariableReference.hpp"
#include "../instructions/ValuesAndTypes/Digits.hpp"
#include "../instructions/ValuesAndTypes/LabelDefinition.hpp"
#include "../instructions/StringOperations/DupInstruction.hpp"
#include "../instructions/IntegerOperations/DecInstruction.hpp"
#include "../instructions/StringOperations/CatInstruction.hpp"
#include "../instructions/TestAndJumps/GNEInstruction.hpp"
#include "../instructions/ValuesAndTypes/LabelReference.hpp"
#include "../instructions/TestAndJumps/GEQInstruction.hpp"
#include "../instructions/TestAndJumps/GTOInstruction.hpp"
#include "../instructions/TestAndJumps/GGTInstruction.hpp"
#include "../instructions/TestAndJumps/GGEInstruction.hpp"
#include "../instructions/TestAndJumps/GLEInstruction.hpp"
#include "../instructions/TestAndJumps/GLTInstruction.hpp"
#include "../instructions/IntegerOperations/ModInstruction.hpp"
#include "../instructions/IntegerOperations/DivInstruction.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

class InstructionFactory {
private:
    Speur* _speur;
public:
    InstructionFactory(Speur* speur);
    BaseInstruction* GetInstruction(std::string instruction);
};


#endif //SPEURENMETKRUL_INSTRUCTIONFACTORY_HPP
