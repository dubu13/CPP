#include "iter.hpp"

int main(){

    int arr1[] = {1, 2, 3, 4, 5};
    iter(arr1, 5, print);

    std::string arr2[] = {"Hello", "World", "!"};
    iter(arr2, 3, print);

    return 0;
}