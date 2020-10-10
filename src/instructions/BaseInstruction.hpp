//
// Created by Danny on 5-10-2020.
//

#ifndef SPEURENMETKRUL_BASEINSTRUCTION_HPP
#define SPEURENMETKRUL_BASEINSTRUCTION_HPP

#include <string>
class Speur;

class BaseInstruction {
protected:
    std::string _line;
    Speur* _speur;
public:
    BaseInstruction(Speur* speur, std::string line);
    virtual void Do() = 0;
};


#endif //SPEURENMETKRUL_BASEINSTRUCTION_HPP
