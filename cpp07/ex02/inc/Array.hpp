#pragma once
#include <iostream>

template <typename T>
class Array
{
    public:
        Array();//empty array
        Array(unsigned int n);//array of size n
        Array(const Array &other);
        Array &operator=(const Array &other);
        ~Array();
    
    private:
        T *_arr;
        unsigned int _size;
};
#include "Array.tpp"