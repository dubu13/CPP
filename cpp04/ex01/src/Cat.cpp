/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:06:57 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/20 19:06:34 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() 
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}
