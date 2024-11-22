#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const name, int gradeToSign, int gradeToExecute);
		Form(const Form& other);
		Form &operator=(const Form& other);
		~Form();
		void beSigned(Bureaucrat& bureaucrat);
		bool getIsSigned() const;
		std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		class GradeTooHighException : public std::exception
		{
			public :
				const char *what() const throw() override;
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char *what() const throw() override;
		};

	private:
		std::string const _name;
		int const _gradeToSign;
		int const _gradeToExecute;
		bool _isSigned;
};

std::ostream &operator<<(std::ostream &os, const Form &form);
