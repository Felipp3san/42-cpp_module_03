/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 20:37:06 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/07 21:08:33 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
	: ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string const &name)
	: ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap name constructor called." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
	: ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name
			<< " has no hit points left and cannot attack!" << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name
			<< " has no energy left and cannot attack!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name
		<< " attacks " << target
		<< ", causing " << _attackDamage
		<< " points of damage!"
		<< std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
