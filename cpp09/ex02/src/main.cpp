#include "PmergeMe.hpp"

int main(int argc, char **argv){
    if (argc < 2) {
        std::cerr << "Usage: ./PmergeMe <numbers>" << std::endl;
        return 1;
    }
    PmergeMe pmergeMe;
    if (!pmergeMe.parseInput(argc, argv))
        return 1;
    pmergeMe.sort();
    return 0;
}