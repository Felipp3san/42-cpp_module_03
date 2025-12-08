/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 22:40:56 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/07 22:49:20 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) :
	ClapTrap("Default_clap_name"),
	FragTrap(),
	ScavTrap(),
	_name("Default")
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	std::cout
		<< "DiamondTrap default constructor called."
		<< std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) :
	ClapTrap(name + "_clap_name"),
	FragTrap(name),
	ScavTrap(name),
	_name(name)
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	std::cout
		<< "DiamondTrap name constructor called."
		<< std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other) :
	ClapTrap(other),
	FragTrap(other),
	ScavTrap(other),
	_name(other._name)
{
	std::cout
		<< "DiamondTrap copy constructor called."
		<< std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout
		<< "DiamondTrap destructor called."
		<< std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &other)
{
	if (this != &other)
	{
		FragTrap::operator=(other);
		ScavTrap::operator=(other);
		_name = other._name;
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout
		<< "DiamondTrap name is " << _name
		<< " and ClapTrap name is " << ClapTrap::_name
		<< std::endl;
}
