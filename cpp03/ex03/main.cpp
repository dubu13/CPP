/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:52:41 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/19 18:40:47 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("Diamond");
    
    std::cout << "----------------------------------------" << std::endl;

    diamond.attack("Target");
    std::cout << std::endl;
    diamond.takeDamage(50);
    std::cout << std::endl;
    diamond.beRepaired(30);
    std::cout << std::endl;
    diamond.highFivesGuys();
    std::cout << std::endl;
    diamond.guardGate();
    std::cout << std::endl;
    diamond.whoAmI();

    std::cout << "----------------------------------------" << std::endl;
    
    return 0;
}