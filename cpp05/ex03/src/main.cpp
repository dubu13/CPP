#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;
        Bureaucrat boss("Boss", 1);
        
        AForm* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << "------------------------" << std::endl;
        AForm* invalid = someRandomIntern.makeForm("invalid form", "Target");

        boss.signForm(*rrf);
        boss.executeForm(*rrf);
        if (rrf)
            delete rrf;
        if (invalid){
            std::cout << "something is wrong" << std::endl;
            delete invalid;
        }
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}