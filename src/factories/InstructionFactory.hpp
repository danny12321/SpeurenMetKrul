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
#include "../instructions/IntegerOperations/MulInstruction.hpp"
#include "../instructions/StringOperations/RevInstruction.hpp"
#include "../instructions/Functions/FunInstruction.hpp"
#include "../instructions/Functions/RetInstruction.hpp"
#include "../instructions/StringOperations/IDXInstruction.hpp"
#include "../instructions/StringOperations/LenInstruction.hpp"
#include "../instructions/StringOperations/SLCInstruction.hpp"
#include "../instructions/IntegerOperations/IncInstruction.hpp"
#include "../instructions/IntegerOperations/SubInstruction.hpp"
#include "../instructions/IntegerOperations/NegInstruction.hpp"
#include "../instructions/IntegerOperations/AbsInstruction.hpp"
#include "../instructions/StringOperations/RotInstruction.hpp"
#include "../instructions/StringOperations/EnlInstruction.hpp"
#include "../instructions/End/EndInstruction.hpp"
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
