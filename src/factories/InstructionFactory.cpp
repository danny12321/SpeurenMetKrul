//
// Created by Danny on 5-10-2020.
//


#include "InstructionFactory.hpp"

bool is_number(const std::string &s) {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

BaseInstruction *InstructionFactory::GetInstruction(std::string instruction) {
    if (instruction[0] == '\\') {
        return (BaseInstruction *) new TextInstruction(instruction);
    } else if (instruction[0] == '=') {
        return (BaseInstruction *) new VariableAssignment(instruction);
    } else if (instruction[0] == '$') {
        return (BaseInstruction *) new VariableReference(instruction);
    } else if (is_number(instruction)) {
        return (BaseInstruction *) new Digits(instruction);
    } else if (instruction[0] == ':') {
        return (BaseInstruction *) new LabelDefinition(instruction);
    }else {
        std::cout << "DONT KNOW " << instruction << " BUT WILL PUT IN ON THE TEXTINSTRUCTION";
        return (BaseInstruction *) new TextInstruction(instruction);
    }

    throw std::runtime_error{"I don't know the " + instruction + " instruction"};
}

