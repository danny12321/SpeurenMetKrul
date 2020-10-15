//
// Created by Danny on 15-10-2020.
//

#ifndef SPEURENMETKRUL_ENDINSTRUCTION_HPP
#define SPEURENMETKRUL_ENDINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class EndInstruction : public BaseInstruction {
public:
    EndInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};

#endif //SPEURENMETKRUL_ENDINSTRUCTION_HPP
