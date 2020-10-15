//
// Created by Danny on 15-10-2020.
//

#ifndef SPEURENMETKRUL_SUBINSTRUCTION_HPP
#define SPEURENMETKRUL_SUBINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class SubInstruction : public BaseInstruction {
public:
    SubInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};

#endif //SPEURENMETKRUL_SUBINSTRUCTION_HPP
