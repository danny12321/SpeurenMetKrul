//
// Created by Danny on 15-10-2020.
//

#ifndef SPEURENMETKRUL_ABSINSTRUCTION_HPP
#define SPEURENMETKRUL_ABSINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class AbsInstruction : public BaseInstruction {
public:
    AbsInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};

#endif //SPEURENMETKRUL_ABSINSTRUCTION_HPP
