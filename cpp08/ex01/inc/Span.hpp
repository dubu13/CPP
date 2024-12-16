#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>

class Span{

    private:
        unsigned int _maxSize;
        std::vector<int> _data;

    public:
        Span();
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int value);
        int shortestSpan();
        int longestSpan();
};