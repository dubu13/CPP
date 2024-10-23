/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:13:35 by dhasan            #+#    #+#             */
/*   Updated: 2024/10/23 13:55:36 by dhasan           ###   ########.fr       */
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

void Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
	std::cout << "Bureaucrat " << this->_name << " grade incremented to " << this->_grade << std::endl;
}
void Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	std::cout << "Bureaucrat " << this->_name << " grade decremented to " << this->_grade << std::endl;
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}
// try
// {
// 	do something
// }
// catch (exceptin; like out_of_range( &e -> reference to object))
// {
// 	exception thrown
// 	throw
// }
// u can have multiple catch blocks
