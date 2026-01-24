/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:56:52 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/15 18:32:17 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		size_t		_hit_points;
		size_t		_energy_points;
		size_t		_attack_damage;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &toCopy);
		~ClapTrap(void);
		ClapTrap	&operator=(ClapTrap const &toCopy);
		std::string const&	getName(void) const;
		size_t const&		getHitPoints(void) const;
		size_t const&		getEnergyPoints(void) const;
		size_t const&		getAttackDamage(void) const;
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
