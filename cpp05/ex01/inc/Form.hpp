/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:41:32 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/05 17:26:54 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class Form
{
	public:
		Form(std::string const name, int gradeToSign, int gradeToExecute);
		Form(const Form& other);
		Form &operator=(const Form& other);
		~Form();
		void beSigned(Bureaucrat& bureaucrat);
		bool getIsSigned() const;
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

	private:
		std::string const _name;
		int const _gradeToSign;
		int const _gradeToExecute;
		bool _isSigned;
}