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
	ClapTrap	a("Rusty");

	// Alive
	a.attack("some random wanderer");
	a.beRepaired(10);
	a.attack("some random wanderer");
	a.beRepaired(10);
	a.attack("some random wanderer");
	a.beRepaired(10);
	a.attack("some random wanderer");
	a.beRepaired(10);
	a.attack("some random wanderer");
	a.beRepaired(10);
	a.attack("some random wanderer");

	// Dead
	a.takeDamage(100);
	a.attack("some random wanderer");
	a.beRepaired(10);

	return (0);
}
