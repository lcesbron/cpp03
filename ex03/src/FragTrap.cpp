/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 10:26:34 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/17 10:28:30 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("default", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &toCopy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = toCopy;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &toCopy)
{
	std::cout << "FragTrap = operator overload called" << std::endl;
	if (this != &toCopy)
	{
		this->_name = toCopy._name;
		this->_hit_points = toCopy._hit_points;
		this->_energy_points = toCopy._energy_points;
		this->_attack_damage = toCopy._attack_damage;
	}
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_hit_points <= 0)
		std::cout << "FragTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_points <= 0)
		std::cout << "FragTrap " << this->_name << " doesnt have energy" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		--this->_energy_points;
	}
}

void FragTrap::highFivesGuys(void)
{
	if (this->_hit_points <= 0)
		std::cout << "FragTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_points <= 0)
		std::cout << "FragTrap " << this->_name << " doesnt have energy" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->_name << " wants an high five" << std::endl;
		--this->_energy_points;
	}
}

