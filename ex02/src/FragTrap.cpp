/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:04:04 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/16 18:20:22 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

/*
* Orthodox Canonical Form
*/
FragTrap::FragTrap (void): ClapTrap()
{
	std::cout << T"FragTrap: " << E"Default constructor called"
		<< std::endl;
	this->setName("");
	this->setHits(100);
	this->setEnergy(100);
	this->setAttack(30);
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap()
{
	*this = obj;
	std::cout << T << "FragTrap: " << E << obj.getName()
		<< " Copy constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &obj)
{
	this->setName(obj.getName());
	this->setHits(obj.getHits());
	this->setEnergy(obj.getEnergy());
	this->setAttack(obj.getAttack());
	std::cout << T << "FragTrap: " << E << obj.getName()
		<< ": All parameters constructor" << std::endl;
	return (*this);
}

FragTrap::FragTrap (std::string name): ClapTrap()
{
	std::cout << T << "FragTrap: " << E << "Constructor called"
		<< std::endl;
	this->setName(name);
	this->setHits(100);
	this->setEnergy(100);
	this->setAttack(30);
}

/*
 *	Members funtions
*/
void	FragTrap::highFivesGuys(void)
{
	std::cout << T << "FragTrap: " << E << this->getName()
		<< ": Hey guys, High five" << std::endl;	
}

FragTrap::~FragTrap (void)
{
	std::cout << T << "FragTrap: " << E << this->getName()
		<< " Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const FragTrap &obj)
{
	os << T << "Name: " << E << obj.getName() << T << " Hit ponits: " << E
		<< obj.getHits() << T << " Energy points: " << E << obj.getEnergy()
		<< T << " Attack damage: " << E << obj.getAttack();
	return (os);
}
