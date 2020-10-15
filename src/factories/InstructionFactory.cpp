//
// Created by Danny on 5-10-2020.
//


#include "InstructionFactory.hpp"

InstructionFactory::InstructionFactory(Speur *speur) {
    _speur = speur;
}

bool is_number(const std::string &s) {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

BaseInstruction *InstructionFactory::GetInstruction(std::string instruction) {
    if (instruction[0] == '\\') return new TextInstruction(_speur, instruction);
    if (instruction[0] == '=')  return new VariableAssignment(_speur, instruction);
    if (instruction[0] == '$')  return new VariableReference(_speur, instruction);
    if (is_number(instruction)) return new Digits(_speur, instruction);
    if (instruction[0] == ':')  return new LabelDefinition(_speur, instruction);
    if (instruction[0] == '>')  return new LabelReference(_speur, instruction);
    if (instruction == "add")   return new AddInstruction(_speur, instruction);
    if (instruction == "dup")   return new DupInstruction(_speur, instruction);
    if (instruction == "dec")   return new DecInstruction(_speur, instruction);
    if (instruction == "cat")   return new CatInstruction(_speur, instruction);
    if (instruction == "gne")   return new GNEInstruction(_speur, instruction);
    if (instruction == "geq")   return new GEQInstruction(_speur, instruction);
    if (instruction == "gto")   return new GTOInstruction(_speur, instruction);
    if (instruction == "gge")   return new GGEInstruction(_speur, instruction);
    if (instruction == "ggt")   return new GGTInstruction(_speur, instruction);
    if (instruction == "gle")   return new GLEInstruction(_speur, instruction);
    if (instruction == "glt")   return new GLTInstruction(_speur, instruction);
    if (instruction == "mod")   return new ModInstruction(_speur, instruction);
    if (instruction == "div")   return new DivInstruction(_speur, instruction);
    if (instruction == "mul")   return new MulInstruction(_speur, instruction);
    if (instruction == "rev")   return new RevInstruction(_speur, instruction);
    if (instruction == "fun")   return new FunInstruction(_speur, instruction);
    if (instruction == "ret")   return new RetInstruction(_speur, instruction);
    if (instruction == "idx")   return new IDXInstruction(_speur, instruction);

    std::cerr << "DONT KNOW " << instruction << " BUT WILL PUT IN ON THE TEXTINSTRUCTION" << std::endl;
    return new TextInstruction(_speur, "\\" + instruction);
}