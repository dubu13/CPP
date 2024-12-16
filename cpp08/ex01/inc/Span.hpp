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
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
        class SpanException : public std::exception {
            private:
                std::string _message;
            public:
                SpanException(const std::string& message) : _message(message) {};
                const char* what() const throw() override {
                    return _message.c_str();
                };
        };
};