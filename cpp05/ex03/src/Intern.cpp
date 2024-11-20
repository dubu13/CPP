/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:01:15 by dhasan            #+#    #+#             */
/*   Updated: 2024/11/20 22:25:14 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& other){
    (void)other;
    std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern& other){
    (void)other;
    std::cout << "Intern copy assignment operator called" << std::endl;
    return *this;
}

Intern::~Intern(){
    std::cout << "Intern destructor called" << std::endl;
}

std::string convert_lowercase(std::string str){
    std::string result;
    for (size_t i = 0; i < str.length(); i++){
        result += std::tolower(str[i]);
    }
    return result;
}

AForm *Intern::createShrubberyCreation(std::string target){ return new ShrubberyCreationForm(target); }
AForm *Intern::createRobotomyRequest(std::string target){ return new RobotomyRequestForm(target); }
AForm *Intern::createPresidentialPardon(std::string target){ return new PresidentialPardonForm(target); }

AForm* Intern::makeForm(std::string formName, std::string target){
    
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (*forms[3])(std::string) = {createShrubberyCreation, createRobotomyRequest, createPresidentialPardon};

    std::string lowercaseFormName = convert_lowercase(formName);
    for (int i = 0; i < 3; i++){
        if (lowercaseFormName == convert_lowercase(formNames[i])){
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i](target);
        }
    }
    std::cout << "Intern couldn't create " << formName <<std::endl;
    return nullptr;
}