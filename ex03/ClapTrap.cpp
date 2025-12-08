/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:15:54 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/07 20:44:36 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) :
	_name("Default"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout
		<< "ClapTrap default constructor called."
		<< std::endl;
};

ClapTrap::ClapTrap(std::string const &name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout
		<< "ClapTrap parameterized constructor called."
		<< std::endl;
};

ClapTrap::ClapTrap(ClapTrap const &other) :
	_name(other._name),
	_hitPoints(other._hitPoints),
	_energyPoints(other._energyPoints),
	_attackDamage(other._attackDamage)
{
	std::cout
		<< "ClapTrap copy constructor called."
		<< std::endl;
};

ClapTrap::~ClapTrap(void)
{
	std::cout
		<< "ClapTrap destructor called."
		<< std::endl;
};

ClapTrap	&ClapTrap::operator=(ClapTrap const &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout
		<< "ClapTrap copy assignment operator called."
		<< std::endl;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (_hitPoints == 0)
	{
		std::cout
			<< "ClapTrap " << _name
			<< " has no hit points left and cannot attack!"
			<< std::endl;
		return ;
	}
	if (_energyPoints == 0)
	{
		std::cout
			<< "ClapTrap " << _name
			<< " has no energy left and cannot attack!"
			<< std::endl;
		return ;
	}

	_energyPoints--;

	std::cout
		<< "ClapTrap " << _name
		<< " attacks " << target
		<< ", causing " << _attackDamage
		<< " points of damage!"
		<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;

	std::cout
		<< "ClapTrap " << _name
		<< " has taken " << amount
		<< " points of damage! Hit points left: " << _hitPoints
		<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout
			<< "ClapTrap " << _name
			<< " has no hit points left and cannot repair!"
			<< std::endl;
		return ;
	}
	if (_energyPoints == 0)
	{
		std::cout
			<< "ClapTrap " << _name
			<< " has no energy left and cannot repair!"
			<< std::endl;
		return ;
	}

	_energyPoints--;
	_hitPoints += amount;

	std::cout
		<< "ClapTrap " << _name
		<< " repairs itself for " << amount
		<< " hit points! Energy left: " << _energyPoints
		<< std::endl;
}
