/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 22:16:33 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/07 22:35:51 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
	: ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string const &name)
	: ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap name constructor called." << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
	: ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
