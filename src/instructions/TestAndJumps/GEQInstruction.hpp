//
// Created by Danny on 10-10-2020.
//

#ifndef SPEURENMETKRUL_GEQINSTRUCTION_HPP
#define SPEURENMETKRUL_GEQINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class GEQInstruction : public BaseInstruction {
public:
    GEQInstruction(Speur* speur, std::string line);
    void Prepare() override {};
    void Do() override;
};


#endif //SPEURENMETKRUL_GEQINSTRUCTION_HPP
