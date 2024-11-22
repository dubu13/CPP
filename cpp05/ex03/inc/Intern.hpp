#pragma once

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
    public:
        Intern();
        Intern(const Intern& other);
        Intern &operator=(const Intern& other);
        ~Intern();
        AForm* makeForm(std::string formName, std::string target);
};
AForm *createShrubberyCreation(std::string target);
AForm *createRobotomyRequest(std::string target);
AForm *createPresidentialPardon(std::string target);