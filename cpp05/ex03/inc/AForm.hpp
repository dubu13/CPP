/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:41:32 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/20 15:00:42 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	protected:
		std::string const _target;
	private:
		std::string const _name;
		int const _gradeToSign;
		int const _gradeToExecute;
		bool _isSigned;
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
		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public :
				const char *what() const throw() { return "Grade too high"; }
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char *what() const throw() { return "Grade too low"; }
		};

		class FormNotSignedException : public std::exception
		{
			public :
				const char *what() const throw() { return "Form is not signed"; }
		};

		class GradeTooLowToExecuteException : public std::exception
		{
			public :
				const char *what() const throw() { return "Grade too low to execute"; }
		};
};

std::ostream &operator<<(std::ostream &os, const AForm &Aform);
