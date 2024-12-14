#pragma once

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int element){

    typename T::iterator it;
    it = std::find(container.begin(), container.end(), element);

    if (it == container.end())
        throw std::out_of_range("Value not found in container.");
    return it;
}
