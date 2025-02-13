/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:36:14 by tcohen            #+#    #+#             */
/*   Updated: 2025/02/13 17:32:35 by tcohen           ###   ########.fr       */
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
	{
		this->_name = other._name;
		this->_AttackDamage = other._AttackDamage;
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
	}
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
	return (_HitPoints);
}

unsigned int ClapTrap::getEnergyPoint(void)
{
	std::cout << "getEnergyPoint called" << std::endl;
	return (_EnergyPoints);
}
std::string ClapTrap::getName(void)
{
	std::cout << "getName called" << std::endl;
	return (_name);
}
//setter
void ClapTrap::setHitPoint(unsigned int hitpoint)
{
	std::cout << "setHitPoint called" << std::endl;
	_HitPoints = hitpoint;
}
void ClapTrap::setEnergyPoint(unsigned int energypoint)
{
	std::cout << "setEnergyPoint called" << std::endl;
	_EnergyPoints = energypoint;
}
void ClapTrap::setName(std::string name)
{
	std::cout << "setName called" << std::endl;
	this->_name = name;
}
//methods
void ClapTrap::attack(const std::string& target)
{
	if (_EnergyPoints == 0 || _HitPoints == 0)
	{
		if(_EnergyPoints == 0)
			std::cout << "Not enough energy points to attack" << std::endl;
		if(_HitPoints == 0)
			std::cout << "Not enough Hit points to attack" << std::endl;
		return;
	}
	std::cout << _name << " attacks " << target << " causing " 
	<< _AttackDamage << " points of damage !"<< std::endl;
	//ClapTrap <name> attacks <target>, causing <damage> points of damage!
	_EnergyPoints--;

}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints == 0)
	{
		std::cout << _name << " is already dead" << std::endl;
		return;
	}
	std::cout << _name << " has been attacked " << " causing " 
	<< amount << " points of damage !"<< std::endl;
	if (amount > _HitPoints)
		_HitPoints = 0;
	if (_HitPoints >= amount)
		_HitPoints -= amount;
	std::cout << _name << " has " << _HitPoints << " hitpoints left" << std::endl;
	
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoints == 0)
	{
		if(_EnergyPoints == 0)
			std::cout << "Not enough energy points to be repaired" << std::endl;
		return;
	}
	std :: cout << _name << " repaired itself and gained " << amount 
	<< " hitPoints back" << std::endl;
	_HitPoints += amount;
	_EnergyPoints--;
	std::cout << _name << "now has " << _HitPoints << " left and " 
	<< _EnergyPoints << " energy points left" << std::endl;
}