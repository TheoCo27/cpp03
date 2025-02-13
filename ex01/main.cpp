/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 01:33:44 by theog             #+#    #+#             */
/*   Updated: 2025/02/13 02:55:07 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap a;
    ClapTrap b("baby");
    //ScavTrap c(b);
   // ScavTrap d = c;

    a.attack("chips");
    a.takeDamage(50);
    a.takeDamage(50);
    a.takeDamage(50);
    a.beRepaired(10);
    a.attack("chips");
    b.attack("nochips");
    a.attack("chips");
    a.attack("chips");
    a.attack("chips");
    a.attack("chips");
    a.attack("chips");
    a.attack("chips");
    a.attack("chips");
    a.attack("chips");
    a.attack("chips");
    a.beRepaired(100);
    a.guardGate();
}