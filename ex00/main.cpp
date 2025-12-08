/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:33:10 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/07 22:36:30 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a;
	ClapTrap	b("Rusty");
	ClapTrap	c(a);
	ClapTrap	d;

	d = a;

	a.attack("some random wanderer");
	b.attack("some random wanderer");
	c.attack("some random wanderer");
	d.attack("some random wanderer");

	a.takeDamage(20);
	b.takeDamage(50);
	c.takeDamage(30);
	d.takeDamage(5);

	a.beRepaired(10);
	b.beRepaired(20);
	c.beRepaired(30);
	d.beRepaired(40);

	for (int i = 0; i < 10; i++)
	{
		a.attack("for depleting energy"); // Has no hitpoints left.
		d.attack("for depleting energy"); // Has hitpoints.
	}

	// Dead
	a.takeDamage(10);
	a.beRepaired(10);

	return (0);
}
