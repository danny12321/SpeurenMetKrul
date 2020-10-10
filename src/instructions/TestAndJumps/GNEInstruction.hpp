//
// Created by Danny on 10-10-2020.
//

#ifndef SPEURENMETKRUL_GNEINSTRUCTION_HPP
#define SPEURENMETKRUL_GNEINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class GNEInstruction : public BaseInstruction {
public:
    GNEInstruction(Speur* speur, std::string line);
    void Do() override;
};


#endif //SPEURENMETKRUL_GNEINSTRUCTION_HPP
