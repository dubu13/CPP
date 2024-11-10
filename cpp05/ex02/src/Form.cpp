/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:42:01 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/09 17:07:40 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	this->_isSigned = false;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form constructor called" << std::endl;
	std::cout << "Form " << this->_name << " created with grade to sign " << this->_gradeToSign << " and grade to execute " << this->_gradeToExecute << std::endl;
}

Form::Form(const Form& other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	*this = other;
	std::cout << "Form copy constructor called." << std::endl;
}

Form &Form::operator=(const Form& other)
{
	if (this != &other)
		this->_isSigned = other._isSigned;
	std::cout << "Form assignation operator called." << std::endl;
	return *this;
}

Form::~Form()
{
	std::cout << "Form destructor called." << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}
const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
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
	return this->_isSigned;
}

std::string Form::getName() const
{
	return this->_name;
}

int Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Form: " << form.getName()
		<< ", is signed: " << form.getIsSigned()
		<< ", grade to sign: " << form.getGradeToSign()
		<< ", grade to execute: " << form.getGradeToExecute();
	return os;
}