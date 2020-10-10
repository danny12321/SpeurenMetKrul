//
// Created by Danny on 5-10-2020.
//

#ifndef SPEURENMETKRUL_TEXTINSTRUCTION_HPP
#define SPEURENMETKRUL_TEXTINSTRUCTION_HPP


#include "../BaseInstruction.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "../../Speur.hpp"

class TextInstruction : public BaseInstruction {
public:
    TextInstruction(Speur* speur, std::string line);
    void Do() override;
};


#endif //SPEURENMETKRUL_TEXTINSTRUCTION_HPP
