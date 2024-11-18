/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:08:07 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/14 21:32:33 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#define TREE \
"              *\n\
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
		void execute(Bureaucrat const & executor) override;
      
};