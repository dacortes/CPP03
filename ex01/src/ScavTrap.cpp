/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:39:20 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/14 18:32:24 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

/*
* Orthodox Canonical Form
*/
ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << O << "ScavTrap: " << E << "Default constructor called"
		<< std::endl;
	this->setName("");
	this->hits_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	std::cout << O << "ScavTrap: " << E << "Constructor called"
		<< std::endl;
	this->setName(name);
	this->hits_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap()
{
	*this = obj;
	std::cout << O << "ScavTrap:" << E << obj.getName()
		<< " Copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	this->setName(obj.getName());
	this->setHits(obj.getHits());
	this->setEnergy(obj.getEnergy());
	this->setAttack(obj.getAttack());
	std::cout << O << "ScavTrap " << E << obj.getName()
		<< ": All parameters constructor" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << O << "ScavTrap: " << E << this->getName()
		<< " Destructor called" << std::endl;
}

/*
 *	Members funtion
*/
void	ScavTrap::guardGate()
{
	std::cout << O << "ScavTrap: " << E << "Is now in GateKeeper mode"
		<< std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->getEnergy() < 1)
	{
		std::cout << this->getName() << ": Can't do more damage: "
			<< "energy points 0" << std::endl;
		return ;
	}
	if (this->getHits() < 1)
	{
		std::cout << this->getName() << ": is dead :C" << std::endl;
		return ;
	}
	std::cout << O << "ScavTrap " << E << this->getName() << " attacks "
		<< target << ", causing " << this->getAttack() << " points of damage!"
		<< std::endl;
	this->setEnergy(this->getEnergy() - 1);
}

std::ostream &operator<<(std::ostream &os, const ScavTrap &obj)
{
	os << O << "Name: " << E << obj.getName() << O << " Hit ponits: " << E
		<< obj.getHits() << O << " Energy points: " << E
		<< obj.getEnergy() << O << " Attack damage: " << E << obj.getAttack();
	return (os);
}
