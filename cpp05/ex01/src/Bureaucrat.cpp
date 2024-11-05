/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:13:35 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/05 18:35:32 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor called." << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->_name << " created with grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name)
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

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade()
{
	try
	{
		if (this->_grade == 1)
			throw Bureaucrat::GradeTooHighException();
		this->_grade--;
		std::cout << "Bureaucrat " << this->_name << " grade incremented to " << this->_grade << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
void Bureaucrat::decrementGrade()
{
	try
	{
		if (this->_grade == 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade++;
		std::cout << "Bureaucrat " << this->_name << " grade decremented to " << this->_grade << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

void Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat " << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	std::cout << "Bureaucrat " << this->getName() << " signed " << form.getName() << std::endl;
}