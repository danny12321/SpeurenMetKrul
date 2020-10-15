//
// Created by Danny on 12-10-2020.
//

#ifndef SPEURENMETKRUL_MULINSTRUCTION_HPP
#define SPEURENMETKRUL_MULINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class MulInstruction : public BaseInstruction {
public:
    MulInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};


#endif //SPEURENMETKRUL_MULINSTRUCTION_HPP
