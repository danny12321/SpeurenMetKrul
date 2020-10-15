//
// Created by Danny on 5-10-2020.
//

#include "Speur.hpp"

Speur::Speur(std::string url) {
    std::cout << "Loading " << url << std::endl;

    CurlRequest req;
    _instructions = req.GetInstructions(url);
}

std::string Speur::Run() {
    std::unique_ptr<InstructionFactory> instruction_factory{new InstructionFactory(this)};
    InstructionIndex = 0;

    while (_instructions.size() > InstructionIndex) {
        try {
            std::string line = _instructions[InstructionIndex];
            std::unique_ptr<BaseInstruction> instruction{instruction_factory->GetInstruction(line)};
            instruction->Prepare();
            InstructionIndex++;
        } catch (const std::exception &err) {
            std::cerr << err.what() << std::endl;
            InstructionIndex++;
        }
    }

    InstructionIndex = 0;
    while (_instructions.size() > InstructionIndex) {
        try {
            std::string line = _instructions[InstructionIndex];
            std::unique_ptr<BaseInstruction> instruction{instruction_factory->GetInstruction(line)};
            instruction->Do();
            InstructionIndex++;
        } catch (const std::exception &err) {
            std::cerr << err.what() << std::endl;
            InstructionIndex++;
        }

    }

    return RemoveFromStack(0);
}

std::string Speur::RemoveFromStack(int index_from_last) {
    if (Stack.size() > index_from_last) {
        std::string temp = Stack[Stack.size() - 1 - index_from_last];
        Stack.erase(Stack.begin() + Stack.size() - 1 - index_from_last);
        return temp;
    } else {
        return "";
    }
}

void Speur::SetSecretMessage(std::string message) {
    _secret = message;
}

std::string Speur::GetSecretMessage() {
    return _secret;
}