/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:03:55 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/15 18:41:37 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("default"),
									_hit_points(10),
									_energy_points(10),
									_attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name),
									_hit_points(10),
									_energy_points(10),
									_attack_damage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &toCopy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_name = toCopy._name;
	this->_hit_points = toCopy._hit_points;
	this->_energy_points = toCopy._energy_points;
	this->_attack_damage = toCopy._attack_damage;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &toCopy)
{
	std::cout << "ClapTrap = operator overload called" << std::endl;
	if (this != &toCopy)
	{
		this->_name = toCopy._name;
		this->_hit_points = toCopy._hit_points;
		this->_energy_points = toCopy._energy_points;
		this->_attack_damage = toCopy._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

std::string const&	ClapTrap::getName(void) const
{
	return (this->_name);
}

size_t const&		ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

size_t const&		ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

size_t const&		ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_points <= 0)
		std::cout << "ClapTrap " << this->_name << " doesnt have energy" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		--this->_energy_points;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage." << std::endl;
	if (amount >= this->_hit_points)
	{
		this->_hit_points = 0;
	}
	else
	{
		this->_hit_points -= amount;
	}
	if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_points <= 0)
		std::cout << "ClapTrap " << this->_name << " doesnt have energy" << std::endl;
	else
	{
		this->_hit_points += amount;
		std::cout << "ClapTrap " << this->_name << " repairs. (" << this->_hit_points << "hp)" << std::endl;
		--this->_energy_points;
	}
}
