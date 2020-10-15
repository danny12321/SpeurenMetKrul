//
// Created by Danny on 12-10-2020.
//

#ifndef SPEURENMETKRUL_REVINSTRUCTION_HPP
#define SPEURENMETKRUL_REVINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class RevInstruction : public BaseInstruction {
public:
    RevInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};

#endif //SPEURENMETKRUL_REVINSTRUCTION_HPP
