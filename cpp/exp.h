//
// Created by Priyank on 12/29/2019.
//

#ifndef BASIC_ALGORITHMS_CPP_EXP_H
#define BASIC_ALGORITHMS_CPP_EXP_H

#include <string>
#include <iostream>
#include<vector>


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


template <typename T, int N>
class template_exp{
private:
public:
    T m_arr;
    template_exp(int i)
    : m_arr(i){};
    void print_val(){
        std:: cout << m_arr << std::endl;
    };

};
#endif

class palindromFinder{
public:
    bool pali(const std::vector<int>&);
};

#endif //BASIC_ALGORITHMS_CPP_EXP_H
