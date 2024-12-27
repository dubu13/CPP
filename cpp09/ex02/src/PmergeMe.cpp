#include "PmergeMe.hpp"

bool parseInput(int argc, char**argv){
    for (int i = 1; i < argc; i++){        
        try
        {
            std::string strNum = argv[i];

            for (char c : strNum) {
                if (!std::isdigit(c))
                    throw std::invalid_argument("Invalid Input");
            }
            // int num = std::stoi(argv[i]);
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error: " << e.what() << '\n';
            return false;
        }
    }
    return true;
}