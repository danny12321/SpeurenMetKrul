//
// Created by Danny on 5-10-2020.
//

#ifndef SPEURENMETKRUL_TEXTINSTRUCTION_HPP
#define SPEURENMETKRUL_TEXTINSTRUCTION_HPP


#include <string>
#include <vector>
#include "../BaseInstruction.hpp"
#include <iostream>
#include "../../Speur.hpp"

class TextInstruction : public BaseInstruction {
public:
    TextInstruction(std::string line);
    void Do() override;
};


#endif //SPEURENMETKRUL_TEXTINSTRUCTION_HPP
