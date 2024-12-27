#include "PmergeMe.hpp"

int main(int argc, char **argv){
    if (argc < 2) {
        std::cerr << "Usage: ./PmergeMe <numbers>" << std::endl;
        return 1;
    }
    if (!parseInput(argc, argv))
        return 1;
    if (argc == 2){
        std::cout << "No need to sort" << std::endl;
        return 0;
    }
    return 0;
}