/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:52:41 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/18 19:08:22 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Clappy");

    clap.attack("target");
    clap.takeDamage(5);
    clap.beRepaired(3);

    clap.takeDamage(10);
    clap.attack("Bob");
    clap.beRepaired(3);

    return 0;
}