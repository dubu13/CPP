#pragma once

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <exception>
#include <fstream>

#define TREE \
"                 *\n\
                ***\n\
               *****\n\
              *******\n\
             *********\n\
            ***********\n\
           *** /\\_/\\ ***\n\
          *** ( o.o ) ***\n\
         ***   > ^ <   ***\n\
        *******************\n"

class AForm;

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const override;
};