//
// Created by Danny on 12-10-2020.
//

#ifndef SPEURENMETKRUL_MODINSTRUCTION_HPP
#define SPEURENMETKRUL_MODINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class ModInstruction : public BaseInstruction {
public:
    ModInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};

#endif //SPEURENMETKRUL_MODINSTRUCTION_HPP
