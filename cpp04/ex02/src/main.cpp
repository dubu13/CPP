/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:46:16 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/20 20:03:54 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "---------------------------------" << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound(); 

    delete j;
    delete i;

    // The following line should cause a compile-time error
    // Animal* animal = new Animal(); // Error: cannot instantiate abstract class

    std::cout << "---------------------------------" << std::endl;
    return 0;
}