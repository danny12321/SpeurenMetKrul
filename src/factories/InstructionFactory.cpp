//
// Created by Danny on 5-10-2020.
//


#include "InstructionFactory.hpp"


BaseInstruction *InstructionFactory::GetInstruction(std::string instruction) {
    if (instruction[0] == '\\') {
        return (BaseInstruction *) new TextInstruction(instruction);
    } else if (instruction[0] == '=') {
        return (BaseInstruction *) new VariableAssignment(instruction);
    }else if (instruction[0] == '$') {
        return (BaseInstruction *) new VariableReference(instruction);
    } else {
        std::cout << "DONT KNOW " << instruction << " BUT WILL PUT IN ON THE TEXTINSTRUCTION";
        return (BaseInstruction *) new TextInstruction(instruction);
    }

    throw std::runtime_error{"I don't know the " + instruction + " instruction"};
}
