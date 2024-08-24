/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:28:17 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/24 17:46:18 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice& other)
{
	std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice *Ice::clone() const
{
	std::cout << "Ice clone called" << std::endl;
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}