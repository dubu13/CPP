/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:22:36 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/09 17:16:09 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\n=== Test 1: Valid Bureaucrat ===" << std::endl;
	try {
		Bureaucrat bob("Bob", 100);
		bob.incrementGrade();
		bob.decrementGrade();
		std::cout << bob << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n=== Test 2: Grade Too High ===" << std::endl;
	try {
		Bureaucrat alice("Alice", 0);  // Should throw exception
	}
	catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n=== Test 3: Grade Too Low ===" << std::endl;
	try {
		Bureaucrat charlie("Charlie", 151);  // Should throw exception
	}
	catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n=== Test 4: Increment at Grade 1 ===" << std::endl;
	try {
		Bureaucrat david("David", 1);
		std::cout << "Initial " << david.getName() << " grade: " << david.getGrade() << std::endl;
		david.incrementGrade();  // Should throw exception
	}
	catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n=== Test 5: Decrement at Grade 150 ===" << std::endl;
	try {
		Bureaucrat eve("Eve", 150);
		std::cout << "Initial " << eve.getName() << " grade: " << eve.getGrade() << std::endl;
		eve.decrementGrade();  // Should throw exception
	}
	catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	}