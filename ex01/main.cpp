/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:17:16 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/01 15:03:19 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string command;

	std::cout << "Welcome to the phonebook!" << std::endl;
	std::cout << "You can use the following commands: ADD, SEARSCH, EXIT." << std::endl;
	while (1)
	{
		std::cout << "Please enter a command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
		else if (command == "SEARCH")
		else if (command == "EXIT")
			exit(0);
		else
			std::cout << "Invalid command, use ADD, SEARCH or EXIT." << std::endl;
	}
}