/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 18:06:21 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/09 18:41:45 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string inputName);
		~Zombie();
		void announce(void);

	private:
		std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif