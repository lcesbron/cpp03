/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:26:19 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/17 10:29:12 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

static void	printDiamondInfo(DiamondTrap const& diamond)
{
	std::cout << "name : " << diamond.getName() << std::endl;
	std::cout << "ClapTrap name : " << diamond.ClapTrap::getName() << std::endl;
	std::cout << "hit points : " << diamond.getHitPoints() << std::endl;
	std::cout << "energy points : " << diamond.getEnergyPoints() << std::endl;
	std::cout << "attack damage : " << diamond.getAttackDamage() << std::endl;
}

int	main(void)
{
	DiamondTrap	b("Bonjour");

	printDiamondInfo(b);
	b.highFivesGuys();
	b.whoAmI();
}
