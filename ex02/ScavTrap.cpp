/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 02:07:54 by theog             #+#    #+#             */
/*   Updated: 2025/02/13 17:37:44 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
    this->_name = "Scavengers";
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_AttackDamage = other._AttackDamage;
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

//methods
void ScavTrap::attack(const std::string& target)
{
	if (_EnergyPoints == 0 || _HitPoints == 0)
	{
		if(_EnergyPoints == 0)
			std::cout << "ScavTrap Not enough energy points to attack" << std::endl;
		if(_HitPoints == 0)
			std::cout << "ScavTrap Not enough Hit points to attack" << std::endl;
		return;
	}
	std::cout << _name << " attacks " << target << " causing " 
	<< _AttackDamage << " points of damage ! ScavTrap"<< std::endl;
	//ScavTrap <name> attacks <target>, causing <damage> points of damage!
	_EnergyPoints--;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is in keeper mode" << std::endl;
}