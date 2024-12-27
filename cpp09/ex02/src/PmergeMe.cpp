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
    std::cout << "Before: ";
    for (int num : _vec)
        std::cout << num << " ";
    std::cout << std::endl;

    auto vecStart = std::chrono::high_resolution_clock::now();
    mergeSort(_vec);
    auto vecEnd = std::chrono::high_resolution_clock::now();

    auto deqStart = std::chrono::high_resolution_clock::now();
    mergeSort(_deq);
    auto deqEnd = std::chrono::high_resolution_clock::now();

    std::cout << "After: ";
    for (int num : _vec)
        std::cout << num << " ";
    std::cout << std::endl;

    double vecDuration =  std::chrono::duration<double, std::micro>(vecEnd - vecStart).count();
    double deqDuration =  std::chrono::duration<double, std::micro>(deqEnd - deqStart).count();
    std::cout << "Time to process a range of " << _vec.size()
        << " elements with std::vector : " << vecDuration << " us" << std::endl;
    std::cout << "Time to process a range of " << _deq.size()
        << " elements with std::deque : " << deqDuration << " us" << std::endl;
}