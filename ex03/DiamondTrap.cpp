/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:56:35 by theog             #+#    #+#             */
/*   Updated: 2025/02/13 17:43:28 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Snoop doggy dooooog_clap_name"), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;

    this->_Dname = "Snoop doggy dooooog";

    // Initialisation des attributs hérités
    this->_HitPoints = FragTrap::_HitPoints;   // FragTrap initialise _HitPoints à 100
    this->_EnergyPoints = ScavTrap::_EnergyPoints;  // ScavTrap initialise _EnergyPoints à 50
    this->_AttackDamage = FragTrap::_AttackDamage;   // FragTrap initialise _AttackDamage à 30

    std::cout << "HitPoints: " << this->_HitPoints << std::endl;  // 100
    std::cout << "EnergyPoints: " << this->_EnergyPoints << std::endl;  // 50
    std::cout << "AttackDamage: " << this->_AttackDamage << std::endl;  // 30
    std::cout << "I got energy points:" << this->_EnergyPoints << std::endl;
}

// DiamondTrap:: DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
// {
//     std::cout << "DiamondTrap default constructor called" << std::endl;

//         // Vérification des valeurs après initialisation des parents
//     // std::cout << "HitPoints: " << this->getHitPoint() << std::endl;
//     // std::cout << "EnergyPoints: " << this->getEnergyPoint() << std::endl;
//     // std::cout << "AttackDamage: " << this->getAttackDamage() << std::endl;

//     ClapTrap::_name = "Snoop doggy dooooog_clap_name";
//     this->_Dname = "Snoop doggy dooooog";
//     // this->_HitPoints = FragTrap::getHitPoint();
//     // this->_EnergyPoints = ScavTrap::getEnergyPoint();
//     // this->_AttackDamage = FragTrap::getAttackDamage();
//     std::cout << "HitPoints: " << this->_HitPoints << std::endl;  // 100
//     std::cout << "EnergyPoints: " << this->_EnergyPoints << std::endl;  // 50
//     std::cout << "AttackDamage: " << this->_AttackDamage << std::endl;  // 30
//     std::cout << "I got energy points:" << this->_EnergyPoints <<std::endl;
//     this->_HitPoints = FragTrap::_HitPoints;   // FragTrap initialise _HitPoints à 100
//     this->_EnergyPoints = ScavTrap::_EnergyPoints;  // ScavTrap initialise _EnergyPoints à 50
//     this->_AttackDamage = FragTrap::_AttackDamage;
//     std::cout << "HitPoints: " << this->_HitPoints << std::endl;  // 100
//     std::cout << "EnergyPoints: " << this->_EnergyPoints << std::endl;  // 50
//     std::cout << "AttackDamage: " << this->_AttackDamage << std::endl;  // 30
//     std::cout << "I got energy points:" << this->_EnergyPoints <<std::endl;
// }

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap constructor called" << std::endl;

    this->_Dname = name;
    this->_EnergyPoints = ScavTrap::_EnergyPoints;
    this->_HitPoints = FragTrap::_HitPoints;
    this->_AttackDamage = FragTrap::_AttackDamage;
}
DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other),  ScavTrap(other), FragTrap(other)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;

    *this = other;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_AttackDamage = other._AttackDamage;
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
        this->_Dname = other._Dname;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}
void DiamondTrap:: whoAmI()
{
    std::cout << "Whats my MF NAME ?! " << this->_Dname 
    << " And Whats my MF CLAP_NAME ?! " << ClapTrap::_name << std::endl;

}
void DiamondTrap:: attack(const std::string& target)
{
    ScavTrap::attack(target);
}