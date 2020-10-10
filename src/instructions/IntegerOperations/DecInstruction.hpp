//
// Created by Danny on 10-10-2020.
//

#ifndef SPEURENMETKRUL_DECINSTRUCTION_HPP
#define SPEURENMETKRUL_DECINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class DecInstruction : public BaseInstruction {
public:
    DecInstruction(Speur* speur, std::string line);
    void Do() override;
};


#endif //SPEURENMETKRUL_DECINSTRUCTION_HPP
