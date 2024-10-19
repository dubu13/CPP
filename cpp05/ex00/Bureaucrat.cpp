/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:13:35 by dhasan            #+#    #+#             */
/*   Updated: 2024/10/19 18:07:04 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor called." << std::endl;
	std::cout << "Bureaucrat " << this->_name << " created with grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat assignation operator called." << std::endl;
	if (this != &other)
		this->_grade = other._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called." << std::endl;
}

std::string Bureaucrat::getName()
{
	return this->_name;
}

int Bureaucrat::getGrade()
{
	return this->_grade;
}