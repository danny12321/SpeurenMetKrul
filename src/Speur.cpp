//
// Created by Danny on 5-10-2020.
//

#include "Speur.hpp"
#include "factories/InstructionFactory.hpp"
#include "CurlRequest.hpp"
#include <memory>

Speur::Speur(const std::string &url) {
    std::cout << "Loading " << url << std::endl;

    CurlRequest req;
    _instructions = req.GetInstructions(url);
}

std::string Speur::Run() {
    std::unique_ptr<InstructionFactory> instruction_factory{new InstructionFactory(this)};

    for (_instructionIndex = 0; _instructionIndex < _instructions.size(); _instructionIndex++) {
        std::unique_ptr<BaseInstruction> instruction{
                instruction_factory->GetInstruction(_instructions[_instructionIndex])};
        instruction->Prepare();
    }

    for (_instructionIndex = 0; _instructionIndex < _instructions.size(); _instructionIndex++) {
        try {
            std::string line = _instructions[_instructionIndex];
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

void Speur::PushStack(const std::string &value) noexcept {
    _stack.push_back(value);
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

void Speur::PushCallStack(int value) noexcept {
    _callStack.push_back(value);
}

void Speur::SetVar(const std::string &key, const std::string &value) noexcept {
    _vars[key] = value;
}

std::string Speur::GetVar(const std::string &key) {
    return _vars[key];
}

void Speur::SetLabel(const std::string &key, int value) noexcept {
    _labels[key] = value;
}

int Speur::GetLabel(const std::string &key) {
    return _labels[key];
}
