/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:36:14 by tcohen            #+#    #+#             */
/*   Updated: 2025/02/12 20:03:53 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Anonym"), _HitPoints(10), 
_EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoints(10), 
_EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		*this = other;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}
//getter
unsigned int ClapTrap::getHitPoint(void)
{
	std::cout << "getHitPoint called" << std::endl;
}

unsigned int ClapTrap::getEnergyPoint(void)
{
	std::cout << "getEnergyPoint called" << std::endl;
}
std::string ClapTrap::getName(void)
{
	std::cout << "getName called" << std::endl;
}
//setter
void ClapTrap::setHitPoint(unsigned int hitpoint)
{
	std::cout << "setHitPoint called" << std::endl;
}
void ClapTrap::setEnergyPoint(unsigned int energypoint)
{
	std::cout << "setEnergyPoint called" << std::endl;
}
void ClapTrap::setName(std::string name)
{
	std::cout << "setName called" << std::endl;
}
//methods
void ClapTrap::attack(const std::string& target)
{
	if (_EnergyPoints == 0)
	{
		std::cout << "Not enough energy points to attack" << std::endl;
		return;
	}
	std::cout << _name << " attacks " << target << " causing " 
	<< _AttackDamage << " points of damage !"<< std::endl;
	//ClapTrap <name> attacks <target>, causing <damage> points of damage!
	_EnergyPoints--;

}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " has been attacked " << " causing " 
	<< amount << " points of damage !"<< std::endl;

	if (amount > _HitPoints)
	{
		_HitPoints = 0;
		return;
	}
	_HitPoints -= amount;
	
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoints == 0)
	{
		std::cout << "Not enough energy points to be repaired" << std::endl;
		return;
	}
	std :: cout << _name << " repaired itself and gained" << amount 
	<< " hitPoints back" << std::endl;
	_EnergyPoints--;
}