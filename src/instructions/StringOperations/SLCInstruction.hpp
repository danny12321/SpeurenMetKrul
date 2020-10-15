//
// Created by Danny on 15-10-2020.
//

#ifndef SPEURENMETKRUL_SLCINSTRUCTION_HPP
#define SPEURENMETKRUL_SLCINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class SLCInstruction : public BaseInstruction {
public:
    SLCInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};

#endif //SPEURENMETKRUL_SLCINSTRUCTION_HPP
