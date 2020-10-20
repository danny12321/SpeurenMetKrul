//
// Created by Danny on 5-10-2020.
//

#include "Speur.hpp"
#include "factories/InstructionFactory.hpp"
#include "CurlRequest.hpp"
#include <memory>

Speur::Speur(std::string url) {
    std::cout << "Loading " << url << std::endl;

    CurlRequest req;
    _instructions = req.GetInstructions(url);
}

std::string Speur::Run() {
    std::unique_ptr<InstructionFactory> instruction_factory{new InstructionFactory(this)};

    for (InstructionIndex = 0; InstructionIndex < _instructions.size(); InstructionIndex++) {
        std::unique_ptr<BaseInstruction> instruction{
                instruction_factory->GetInstruction(_instructions[InstructionIndex])};
        instruction->Prepare();
    }

    for (InstructionIndex = 0; InstructionIndex < _instructions.size(); InstructionIndex++) {
        try {
            std::string line = _instructions[InstructionIndex];
            std::unique_ptr<BaseInstruction> instruction{instruction_factory->GetInstruction(line)};
            instruction->Do();
        } catch (const std::exception &err) {
            std::cerr << err.what() << std::endl;
        }
    }

    return PopStack();
}

std::string Speur::PopStack() {
    if (_stack.empty()) {
        return "";
    } else {
        std::string temp = _stack.back();
        _stack.pop_back();
        return temp;
    }
}

void Speur::PushStack(const std::string& value) {
    _stack.push_back(value);
}

void Speur::SetSecretMessage(std::string message) {
    _secret = message;
}

std::string Speur::GetSecretMessage() {
    return _secret;
}

int Speur::PopCallStack() {
    if (_callStack.empty()) {
        return -1;
    } else {
        int temp = _callStack.back();
        _callStack.pop_back();
        return temp;
    }
}

void Speur::PushCallStack(int value) {
    _callStack.push_back(value);
}

void Speur::SetVar(const std::string& key, const std::string& value) {
    _vars[key] = value;
}

std::string Speur::GetVar(const std::string &key) {
    return _vars[key];
}
