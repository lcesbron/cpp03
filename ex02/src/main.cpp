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

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	b("Bonjour");

	b.attack("Toi");
	b.takeDamage(5);
	b.beRepaired(3);
	b.takeDamage(8);
	b.takeDamage(8);
	b.highFivesGuys();
}
