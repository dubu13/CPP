/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 19:01:34 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/22 19:11:28 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie is created" << std::endl;
}

Zombie::Zombie(std::string inputName)
{
	this->name = inputName;
	std::cout << name << " is created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " is destroyed" << std::endl;
}
void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ... " << std::endl;
}

void	Zombie::setName(std::string inputName)
{
	this->name = inputName;
}