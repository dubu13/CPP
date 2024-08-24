/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:53:36 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/24 13:09:54 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ICharacter;

class AMateria
{
    public:
        AMateria();
        AMateria(std::string const &type);
        AMateria(const AMateria& other);
        AMateria &operator=(const AMateria& other);
        virtual ~AMateria();

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;

        std::string const &getType() const; //return materia type
    protected:
        std::string _type;
};