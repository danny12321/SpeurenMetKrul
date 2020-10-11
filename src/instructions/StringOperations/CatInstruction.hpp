//
// Created by Danny on 10-10-2020.
//

#ifndef SPEURENMETKRUL_CATINSTRUCTION_HPP
#define SPEURENMETKRUL_CATINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class CatInstruction : public BaseInstruction {
public:
    CatInstruction(Speur* speur, std::string line);
    void Prepare() override {};
    void Do() override;
};


#endif //SPEURENMETKRUL_CATINSTRUCTION_HPP
