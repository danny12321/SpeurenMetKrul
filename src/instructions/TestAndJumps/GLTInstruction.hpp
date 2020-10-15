//
// Created by Danny on 12-10-2020.
//

#ifndef SPEURENMETKRUL_GLTINSTRUCTION_HPP
#define SPEURENMETKRUL_GLTINSTRUCTION_HPP

#include "../BaseInstruction.hpp"
#include "../../Speur.hpp"

class GLTInstruction : public BaseInstruction {
public:
    GLTInstruction(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};


#endif //SPEURENMETKRUL_GLTINSTRUCTION_HPP
