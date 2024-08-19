/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:46:16 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/19 21:03:16 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "---------------------------------" << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;

    std::cout << "---------------------------------" << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "---------------------------------" << std::endl;

    delete i;
    delete j;
    delete meta;

    return 0;
}