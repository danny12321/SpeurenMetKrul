//
// Created by Danny on 15-10-2020.
//

#ifndef SPEURENMETKRUL_ROTINSTRUCTION_HPP
#define SPEURENMETKRUL_ROTINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class RotInstruction : public BaseInstruction {
private:
    std::string ROT13(std::string source);
public:
    RotInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};


#endif //SPEURENMETKRUL_ROTINSTRUCTION_HPP
