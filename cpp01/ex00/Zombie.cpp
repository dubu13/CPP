/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 18:15:23 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/09 18:50:17 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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