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
    std::string _secret;

    std::vector<std::string> _instructions;

public:
    Speur(std::string url);

    std::string Run();

    int InstructionIndex = 0;

    std::string RemoveFromStack(int index_from_last);

    std::vector<std::string> Stack;

    std::vector<int> CallStack;

    std::map<std::string, std::string> Vars;

    std::map<std::string, int> Labels;


    void SetSecretMessage(std::string message);

    std::string GetSecretMessage();
};

#endif //SPEURENMETKRUL_SPEUR_HPP
