#pragma once
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat &operator=(const Bureaucrat& other);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
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
		int _grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);