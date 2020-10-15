//
// Created by Danny on 15-10-2020.
//

#ifndef SPEURENMETKRUL_IDXINSTRUCTION_HPP
#define SPEURENMETKRUL_IDXINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class IDXInstruction : public BaseInstruction {
public:
    IDXInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};

#endif //SPEURENMETKRUL_IDXINSTRUCTION_HPP
