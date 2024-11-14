/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:22:36 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/14 19:21:42 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		std::cout << "\n=== Test 1: Normal case ===" << std::endl;
		Bureaucrat boss("Boss", 1);
		Form contract("Contract", 2, 2);
		boss.signForm(contract);
		std::cout << contract << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n=== Test 2: Grade too low to sign ===" << std::endl;
		Bureaucrat intern("Intern", 150);
		Form important("Important", 1, 1);
		intern.signForm(important);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n=== Test 3: Invalid form creation ===" << std::endl;
		Form invalid("Invalid", 151, 1);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n=== Test 4: Another invalid form ===" << std::endl;
		Form tooHigh("TooHigh", 0, 1);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
