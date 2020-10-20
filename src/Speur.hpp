//
// Created by Danny on 6-10-2020.
//

#ifndef SPEURENMETKRUL_SPEUR_HPP
#define SPEURENMETKRUL_SPEUR_HPP

#include <string>
#include <vector>
#include <map>

class Speur {
private:
    std::string _secret;

    std::vector<std::string> _instructions;

    std::vector<std::string> _stack;

    std::vector<int> _callStack;


public:
    Speur(std::string url);

    std::string Run();

    int InstructionIndex = 0;


    std::map<std::string, std::string> Vars;

    std::map<std::string, int> Labels;


    void SetSecretMessage(std::string message);

    std::string GetSecretMessage();

    std::string PopStack();
    void PushStack(const std::string &value);

    int PopCallStack();
    void PushCallStack(int value);
};

#endif //SPEURENMETKRUL_SPEUR_HPP
