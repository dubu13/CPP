/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:57:18 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/01 20:11:53 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact()
{
}
void Contact::setContact()
{
	std::string input;

	std::cout << "Enter the first name: ";
	std::getline(std::cin, input);
	first_name_ = input;
	std::cout << "Enter the last name: ";
	std::getline(std::cin, input);
	last_name_ = input;
	std::cout << "Enter the nickname: ";
	std::getline(std::cin, input);
	nickname_ = input;
	std::cout << "Enter the phone number: ";
	std::getline(std::cin, input);
	phone_number_ = input;
	std::cout << "Enter the darkest secret: ";
	std::getline(std::cin, input);
	darkest_secret_ = input;
}
