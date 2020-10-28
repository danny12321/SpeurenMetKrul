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
    Speur(const std::string &url);

    std::string Run();

    [[nodiscard]] inline int GetInstructionIndex() const { return _instructionIndex; }

    inline void SetInstructionIndex(int value) noexcept { _instructionIndex = value; }

    [[nodiscard]] inline std::string GetSecretMessage() const noexcept { return _secret; };

    inline void SetSecretMessage(const std::string &message) noexcept { _secret = message; };

    std::string PopStack();

    void PushStack(const std::string &value) noexcept;

    int PopCallStack();

    void PushCallStack(int value) noexcept;

    void SetVar(const std::string &key, const std::string &value) noexcept;

    [[nodiscard]] std::string GetVar(const std::string &key);

    void SetLabel(const std::string &key, const int &value) noexcept;

    [[nodiscard]] int GetLabel(const std::string &key);
};

#endif //SPEURENMETKRUL_SPEUR_HPP
