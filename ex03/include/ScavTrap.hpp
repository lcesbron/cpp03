/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:04:41 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/16 19:23:03 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &toCopy);
		~ScavTrap(void);
		ScavTrap		&operator=(ScavTrap const &toCopy);
		static size_t	baseHitPoints();
		static size_t	baseEnergyPoints();
		static size_t	baseAttackDamage();
		void			attack(const std::string &target);
		void			guardGate(void);
};

#endif
