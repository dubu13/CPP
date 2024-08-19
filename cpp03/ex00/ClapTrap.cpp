/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:52:52 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/19 18:47:37 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called; " << _name << " is created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Name constructor called; " << _name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called, " << _name << " is destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0) 
    {
        this->_energyPoints--;
        std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        std::cout << this->_name << " has " << this->_energyPoints << " energy points left" << std::endl;
    }
    else
        std::cout << this->_name << " can't attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{

    std::cout << this->_name << " takes " << amount << " points of damage!" << std::endl;
    if (this->_hitPoints < amount)
    {
        this->_hitPoints = 0;
        std::cout << this->_name << " is dead" << std::endl;
        return;
    }
    this->_hitPoints -= amount;
    std::cout << this->_name << " has " << this->_hitPoints << " hit points left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_energyPoints--;
        this->_hitPoints += amount;
        std::cout << this->_name << " is repaired by " << amount << " points!" << std::endl;
        std::cout << this->_name << " has " << this->_hitPoints << " hit points left" << std::endl;
        std::cout << this->_name << " has " << this->_energyPoints << " energy points left" << std::endl;
    }
    else
        std::cout << this->_name << " can't be repaired" << std::endl;
}