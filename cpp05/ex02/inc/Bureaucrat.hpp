#pragma once

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <exception>

class AForm;

class Bureaucrat
{
	private:
		std::string const _name;
		int _grade;

	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat &operator=(const Bureaucrat& other);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(AForm& form);
		void executeForm(AForm const & form);

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
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);