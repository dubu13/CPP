/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:41:32 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/14 21:33:13 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

/*
	change it as abstract class
	add execute(Bureaucrat const & executor) function
*/
class Bureaucrat;

class AForm
{
	public:
		AForm(std::string const name, int gradeToSign, int gradeToExecute, std::string const target);
		AForm(const AForm& other);
		AForm &operator=(const AForm& other);
		~AForm();
		void beSigned(Bureaucrat& bureaucrat);
		bool getIsSigned() const;
		std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		virtual void execute(Bureaucrat const & executor) = 0;

		class GradeTooHighException : public std::exception
		{
			public :
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char *what() const throw();
		};

		class FormNotSignedException : public std::exception
		{
			public :
				const char *what() const throw()
				{
					return "Form is not signed";
				}
		};
		
		class GradeTooLowToExecuteException : public std::exception
		{
			public :
				const char *what() const throw()
				{
					return "Grade too low to execute";
				}
		};
		
	protected:
		std::string const _target;
	private:
		std::string const _name;
		int const _gradeToSign;
		int const _gradeToExecute;
		bool _isSigned;
};

std::ostream &operator<<(std::ostream &os, const AForm &Aform);
