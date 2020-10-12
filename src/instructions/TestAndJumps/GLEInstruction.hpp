//
// Created by Danny on 12-10-2020.
//

#ifndef SPEURENMETKRUL_GLEINSTRUCTION_HPP
#define SPEURENMETKRUL_GLEINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class GLEInstruction : public BaseInstruction {
public:
    GLEInstruction(Speur* speur, std::string line);
    void Prepare() override {};
    void Do() override;
};


#endif //SPEURENMETKRUL_GLEINSTRUCTION_HPP
