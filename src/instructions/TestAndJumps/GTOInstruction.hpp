//
// Created by Danny on 10-10-2020.
//

#ifndef SPEURENMETKRUL_GTOINSTRUCTION_HPP
#define SPEURENMETKRUL_GTOINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class GTOInstruction : public BaseInstruction {
public:
    GTOInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};


#endif //SPEURENMETKRUL_GTOINSTRUCTION_HPP
