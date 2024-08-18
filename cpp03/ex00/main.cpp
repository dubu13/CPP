/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:52:41 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/18 15:13:45 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("John");

    clap1.attack("Bob");
    clap1.takeDamage(5);
    clap1.beRepaired(3);

    clap1.takeDamage(10);
    clap1.attack("Bob");
    clap1.beRepaired(3);

    return 0;
}