/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 09:00:08 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/10 16:52:54 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

/******************************************************************************/
/*                            INCLUDES                                        */
/******************************************************************************/

#include <string>
#include <iostream>
#include <cstdlib>

/******************************************************************************/
/*                            CLASS                                           */
/******************************************************************************/
class	ClapTrap
{
	private:
		std::string		name;
		unsigned int	hits_points;
		unsigned int	energy_points;
		unsigned int	attack_damage;
	public:
		/*
		 * Orthodox Canonical Form
		*/
		ClapTrap(void);
		ClapTrap(const ClapTrap &obj);
		ClapTrap &operator=(const ClapTrap &obj);
		~ClapTrap(void);
		/*
		 * Set Methods 
		*/
		void	setName(std::string _name);
		void	setHits(unsigned int _hits);
		void	setEnergy(unsigned int _energy);
		void	setAttack(unsigned int _attack);
		/*
		 * Get Methods 
		*/
		std::string		getName(void) const;
		unsigned int	getHits(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getAttack(void) const;
		/*
		 * Members funtions
		*/
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

std::ostream &operator<<(std::ostream &os, const ClapTrap &obj);
#endif
