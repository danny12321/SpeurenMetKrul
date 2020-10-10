//
// Created by Danny on 6-10-2020.
//

#ifndef SPEURENMETKRUL_SPEUR_HPP
#define SPEURENMETKRUL_SPEUR_HPP

#include <string>
#include <vector>
#include <map>
#include "factories/InstructionFactory.hpp"
#include "CurlRequest.hpp"

class Speur {
private:

    void Run(std::vector<std::string>);

public:
    void Init(std::vector<std::string> instructions);

    int GetCurrentStackIndex();

    std::string RemoveFromStack(int index_from_last);

    std::string GetFromStack(int index, bool reverse);

    std::vector<std::string> Stack;

    std::map<std::string, std::string> Vars;

    std::map<std::string, int> Labels;
};

#endif //SPEURENMETKRUL_SPEUR_HPP
