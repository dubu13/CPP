/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:01:12 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/21 16:35:45 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
    public:
        Intern();
        Intern(const Intern& other);
        Intern &operator=(const Intern& other);
        ~Intern();
        AForm* makeForm(std::string formName, std::string target);
};
AForm *createShrubberyCreation(std::string target);
AForm *createRobotomyRequest(std::string target);
AForm *createPresidentialPardon(std::string target);