/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 08:59:24 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/08 18:59:54 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

/*
* Orthodox Canonical Form
*/
ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap(ClapTrap &obj)
{
	*this = obj;
}

ClapTrap(const ClapTrap &obj)
{
	*this = obj;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	this->name = obj.getName();
	this->hits_ponts = obj.getHits();
	this->energy_points = obj.getEnergy();
	this->attack_damage = obj.getAttack();
	return (*this);
}

~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*
 * Get Methods
*/

