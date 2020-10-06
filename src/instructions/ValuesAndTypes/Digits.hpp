//
// Created by Danny on 6-10-2020.
//

#ifndef SPEURENMETKRUL_DIGITS_HPP
#define SPEURENMETKRUL_DIGITS_HPP

#include <string>
#include <vector>
#include "../BaseInstruction.hpp"
#include <iostream>
#include "../../Speur.hpp"

class Digits : public BaseInstruction {
public:
    Digits(std::string line);
    void Do() override;
};


#endif //SPEURENMETKRUL_DIGITS_HPP
