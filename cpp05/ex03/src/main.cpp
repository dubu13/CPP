/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:22:36 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/21 20:30:23 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        // Bureaucrat boss("Boss", 1);
        
        AForm* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << "------------------------" << std::endl;
        AForm* invalid = someRandomIntern.makeForm("invalid form", "Target");

        // boss.signForm(*rrf);
        // boss.executeForm(*rrf);
        if (rrf)
            delete rrf;
        if (invalid != nullptr)
            std::cout << "if u see this, something went wrong" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}