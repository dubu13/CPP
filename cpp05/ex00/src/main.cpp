/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:22:36 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/04 16:28:18 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    // Test 1: Valid construction and basic functionality
    std::cout << "\n=== Test 1: Valid Bureaucrat ===" << std::endl;
    try {
        Bureaucrat bob("Bob", 100);
        std::cout << "Name: " << bob.getName() << ", Grade: " << bob.getGrade() << std::endl;

        bob.incrementGrade();
        bob.decrementGrade();
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Test 2: Grade too high exception
    std::cout << "\n=== Test 2: Grade Too High ===" << std::endl;
    try {
        Bureaucrat alice("Alice", 0);  // Should throw exception
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Test 3: Grade too low exception
    std::cout << "\n=== Test 3: Grade Too Low ===" << std::endl;
    try {
        Bureaucrat charlie("Charlie", 151);  // Should throw exception
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Test 4: Increment at boundary
    std::cout << "\n=== Test 4: Increment at Grade 1 ===" << std::endl;
    try {
        Bureaucrat david("David", 1);
        std::cout << "Initial " << david.getName() << " grade: " << david.getGrade() << std::endl;
        david.incrementGrade();  // Should throw exception
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Test 5: Decrement at boundary
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