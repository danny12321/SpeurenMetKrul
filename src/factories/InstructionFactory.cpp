//
// Created by Danny on 5-10-2020.
//


#include "InstructionFactory.hpp"
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

InstructionFactory::InstructionFactory(Speur *speur) {
    _speur = speur;
}

bool is_number(const std::string &s) {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

BaseInstruction *InstructionFactory::GetInstruction(std::string instruction) {
    // Values & Types
    if (is_number(instruction)) return new Digits(_speur, instruction);
    if (instruction[0] == '\\') return new TextInstruction(_speur, instruction);
    if (instruction[0] == ':') return new LabelDefinition(_speur, instruction);
    if (instruction[0] == '>') return new LabelReference(_speur, instruction);
    if (instruction[0] == '=') return new VariableAssignment(_speur, instruction);
    if (instruction[0] == '$') return new VariableReference(_speur, instruction);

    // Integer operaties
    if (instruction == "add") return new AddInstruction(_speur, instruction);
    if (instruction == "sub") return new SubInstruction(_speur, instruction);
    if (instruction == "mul") return new MulInstruction(_speur, instruction);
    if (instruction == "div") return new DivInstruction(_speur, instruction);
    if (instruction == "mod") return new ModInstruction(_speur, instruction);
    if (instruction == "neg") return new NegInstruction(_speur, instruction);
    if (instruction == "abs") return new AbsInstruction(_speur, instruction);
    if (instruction == "inc") return new IncInstruction(_speur, instruction);
    if (instruction == "dec") return new DecInstruction(_speur, instruction);

    // String operaties
    if (instruction == "dup") return new DupInstruction(_speur, instruction);
    if (instruction == "rev") return new RevInstruction(_speur, instruction);
    if (instruction == "slc") return new SLCInstruction(_speur, instruction);
    if (instruction == "idx") return new IDXInstruction(_speur, instruction);
    if (instruction == "cat") return new CatInstruction(_speur, instruction);
    if (instruction == "len") return new LenInstruction(_speur, instruction);
    if (instruction == "rot") return new RotInstruction(_speur, instruction);
    if (instruction == "enl") return new EnlInstruction(_speur, instruction);

    // Tests & Jumps
    if (instruction == "gto") return new GTOInstruction(_speur, instruction);
    if (instruction == "geq") return new GEQInstruction(_speur, instruction);
    if (instruction == "gne") return new GNEInstruction(_speur, instruction);
    if (instruction == "glt") return new GLTInstruction(_speur, instruction);
    if (instruction == "gle") return new GLEInstruction(_speur, instruction);
    if (instruction == "ggt") return new GGTInstruction(_speur, instruction);
    if (instruction == "gge") return new GGEInstruction(_speur, instruction);

    // Functies
    if (instruction == "fun") return new FunInstruction(_speur, instruction);
    if (instruction == "ret") return new RetInstruction(_speur, instruction);

    // Eindoplossing
    if (instruction == "end") return new EndInstruction(_speur, instruction);

    throw std::runtime_error("Instruction " + instruction + " not found");
}