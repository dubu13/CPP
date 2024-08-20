/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:23:35 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/20 14:14:14 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;

    for (int i = 0; i < 100; i++)
        this->ideas[i] = "Empty idea";
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called" << std::endl;

    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain& other)
{
    std::cout << "Brain assignation operator called" << std::endl;

    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}