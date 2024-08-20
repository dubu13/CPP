/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:08:15 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/20 19:07:02 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog& other) 
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}