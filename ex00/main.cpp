/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 01:33:44 by theog             #+#    #+#             */
/*   Updated: 2025/02/13 01:45:33 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("baby");
    ClapTrap c(b);
    ClapTrap d = c;

    a.attack("chips");
    a.takeDamage(5);
    a.takeDamage(5);
    a.takeDamage(5);
    a.beRepaired(10);
    a.attack("chips");
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
}