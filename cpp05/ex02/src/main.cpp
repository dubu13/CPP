/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:22:36 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/19 17:17:41 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        Bureaucrat boss("Boss", 1);
        Bureaucrat intern("Intern", 150);
        Bureaucrat manager("Manager", 40);
        
        ShrubberyCreationForm shrub("garden");
        RobotomyRequestForm robot("R2D2");
        
        // std::cout << "\n=== Testing ShrubberyCreationForm ===\n" << std::endl;
        // shrub.execute(boss);
        // boss.signForm(shrub);
        // shrub.execute(boss);
        
        std::cout << "\n=== Testing RobotomyRequestForm ===\n" << std::endl;
        
        // Test unsigned execution
        std::cout << "\n--- Testing unsigned robotomy execution ---\n" << std::endl;
        robot.execute(boss);
        
        // Test signing with low grade
        std::cout << "\n--- Testing signing robotomy with low grade ---\n" << std::endl;
        intern.signForm(robot);
        
        // Test signing with valid grade
        std::cout << "\n--- Testing signing robotomy with valid grade ---\n" << std::endl;
        boss.signForm(robot);
        
        // Test execution with insufficient grade
        std::cout << "\n--- Testing robotomy execution with low grade ---\n" << std::endl;
        robot.execute(intern);
        
        // Test multiple executions to see randomization
        std::cout << "\n--- Testing multiple robotomy executions ---\n" << std::endl;
        robot.execute(boss);
        robot.execute(boss);
        robot.execute(manager);
        robot.execute(boss);
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
