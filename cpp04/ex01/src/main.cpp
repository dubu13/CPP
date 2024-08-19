/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:46:16 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/19 21:58:00 by dhasan           ###   ########.fr       */
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

    std::cout << "Type is : " << j->getType() << " " << std::endl;
    std::cout << "Type is : " << i->getType() << " " << std::endl;
    std::cout << "Type is : " << meta->getType() << " " << std::endl;

    std::cout << "---------------------------------" << std::endl;

    j->makeSound();
    i->makeSound(); //will output the cat sound!
    meta->makeSound();

    std::cout << "---------------------------------" << std::endl;

    delete i;
    delete j;
    delete meta;

    std::cout << "---------------------------------" << std::endl;

    return 0;
}