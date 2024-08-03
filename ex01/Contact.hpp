/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:56:48 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/03 16:11:16 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class Contact
{
	public:
		Contact();
		void setContact();
		void displayShortContacts(int index) const;
		void displayFullContact() const;

	private:
		std::string first_name_;
		std::string last_name_;
		std::string nickname_;
		std::string phone_number_;
		std::string darkest_secret_;
		std::string getInput(const std::string &prompt, bool numeric) const;
};
#endif