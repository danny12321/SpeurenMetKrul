//
// Created by Danny on 6-10-2020.
//

#ifndef SPEURENMETKRUL_LABELDEFINITION_HPP
#define SPEURENMETKRUL_LABELDEFINITION_HPP

#include <string>
#include <vector>
#include "../BaseInstruction.hpp"
#include <iostream>
#include "../../Speur.hpp"

class LabelDefinition : public BaseInstruction {
public:
    LabelDefinition(std::string line);
    void Do() override;
};


#endif //SPEURENMETKRUL_LABELDEFINITION_HPP
