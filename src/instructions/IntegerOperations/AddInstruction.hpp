//
// Created by Danny on 10-10-2020.
//

#ifndef SPEURENMETKRUL_ADDINSTRUCTION_HPP
#define SPEURENMETKRUL_ADDINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class AddInstruction : public BaseInstruction {
public:
    AddInstruction(Speur* speur, std::string line);
    void Do() override;
};


#endif //SPEURENMETKRUL_ADDINSTRUCTION_HPP
