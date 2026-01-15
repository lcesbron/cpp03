/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:26:19 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/15 18:37:54 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Bonjour");

	a.attack("Toi");
	a.takeDamage(5);
	a.beRepaired(3);
	a.takeDamage(8);
	a.takeDamage(8);
}
