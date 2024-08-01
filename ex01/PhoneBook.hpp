/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:56:29 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/01 15:56:30 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.cpp"

class PhoneBook
{
	public:
	Phonebook();
	void addContact;
	void searchContact const;

	private:
	Contact contacts_[8];
	int next_index_;
	int contact_count_;
};
#endif