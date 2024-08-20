/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:59:28 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/20 20:00:31 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(const Animal& other);
        Animal &operator=(const Animal& other);
        virtual ~Animal();

        virtual void makeSound() const = 0;
        std::string getType() const;

    protected:
       std::string type;
    
};