#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

class PmergeMe{
    private:
        std::vector<int> _vec;
        std::deque<int> _deq;

        template <typename T>
        void mergeSort(T &container);

    public:
        PmergeMe() = default;
        PmergeMe(const PmergeMe &other) = default;
        PmergeMe &operator=(const PmergeMe &other) = default;
        ~PmergeMe() = default;

        bool parseInput(int argc, char **argv);
        void sort();
};
#include "PmergeMe.tpp"