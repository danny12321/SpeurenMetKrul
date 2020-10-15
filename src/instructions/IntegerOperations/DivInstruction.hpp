//
// Created by Danny on 12-10-2020.
//

#ifndef SPEURENMETKRUL_DIVINSTRUCTION_HPP
#define SPEURENMETKRUL_DIVINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"


class DivInstruction : public BaseInstruction {
public:
    DivInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};


#endif //SPEURENMETKRUL_DIVINSTRUCTION_HPP
