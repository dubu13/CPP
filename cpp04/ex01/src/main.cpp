/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:46:16 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/20 19:45:29 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const int arraySize = 6;
    const Animal* animals[arraySize];

    for (int i = 0; i < arraySize / 2; i++) {
        std::cout << "index: " << i << std::endl;
        animals[i] = new Dog();
    }

    std::cout << "---------------------------------" << std::endl;

    for (int i = arraySize / 2; i < arraySize; i++) {
        std::cout << "index: " << i << std::endl;
        animals[i] = new Cat();
    }

    std::cout << "---------------------------------" << std::endl;

    for (int i = 0; i < arraySize; i++) {
        animals[i]->makeSound();
    }

    std::cout << "---------------------------------" << std::endl;

    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }

    std::cout << "---------------------------------" << std::endl;
    std::cout << "Testing deep copy and scope" << std::endl;
    std::cout << std::endl;

    Dog basic;
    {
        Dog tmp = basic;
        std::cout << "Tmp dog going out of scope" << std::endl;
    }
    std::cout << "Basic dog still in scope" << std::endl;
    basic.makeSound();

    std::cout << "---------------------------------" << std::endl;
    std::cout << "Testing copy constructor" << std::endl;
    std::cout << std::endl;

    Cat* original = new Cat();
    Cat* copy = new Cat(*original);

    delete original;

    std::cout << "Original cat deleted, copy cat still alive" << std::endl;
    copy->makeSound();

    delete copy;

    std::cout << "---------------------------------" << std::endl;
    return 0;
}