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
		virtual ~AForm();
		void beSigned(Bureaucrat& bureaucrat);
		bool getIsSigned() const;
		std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		virtual void execute(Bureaucrat const & executor) const = 0;

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

		class FormNotSignedException : public std::exception
		{
			public :
				const char *what() const throw() override;
		};

		class GradeTooLowToExecuteException : public std::exception
		{
			public :
				const char *what() const throw() override;
		};
};

std::ostream &operator<<(std::ostream &os, const AForm &Aform);
