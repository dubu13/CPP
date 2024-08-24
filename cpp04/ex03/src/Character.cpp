/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:38:57 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/24 17:45:59 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("character_default")
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

Character::Character(std::string const &name): _name(name)
{
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

Character::Character(const Character& other)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = other;
}

Character &Character::operator=(const Character& other)
{
	std::cout << "Character copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_materias[i] != NULL)
				delete this->_materias[i];
			if (other._materias[i] != NULL)
				this->_materias[i] = other._materias[i]->clone();
			else
				this->_materias[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = m;
			std::cout << "Materia equipped at index " << i << std::endl;
			return;
		}
	}
	std::cout << "No space for new materia" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->_materias[idx] == NULL)
	{
		std::cout << "Invalid index or no materia equipped at index " << idx << std::endl;
		return;
	}
	this->_materias[idx] = NULL;
	std::cout << "Materia at index " << idx << " unequipped" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || this->_materias[idx] == NULL)
	{
		std::cout << "Invalid index or no materia equipped at index " << idx << std::endl;
		return;
	}
	this->_materias[idx]->use(target);
	std::cout << "Materia at index " << idx << " used on target " << target.getName() << std::endl;
}