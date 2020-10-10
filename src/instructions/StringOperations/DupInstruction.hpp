//
// Created by Danny on 10-10-2020.
//

#ifndef SPEURENMETKRUL_DUPINSTRUCTION_HPP
#define SPEURENMETKRUL_DUPINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class DupInstruction : public BaseInstruction {
public:
    DupInstruction(Speur* speur, std::string line);
    void Do() override;
};


#endif //SPEURENMETKRUL_DUPINSTRUCTION_HPP
