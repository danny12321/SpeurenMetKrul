//
// Created by Danny on 12-10-2020.
//

#ifndef SPEURENMETKRUL_GGEINSTRUCTION_HPP
#define SPEURENMETKRUL_GGEINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class GGEInstruction : public BaseInstruction {
public:
    GGEInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};


#endif //SPEURENMETKRUL_GGEINSTRUCTION_HPP
