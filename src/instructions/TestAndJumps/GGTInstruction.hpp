//
// Created by Danny on 12-10-2020.
//

#ifndef SPEURENMETKRUL_GGTINSTRUCTION_HPP
#define SPEURENMETKRUL_GGTINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class GGTInstruction : public BaseInstruction {
public:
    GGTInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};


#endif //SPEURENMETKRUL_GGTINSTRUCTION_HPP
