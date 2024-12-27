// #pragma once
#include "PmergeMe.hpp"

template <typename T>
void PmergeMe::mergeSort(T &container){
    int leftover = -1;
    if (container.size() % 2 != 0){
        leftover = container.back();
        container.pop_back();
    }

    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i < container.size(); i += 2){
        int first = container[i];
        int second = container[i + 1];
        if (first > second)
            std::swap(first, second);
        pairs.push_back({first, second});
    }
    //do these in one template func
    std::vector<int> first;
    for (const auto &pair : pairs)
        first.push_back(pair.first);
    std::sort(first.begin(), first.end());

    std::vector<int> second;
    for (const auto &pair : pairs)
        second.push_back(pair.second);
    std::sort(second.begin(), second.end());
    //

    container.clear();

    size_t i = 0, j = 0;
    while (i < first.size())
        container.push_back(first[i++]);
    while (j < second.size())
        container.push_back(second[j++]);

    if (leftover != -1){
        auto it = std::lower_bound(container.begin(), container.end(), leftover);
        container.insert(it, leftover);    
    }
}