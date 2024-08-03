/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:17:16 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/03 17:53:26 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string command;

	std::cout << "Welcome to the phonebook!" << std::endl;
	std::cout << "You can use the following commands: ADD, SEARCH, EXIT." << std::endl;
	while (1)
	{
		std::cout << "Please enter a command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			return 0;
		else
			std::cout << "Invalid command, use ADD, SEARCH or EXIT." << std::endl;
	}
}