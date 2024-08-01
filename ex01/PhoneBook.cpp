/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:58:11 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/01 20:14:02 by dhasan           ###   ########.fr       */
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
