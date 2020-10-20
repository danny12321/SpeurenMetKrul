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

    std::map<std::string, std::string> _vars;

    std::map<std::string, int> _labels;

public:
    Speur(std::string url);

    std::string Run();

    int InstructionIndex = 0;




    void SetSecretMessage(std::string message);

    std::string GetSecretMessage();

    std::string PopStack();
    void PushStack(const std::string &value);

    int PopCallStack();
    void PushCallStack(int value);

    void SetVar(const std::string &key, const std::string &value);
    std::string GetVar(const std::string &key);

    void SetLabel(const std::string &key, const int &value);
    int GetLabel(const std::string &key);
};

#endif //SPEURENMETKRUL_SPEUR_HPP
