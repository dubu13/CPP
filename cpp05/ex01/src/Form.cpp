/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:42:01 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/05 17:26:26 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "Form constructor called" << std::endl;
	this->_isSigned = false;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form " << this->_name << " created with grade to sign " << this->_gradeToSign << " and grade to execute " << this->_gradeToExecute <<
}

Form::Form(const Form& other)
{
	std::cout << "Form copy constructor called." << std::endl;
	*this = other;
}

Form &Form::operator=(const Form& other)
{
	std::cout << "Form assignation operator called." << std::endl;
	if (this != &other)
		this->_isSigned = other._isSigned;
	return *this;
}

Form::~Form()
{
	std::cout << "Form destructor called." << std::endl;
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}

bool Form::getIsSigned() const
{
	if (this->_isSigned)
		return true;
	return false;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}
const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}