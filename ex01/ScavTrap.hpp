/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 20:37:30 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/07 22:33:08 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap(void);
	ScavTrap	&operator=(const ScavTrap &other);
public:
	void		attack(const std::string& target);
	void		guardGate();
};

#endif
