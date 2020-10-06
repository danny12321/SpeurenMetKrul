//
// Created by Danny on 6-10-2020.
//

#ifndef SPEURENMETKRUL_VARIABLEREFERENCE_HPP
#define SPEURENMETKRUL_VARIABLEREFERENCE_HPP

#include "../BaseInstruction.hpp"
#include <iostream>
#include "../../Speur.hpp"

class VariableReference : public BaseInstruction {
public:
    VariableReference(std::string line);
    void Do() override;
};


#endif //SPEURENMETKRUL_VARIABLEREFERENCE_HPP
