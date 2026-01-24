/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:49:34 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/17 13:00:14 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("default_clap_name",
										FragTrap::baseHitPoints(),
										ScavTrap::baseEnergyPoints(),
										FragTrap::baseAttackDamage())
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "default";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name",
										FragTrap::baseHitPoints(),
										ScavTrap::baseEnergyPoints(),
										FragTrap::baseAttackDamage())
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->_name = name;
}

DiamondTrap::DiamondTrap(DiamondTrap const &toCopy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = toCopy;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &toCopy)
{
	std::cout << "DiamondTrap = operator overload called" << std::endl;
	if (this != &toCopy)
	{
		this->_name = toCopy._name;
		this->ClapTrap::_name = toCopy.ClapTrap::_name;
		this->_hit_points = toCopy._hit_points;
		this->_energy_points = toCopy._energy_points;
		this->_attack_damage = toCopy._attack_damage;
	}
	return (*this);
}

std::string const&	DiamondTrap::getName(void) const
{
	return (this->_name);
}

void DiamondTrap::whoAmI(void)
{
	if (this->_hit_points <= 0)
		std::cout << "DiamondTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_points <= 0)
		std::cout << "DiamondTrap " << this->_name << " doesnt have energy" << std::endl;
	else
	{
		std::cout << "DiamondTrap name : " << this->_name << std::endl;
		std::cout << "ClapTrap name : " << this->ClapTrap::_name << std::endl;
		--this->_energy_points;
	}
}
