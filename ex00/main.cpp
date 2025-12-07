/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:33:10 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/07 17:12:36 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct("CL4P-TP");

	// Alive
	ct.attack("some random wanderer");
	ct.beRepaired(10);
	ct.attack("some random wanderer");
	ct.beRepaired(10);
	ct.attack("some random wanderer");
	ct.beRepaired(10);
	ct.attack("some random wanderer");
	ct.beRepaired(10);
	ct.attack("some random wanderer");
	ct.beRepaired(10);
	ct.attack("some random wanderer");

	// Dead
	ct.takeDamage(100);
	ct.attack("some random wanderer");
	ct.beRepaired(10);

	return (0);
}
