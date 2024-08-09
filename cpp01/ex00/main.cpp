/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 18:04:08 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/09 18:52:55 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main()
{
	Zombie *heapZombie = newZombie("Heap Zombie");
	heapZombie->announce();
	delete heapZombie;
	heapZombie = NULL;

	randomChump("Stack Zombie");

	return 0;
}