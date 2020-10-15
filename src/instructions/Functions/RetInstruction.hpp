//
// Created by Danny on 13-10-2020.
//

#ifndef SPEURENMETKRUL_RETINSTRUCTION_HPP
#define SPEURENMETKRUL_RETINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class RetInstruction : public BaseInstruction {
public:
    RetInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};

#endif //SPEURENMETKRUL_RETINSTRUCTION_HPP
