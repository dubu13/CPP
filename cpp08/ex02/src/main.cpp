#include "MutantStack.hpp"
#include <list>

void subject_test()
{
    std::cout << "---Subject test---" << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;

    mstack.pop();
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

void compare_test()
{
    std::cout << "---Compare test w list---" << std::endl;
    std::list<int> lst;

    lst.push_back(5);
    lst.push_back(17);
    std::cout << lst.back() << std::endl;

    lst.pop_back(); 
    std::cout << lst.size() << std::endl;

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::list<int>::iterator it = lst.begin();
    std::list<int>::iterator ite = lst.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::list<int> s(lst);
}

void forward_reverse_test()
{
    MutantStack<char> mstack;
    mstack.push('a');
    mstack.push('b');
    mstack.push('c');

    std::cout << "---forward iterator---" << std::endl;
    for (MutantStack<char>::iterator it = mstack.begin(); it != mstack.end(); it++)
        std::cout << *it << std::endl;
    std::cout << "---reverse iterator---" << std::endl;
    for (MutantStack<char>::reverse_iterator it = mstack.rbegin(); it != mstack.rend(); it++)
        std::cout << *it << std::endl;
}

int main()
{
    subject_test();
    compare_test();
    forward_reverse_test();
    return 0;
}
