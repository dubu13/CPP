/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:07:51 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/20 14:10:24 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog& other);
        Dog &operator=(const Dog& other);
        ~Dog();

        void makeSound() const;

    private:
        Brain *brain;
};