/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:22:36 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/20 15:20:27 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void testExecuteForm()
{
    std::cout << "\n=== Testing ExecuteForm Function ===\n" << std::endl;
    
    Bureaucrat ceo("CEO", 1);
    Bureaucrat manager("Manager", 50);

    ShrubberyCreationForm shrub("Garden");
    RobotomyRequestForm robot("Bender");
    PresidentialPardonForm pardon("Justin");

    // Test execution without signing
    std::cout << "\n--- Testing unsigned forms ---\n" << std::endl;
    manager.executeForm(shrub);
    manager.executeForm(robot);
    manager.executeForm(pardon); 

    // Sign all forms
    std::cout << "\n--- Signing all forms ---\n" << std::endl;
    manager.signForm(shrub);
    manager.signForm(robot);
    manager.signForm(pardon); // Should fail - bureaucrat grade too low
    ceo.signForm(pardon);
    

    // Test execution with different grade levels
    std::cout << "\n--- Testing with different grades ---\n" << std::endl;
    manager.executeForm(robot);   // fail - bureaucrat grade too low
    manager.executeForm(pardon);  // not signed
    manager.executeForm(shrub);   // Should succeed
    ceo.executeForm(pardon);      // Should succeed
    ceo.executeForm(robot);      // Should succeed
}

int main()
{
    try
    {
        testExecuteForm();
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}