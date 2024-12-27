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

    std::vector<int> first, second;
    for (const auto &pair : pairs){
        first.push_back(pair.first);
        second.push_back(pair.second);
    }
    std::sort(first.begin(), first.end());
    std::sort(second.begin(), second.end());

    container.clear();

    std::merge(first.begin(), first.end(), second.begin(),\
        second.end(), std::back_inserter(container));

    if (leftover != -1){
        auto it = std::lower_bound(container.begin(), container.end(), leftover);
        container.insert(it, leftover);    
    }
}