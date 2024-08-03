/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:58:11 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/03 14:50:34 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	next_index_ = 0;
	contact_count_ = 0;
}

void PhoneBook::addContact()
{
	contacts_[next_index_].setContact();
	next_index_++;
	if (next_index_ == 7)
		next_index_ = 0;
	if (contact_count_ < 8)
		contact_count_++;
}

void PhoneBook::searchContact() const
{
	if (contact_count_ == 0)
	{
		std::cout << "No contacts available." << std::endl;
		return;
	}
	std::cout << std::setw(10) << "Index" << "|"
		<< std::setw(10) << "First name" << "|"
		<< std::setw(10) << "Last name" << "|"
		<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < contact_count_; i++)
		contacts_[i].displayShortContacts(i);

	int index;
	std::cout << "Enter the index of the contact you want to see: ";
	std::cin >> index;
	if (index >= 0 && index < contact_count_)
		contacts_[index].displayFullContact();
	else
		std::cout << "Invalid index." << std::endl;

}