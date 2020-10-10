//
// Created by Danny on 5-10-2020.
//

#include "Speur.hpp"

void Speur::Init(std::vector<std::string> instructions) {
    // EERST LABELS UITLEZEN
    Run(instructions);

    std::cout << "------------------------------" << std::endl;
    std::cout << "VARS" << std::endl;

    for (auto const &imap: Vars)
        std::cout << imap.first << ": " << imap.second << std::endl;

    std::cout << "------------------------------" << std::endl;
    std::cout << "STACK:" << std::endl;

    for (auto const &item: Stack)
        std::cout << item << std::endl;
}

void Speur::Run(std::vector<std::string> instructions) {
    std::unique_ptr<InstructionFactory> instruction_factory {new InstructionFactory(this)};
    int index = 0;

    while (instructions.size() - 1 > index) {
        try {
            std::string line = instructions[index];
            std::unique_ptr<BaseInstruction> instruction{instruction_factory->GetInstruction(line)};

            instruction->Do();
            index++;
        } catch (const std::exception &err) {
            std::cerr << err.what() << std::endl;
            index++;
        }
    }
}

void Speur::AddToStack(std::string line) {
    Stack.push_back(line);
}

void Speur::SetVariable(std::string key, std::string value) {
    std::cout << "SET VAR: " << key << " TO: " << value << std::endl;
    Vars[key] = value;
}

std::string Speur::GetVariable(std::string key) {
    std::cout << "GET VAR " << key << ": " << Vars[key] << std::endl;
    return Vars[key];
}

void Speur::SetLabel(std::string key, int value) {
    std::cout << "SET Label: " << key << " TO: " << value << " STACK SIZE " << Stack.size() << std::endl;
    Labels[key] = value;
}

int Speur::GetLabel(std::string key) {
    std::cout << "GET Label " << key << ": " << Vars[key] << std::endl;
    return Labels[key];
}

std::string Speur::GetFromStack(int index, bool reverse) {
    if (reverse) {
        return Stack[Stack.size() - 1 - index];
    } else {
        return Stack[index];
    }
}

std::string Speur::RemoveFromStack(int index) {
    if(Stack.size() > index) {
        std::string temp = Stack[ Stack.size() - 1 - index];
        Stack.erase(Stack.begin() + Stack.size() - 1 - index);
        return temp;
    } else {
        return "";
    }
}

int Speur::GetCurrentStackIndex() {
    if(Stack.size() == 0) {
        return 0;
    }
    return Stack.size() - 1;
}
