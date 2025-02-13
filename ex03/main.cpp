/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 01:33:44 by theog             #+#    #+#             */
/*   Updated: 2025/02/13 14:48:26 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a;
    DiamondTrap b("baby");
    DiamondTrap c(b);
    DiamondTrap d = c;

    a.attack("chips");
    a.takeDamage(50);
    a.takeDamage(50);
    a.takeDamage(50);
    a.beRepaired(10);
    for(int i = 0; i < 51; i++)
        a.attack("demons");
    a.beRepaired(100);
    a.ScavTrap::guardGate();
    a.FragTrap::highFivesGuys();
    a.whoAmI();
}