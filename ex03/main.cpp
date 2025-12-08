/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:33:10 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/07 22:36:04 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a;
	DiamondTrap	b("Bug");
	DiamondTrap	c(b);
	DiamondTrap	d;
	
	d = b;
	d.whoAmI();
	d.attack("some random wanderer"); // Should use ScavTrap method

	// Check if inherited methods work
	d.guardGate();
	d.highFivesGuys();

	return (0);
}
