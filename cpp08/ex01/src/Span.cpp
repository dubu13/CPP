#include "Span.hpp"
Span::Span() : _maxSize(0) {}
Span::Span(unsigned int N) : _maxSize(N) {}
Span::Span(const Span &other) : _maxSize(other._maxSize), _data(other._data) {}
Span &Span::operator=(const Span &other){
    if (this == &other)
        return *this;
    _maxSize = other._maxSize;
    _data = other._data;
    return *this;
}

Span::~Span() {}
void Span::addNumber(int value){
    if (_data.size() >= _maxSize)
        throw std::out_of_range("Span is full: Cannot add more numbers.");
    _data.push_back(value);
}
