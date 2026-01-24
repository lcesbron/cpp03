/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 10:24:25 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/17 10:29:44 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
#include <cstddef>

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &toCopy);
		~FragTrap(void);
		FragTrap		&operator=(FragTrap const &toCopy);
		static size_t	baseHitPoints();
		static size_t	baseEnergyPoints();
		static size_t	baseAttackDamage();
		void	attack(const std::string &target);
		void	highFivesGuys(void);
};

#endif
