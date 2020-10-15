//
// Created by Danny on 13-10-2020.
//

#ifndef SPEURENMETKRUL_FUNINSTRUCTION_HPP
#define SPEURENMETKRUL_FUNINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class FunInstruction : public BaseInstruction {
public:
    FunInstruction(Speur *speur, std::string line);

    void Prepare() override;

    void Do() override;
};

#endif //SPEURENMETKRUL_FUNINSTRUCTION_HPP
