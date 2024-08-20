/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:04:07 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/20 14:10:16 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(const Cat& other);
        Cat &operator=(const Cat& other);
        ~Cat();

        void makeSound() const;

    private:
        Brain *brain;
};