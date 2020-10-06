//
// Created by Danny on 5-10-2020.
//

#include "Speur.hpp"


Speur Speur::_instance;

void Speur::Init() {
    auto instructions = GetInstructions();
    // EERST LABELS UITLEZEN
    Run(instructions);

    std::cout << "------------------------------" << std::endl;
    std::cout << "VARS" << std::endl;

    for (auto const &imap: _vars)
        std::cout << imap.first << ": " << imap.second << std::endl;

    std::cout << "------------------------------" << std::endl;
    std::cout << "STACK:" << std::endl;

    for (auto const &item: _stack)
        std::cout << item << std::endl;
}

void Speur::Run(std::vector<std::string> instructions) {
    InstructionFactory instruction_factory;
    int index = 0;

    while (instructions.size() - 1 > index) {
        try {
            std::string line = instructions[index];
            std::unique_ptr<BaseInstruction> instruction{instruction_factory.GetInstruction(line)};

            instruction->Do();
            index++;
        } catch (const std::exception &err) {
            std::cerr << err.what() << std::endl;
            index++;
        }
    }
}

void Speur::AddToStack(std::string line) {
    _stack.push_back(line);
}

std::vector<std::string> Speur::GetInstructions() {
    std::vector<std::string> instructions;
    CurlRequest req{};
    auto res = req.request("https://www.swiftcoder.nl/cpp1/start.txt");

    auto ss = std::stringstream{res};
    for (std::string line; std::getline(ss, line, '\n');) {
        instructions.push_back(line);
    }

    return instructions;
}

void Speur::SetVariable(std::string key, std::string value) {
    std::cout << "SET: " << key << " TO: " << value << std::endl;
    _vars[key] = value;
}

std::string Speur::GetVariable(std::string key) {
    std::cout << "GET VAR " << key << ": " << _vars[key] << std::endl;
    return _vars[key];
}

std::string Speur::GetFromStack(int index) {
    return _stack[_stack.size() - 1 - index];
}

void Speur::RemoveFromStack(int index) {
    _stack.erase(_stack.begin() + _stack.size() - 1 - index);
}
