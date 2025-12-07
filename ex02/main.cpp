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

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("Dusty");
	FragTrap	b(a);
	FragTrap	c;
	
	c = a;
	a.highFivesGuys();
	b.highFivesGuys();
	c.highFivesGuys();

	return (0);
}
