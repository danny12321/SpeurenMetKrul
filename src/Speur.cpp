//
// Created by Danny on 5-10-2020.
//

#include "Speur.hpp"

void Speur::Init(std::string url) {
    std::cout << "Loading " << url << std::endl;

    CurlRequest req;
    auto instructions = req.GetInstructions(url);
    Run(instructions);
}

void Speur::Print() {
    std::cout << "------------------------------" << std::endl;
    std::cout << "VARS" << std::endl;

    for (auto const &imap: Vars)
        std::cout << imap.first << ": " << imap.second << std::endl;

    std::cout << "------------------------------" << std::endl;
    std::cout << "Labels" << std::endl;

    for (auto const &imap: Labels)
        std::cout << imap.first << ": " << imap.second << std::endl;

    std::cout << "------------------------------" << std::endl;
    std::cout << "CALLSTACK:" << std::endl;

    for (auto const &item: CallStack)
        std::cout << item << std::endl;

    std::cout << "------------------------------" << std::endl;
    std::cout << "STACK:" << std::endl;

    for (auto const &item: Stack)
        std::cout << item << std::endl;

}

void Speur::Run(std::vector<std::string> instructions) {
    std::unique_ptr<InstructionFactory> instruction_factory{new InstructionFactory(this)};
    InstructionIndex = 0;

    std::cout << "Prepare: " << std::endl;
    while (instructions.size() > InstructionIndex) {
        try {
            std::string line = instructions[InstructionIndex];
            std::unique_ptr<BaseInstruction> instruction{instruction_factory->GetInstruction(line)};

            instruction->Prepare();
            InstructionIndex++;
        } catch (const std::exception &err) {
            std::cerr << err.what() << std::endl;
            InstructionIndex++;
        }
    }

    std::cout << "\n\n\n";

    InstructionIndex = 0;
    std::cout << "Run: " << std::endl;
    while (instructions.size() > InstructionIndex) {
        try {
            std::string line = instructions[InstructionIndex];
            std::cout << InstructionIndex << " --> " << line << std::endl;
            std::unique_ptr<BaseInstruction> instruction{instruction_factory->GetInstruction(line)};
            instruction->Do();
            InstructionIndex++;
        } catch (const std::exception &err) {
            std::cerr << err.what() << std::endl;
            InstructionIndex++;
        }

        Print();
        std::cout << "\n\n\n\n" << std::endl;
    }

    std::string url = baseurl + GetFromStack(0, true);
    std::cout << "Found url:  " << url << std::endl;
    system("pause");
    Speur speur;
    speur.Init(url);
}

std::string Speur::GetFromStack(int index, bool reverse) {
    if (reverse) {
        return Stack[Stack.size() - 1 - index];
    } else {
        return Stack[index];
    }
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

int Speur::GetCurrentStackIndex() {
    if (Stack.size() == 0) {
        return 0;
    }

    return Stack.size() - 1;
}
