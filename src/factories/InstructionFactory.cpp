//
// Created by Danny on 5-10-2020.
//


#include "InstructionFactory.hpp"

InstructionFactory::InstructionFactory(Speur* speur) {
    _speur = speur;
}

bool is_number(const std::string &s) {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

BaseInstruction *InstructionFactory::GetInstruction(std::string instruction) {
    if (instruction[0] == '\\') {
        return (BaseInstruction *) new TextInstruction(_speur, instruction);
    } else if (instruction[0] == '=') {
        return (BaseInstruction *) new VariableAssignment(_speur, instruction);
    } else if (instruction[0] == '$') {
        return (BaseInstruction *) new VariableReference(_speur, instruction);
    } else if (is_number(instruction)) {
        return (BaseInstruction *) new Digits(_speur, instruction);
    } else if (instruction[0] == ':') {
        return (BaseInstruction *) new LabelDefinition(_speur, instruction);
    }else if (instruction[0] == '>') {
        return (BaseInstruction *) new LabelReference(_speur, instruction);
    } else if(instruction == "add") {
        return (BaseInstruction *) new AddInstruction(_speur, instruction);
    } else if(instruction == "dup") {
        return (BaseInstruction *) new DupInstruction(_speur, instruction);
    } else if(instruction == "dec") {
        return (BaseInstruction *) new DecInstruction(_speur, instruction);
    } else if(instruction == "cat") {
        return (BaseInstruction *) new CatInstruction(_speur, instruction);
    } else if(instruction == "gne") {
        return (BaseInstruction *) new GNEInstruction(_speur, instruction);
    } else {
        std::cerr << "DONT KNOW " << instruction << " BUT WILL PUT IN ON THE TEXTINSTRUCTION" << std::endl;
        return (BaseInstruction *) new TextInstruction(_speur, instruction);
    }

    throw std::runtime_error{"I don't know the " + instruction + " instruction"};
}