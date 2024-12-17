#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
    public:
        MutantStack(){};
        MutantStack(const MutantStack &other) : std::stack<T>(other){};
        MutantStack &operator=(const MutantStack &other){
            if (this == &other)
                return *this;
            std::stack<T>::operator=(other);
            return *this;
        };
        virtual ~MutantStack(){};
};