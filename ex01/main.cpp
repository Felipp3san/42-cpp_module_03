/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:33:10 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/07 21:21:52 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap st("SC4V-TP");
	ScavTrap clone = st;

	st.attack("some random wanderer");
	st.guardGate();

	clone.attack("some random wanderer");
	clone.guardGate();

	return (0);
}
