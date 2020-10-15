//
// Created by Danny on 15-10-2020.
//

#include "RotInstruction.hpp"

RotInstruction::RotInstruction(Speur *speur, std::string line) : BaseInstruction(speur, line) {

}

void RotInstruction::Do() {
    std::string val = _speur->RemoveFromStack(0);

    _speur->Stack.push_back(ROT13(val));
}

std::string RotInstruction::ROT13(std::string source)
{
    int z = source.length(), i=0;
    for(i=0; i<=(z); i++)                                   //Rot13 Algorithm
    {
        if(source[i] < 91 && source[i] > 64)              //uppercase
        {
            if(source[i] < 78)
                source[i] = source[i] + 13;
            else
                source[i] = source[i] - 13;
        }
        if(source[i] < 123 && source[i] > 96)     //lowercase
        {
            if(source[i] < 110)
                source[i] = source[i] + 13;
            else
                source[i] = source[i] - 13;
        }
    }
    return source;
}