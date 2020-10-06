//
// Created by Danny on 6-10-2020.
//

#ifndef SPEURENMETKRUL_SPEUR_HPP
#define SPEURENMETKRUL_SPEUR_HPP

#include <string>
#include <sstream>
#include <vector>
#include <map>
#include "factories/InstructionFactory.hpp"
#include "CurlRequest.hpp"

class Speur {
private:
    static Speur _instance;

    std::vector<std::string> _stack;

    std::map<std::string, std::string> _vars;

    std::map<std::string, int> _labels;

    std::vector<std::string> GetInstructions();

    void Run(std::vector<std::string>);

public:
    static Speur &get_instance() { return _instance; }

    void Init();

    void AddToStack(std::string line);

    void SetVariable(std::string key, std::string value);
    void SetLabel(std::string key, int value);

    int GetCurrentStackIndex();

    std::string GetVariable(std::string key);
    int GetLabel(std::string key);

    void RemoveFromStack(int index);

    std::string GetFromStack(int index, bool reverse);
};

#endif //SPEURENMETKRUL_SPEUR_HPP
