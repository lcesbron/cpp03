/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:59:19 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/16 19:23:03 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap("default", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &toCopy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = toCopy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &toCopy)
{
	std::cout << "ScavTrap = operator overload called" << std::endl;
	if (this != &toCopy)
	{
		this->_name = toCopy._name;
		this->_hit_points = toCopy._hit_points;
		this->_energy_points = toCopy._energy_points;
		this->_attack_damage = toCopy._attack_damage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hit_points <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_points <= 0)
		std::cout << "ScavTrap " << this->_name << " doesnt have energy" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		--this->_energy_points;
	}
}

void ScavTrap::guardGate(void)
{
	if (this->_hit_points <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_points <= 0)
		std::cout << "ScavTrap " << this->_name << " doesnt have energy" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " is now on gate keeper mode." << std::endl;
		--this->_energy_points;
	}
}

