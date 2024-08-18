/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:52:41 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/18 19:01:28 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag("Fraggy");
    
    frag.attack("target");
    frag.takeDamage(50);
    frag.beRepaired(30);
    frag.highFivesGuys();

    std::cout << "----------------------------------------" << std::endl;

    ScavTrap scav("Scavvy");
    scav.attack("target");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    std::cout << "----------------------------------------" << std::endl;

    ClapTrap clap("Clappy");
    clap.attack("target");
    clap.takeDamage(5);
    clap.beRepaired(3);
    
    std::cout << "----------------------------------------" << std::endl;
    
    return 0;
}