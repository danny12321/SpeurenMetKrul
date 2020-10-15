//
// Created by Danny on 15-10-2020.
//

#ifndef SPEURENMETKRUL_ENLINSTRUCTION_HPP
#define SPEURENMETKRUL_ENLINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class EnlInstruction : public BaseInstruction {
public:
    EnlInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};

#endif //SPEURENMETKRUL_ENLINSTRUCTION_HPP
