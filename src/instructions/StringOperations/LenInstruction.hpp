//
// Created by Danny on 15-10-2020.
//

#ifndef SPEURENMETKRUL_LENINSTRUCTION_HPP
#define SPEURENMETKRUL_LENINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class LenInstruction : public BaseInstruction {
public:
    LenInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};

#endif //SPEURENMETKRUL_LENINSTRUCTION_HPP
