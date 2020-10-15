//
// Created by Danny on 15-10-2020.
//

#ifndef SPEURENMETKRUL_INCINSTRUCTION_HPP
#define SPEURENMETKRUL_INCINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class IncInstruction : public BaseInstruction {
public:
    IncInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};

#endif //SPEURENMETKRUL_INCINSTRUCTION_HPP
