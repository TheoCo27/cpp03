/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:48:55 by tcohen            #+#    #+#             */
/*   Updated: 2025/02/13 03:04:57 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _HitPoints;
		unsigned int _EnergyPoints;
		unsigned int _AttackDamage;
	public:
	//canonical part
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap& operator=(const ClapTrap& other);
		virtual ~ClapTrap(void);
	//getter
		unsigned int getHitPoint(void);
		unsigned int getEnergyPoint(void);
		std::string getName(void);
	//setter
		void setHitPoint(unsigned int hitpoint);
		void setEnergyPoint(unsigned int energypoint);
		void setName(std::string name);	
	//methods
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};