/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:57:18 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/03 16:19:29 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact()
{
}

bool isNumeric(const std::string &str)
{
	if (str.empty())
		return false;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

std::string Contact::getInput(const std::string &prompt, bool numeric) const
{
	std::string input;

	while (input.empty())
	{
		std::cout << prompt;
		std::getline(std::cin, input);

		if (input.empty())
			std::cout << "This field can't be empty. Please enter a valid input." << std::endl;
		else if (numeric && !isNumeric(input))
		{
			std::cout << "Please enter a valid number." << std::endl;
			input.clear();
		}
		else if (!numeric && isNumeric(input))
		{
			std::cout << "Please enter a valid input." << std::endl;
			input.clear();
		}
	}
	return input;
}

void Contact::setContact()
{
	std::string input;

	first_name_ = getInput("Enter first name: ", false);
	last_name_ = getInput("Enter last name: ", false);
	nickname_ = getInput("Enter nickname: ", false);
	phone_number_ = getInput("Enter phone number: ", true);
	darkest_secret_ = getInput("Enter darkest secret: ", false);
}

void Contact::displayShortContacts(int index) const
{
	std::cout << std::setw(10) << index << "|"
		<< std::setw(10) << (first_name_.length() > 10 ? first_name_.substr(0, 9) + "." : first_name_) << "|"
		<< std::setw(10) << (last_name_.length() > 10 ? last_name_.substr(0, 9) + "." : last_name_) << "|"
		<< std::setw(10) << (nickname_.length() > 10 ? first_name_.substr(0, 9) + "." : nickname_) << std::endl;
}

void Contact::displayFullContact() const
{
	std::cout << "First name: " << first_name_ << std::endl;
	std::cout << "Last name: " << last_name_ << std::endl;
	std::cout << "Nickname: " << nickname_ << std::endl;
	std::cout << "Phone number: " << phone_number_ << std::endl;
	std::cout << "Darkest secret: " << darkest_secret_ << std::endl;
}