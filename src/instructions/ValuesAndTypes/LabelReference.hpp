//
// Created by Danny on 6-10-2020.
//

#ifndef SPEURENMETKRUL_LABELREFERENCE_HPP
#define SPEURENMETKRUL_LABELREFERENCE_HPP


#include "../BaseInstruction.hpp"
#include <iostream>
#include "../../Speur.hpp"

class LabelReference : public BaseInstruction {
public:
    LabelReference(Speur *speur, std::string line);

    void Prepare() override {};

    void Do() override;
};


#endif //SPEURENMETKRUL_LABELREFERENCE_HPP
