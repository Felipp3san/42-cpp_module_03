/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 20:37:30 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/07 21:07:36 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &other);
	~ScavTrap(void);
	ScavTrap	&operator=(ScavTrap const &other);
public:
	void		attack(std::string const &target);
	void		guardGate();
};

#endif
