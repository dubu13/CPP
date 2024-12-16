#include "Span.hpp"

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span &other) : _maxSize(other._maxSize), _data(other._data) {}

Span &Span::operator=(const Span &other){
    if (this == &other)
        return *this;
    _maxSize = other._maxSize;
    _data.clear();
    _data = other._data;
    return *this;
}

Span::~Span() {}

void Span::addNumber(int value){
    if (_data.size() >= _maxSize)
        throw SpanException("Span is full: Cannot add more numbers.");
    _data.push_back(value);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
    if (_data.size() + std::distance(begin, end) > _maxSize)
        throw SpanException("Span is full: Cannot add more numbers.");
    _data.insert(_data.end(), begin, end);
}

int Span::shortestSpan(){
    if (_data.size() < 2)
        throw SpanException("Not enough numbers to calculate span.");
    std::vector<int> sortedData = _data;
    std::sort(sortedData.begin(), sortedData.end());
    int minSpan = INT_MAX;
    for (size_t i = 1; i < sortedData.size(); ++i) {
        minSpan = std::min(minSpan, sortedData[i] - sortedData[i - 1]);
    }
    return minSpan;
}

int Span::longestSpan(){
    if (_data.size() < 2)
        throw SpanException("Not enough numbers to calculate span.");
    std::vector<int> sortedData = _data;
    std::sort(sortedData.begin(), sortedData.end());
    return (sortedData.back() - sortedData.front());
}