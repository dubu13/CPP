#include "Span.hpp"

int main()
{
    std::cout << "subject test" << std::endl;
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    Span sp2 = sp;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "---testing with 10000 num---" << std::endl;
    try{
        Span sp(10000);
        for (int i = 0; i < 10000; i++)
            sp.addNumber(i);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "---using range of iterators---" << std::endl; 
    try{
        std::vector<int> numbers = {6, 3, 17, 9, 11};
        Span sp(5);
        sp.addNumber(numbers.begin(), numbers.end());
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "---invalids---" << std::endl;
    try{
        std::cout << "--size 1--" << std::endl;
        Span sp(1);
        sp.addNumber(1);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        std::cout << "--size 0--" << std::endl;
        Span sp(0);
        sp.addNumber(1);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        std::cout << "--adding more element than size--" << std::endl;
        Span sp(1);
        sp.addNumber(1);
        sp.addNumber(2);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    return 0;
}