#include "PmergeMe.hpp"

bool PmergeMe::parseInput(int argc, char**argv){
    for (int i = 1; i < argc; i++){        
        try
        {
            if (argc == 2)
                throw std::invalid_argument("Not enough numbers to sort");
            std::string strNum = argv[i];

            for (char c : strNum) {
                if (!std::isdigit(c))
                    throw std::invalid_argument("Invalid Input");
            }
            int num = std::stoi(argv[i]);
            _vec.push_back(num);
            _deq.push_back(num);
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error: " << e.what() << '\n';
            return false;
        }
    }
    return true;
}

void PmergeMe::sort(){
    std::cout << "Before: " << std::endl;
    for (int num : _vec)
        std::cout << num << " " << std::endl;
    for (int num : _deq)
        std::cout << num << " " << std::endl;
    mergeSort(_vec);
    mergeSort(_deq);
    std::cout << "After: " << std::endl;
    for (int num : _vec)
        std::cout << num << " " << std::endl;
    for (int num : _deq)
        std::cout << num << " " << std::endl;
    mergeSort(_deq);
}