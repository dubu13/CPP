#pragma once
#include <iostream>

template <typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array &operator=(const Array &other);
        ~Array();
    
        T &operator[](unsigned int i);
        const T &operator[](unsigned int i) const;
        unsigned int size() const;
    private:
        T *_arr;
        unsigned int _size;
};
#include "Array.tpp"