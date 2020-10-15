//
// Created by Danny on 15-10-2020.
//

#ifndef SPEURENMETKRUL_NEGINSTRUCTION_HPP
#define SPEURENMETKRUL_NEGINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class NegInstruction : public BaseInstruction {
public:
    NegInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};

#endif //SPEURENMETKRUL_NEGINSTRUCTION_HPP
