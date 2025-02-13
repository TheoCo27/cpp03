/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 01:33:44 by theog             #+#    #+#             */
/*   Updated: 2025/02/13 03:17:33 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a;
    FragTrap b("baby");
    FragTrap c(b);
    FragTrap d = c;

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
    a.highFivesGuys();
}