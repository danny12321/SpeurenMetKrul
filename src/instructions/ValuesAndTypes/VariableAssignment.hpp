//
// Created by Danny on 6-10-2020.
//

#ifndef SPEURENMETKRUL_VARIABLEASSIGNMENT_HPP
#define SPEURENMETKRUL_VARIABLEASSIGNMENT_HPP


#include "../BaseInstruction.hpp"
#include <iostream>
#include "../../Speur.hpp"

class VariableAssignment : public BaseInstruction {
public:
    VariableAssignment(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};


#endif //SPEURENMETKRUL_VARIABLEASSIGNMENT_HPP
