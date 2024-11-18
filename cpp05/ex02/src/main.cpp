/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:22:36 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/14 22:14:55 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat boss("Boss", 1);
        Bureaucrat intern("Intern", 150);
        
        ShrubberyCreationForm form("garden");
        
        std::cout << "\n--- Testing unsigned form execution ---\n" << std::endl;
        form.execute(boss);
        
        std::cout << "\n--- Testing signing with low grade ---\n" << std::endl;
        intern.signForm(form);
        
        std::cout << "\n--- Testing signing with valid grade ---\n" << std::endl;
        boss.signForm(form);
        
        std::cout << "\n--- Testing execution with low grade ---\n" << std::endl;
        form.execute(intern);
        
        std::cout << "\n--- Testing successful execution ---\n" << std::endl;
        form.execute(boss);
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    return 0;
}
