//
// Created by Priyank on 12/29/2019.
//

#ifndef BASIC_ALGORITHMS_CPP_EXP_H
#define BASIC_ALGORITHMS_CPP_EXP_H

#include <string>
#include <iostream>



#if 0 // If block 1
class Exp {
protected:
    std::string first, last;
public:
    Exp()
        : first("Priyank"), last ("Trivedi"){};
    Exp(std::string first_n, std::string last_n){
        first = first_n;
        last = last_n;
    }

    virtual void print();
};

class Exp_extend : public Exp{
public:
    void print() override ;
};
#endif


#endif //BASIC_ALGORITHMS_CPP_EXP_H
