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

    int _instructionIndex = 0;


public:
    Speur(std::string url);

    std::string Run();

    inline int GetInstructionIndex() {return _instructionIndex;}
    inline void SetInstructionIndex(int value) { _instructionIndex = value;}

    inline std::string GetSecretMessage() {return _secret;};
    inline void SetSecretMessage(std::string message) {_secret = message;};


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
