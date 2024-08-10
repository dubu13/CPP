/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 14:42:02 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/10 15:04:35 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}
Weapon::~Weapon()
{
}
const std::string &Weapon::getType()
{
	return _type;
}

void Weapon::setType(std::string new_type)
{
	_type = new_type;
}