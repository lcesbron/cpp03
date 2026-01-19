/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:26:19 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/16 19:23:03 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	b("Bonjour");

	ClapTrap*	clap = new ClapTrap[2];

	clap[0] = b;
	clap[0].attack("toi");
	// b.attack("Toi");
	// b.takeDamage(5);
	// b.beRepaired(3);
	// b.takeDamage(8);
	// b.takeDamage(8);
	// b.guardGate();
}
