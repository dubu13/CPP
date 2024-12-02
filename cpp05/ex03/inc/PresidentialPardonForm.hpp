#pragma once

#include "AForm.hpp"
#include <random>
#include <iostream>
#include <string>
#include <exception>
#include <fstream>

class AForm;

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm &operator=(const PresidentialPardonForm& other);
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor) const override;
};