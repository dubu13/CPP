/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 19:01:38 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/13 18:50:03 by dhasan           ###   ########.fr       */
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
		void setName(std::string inputName);
	private:
		std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif