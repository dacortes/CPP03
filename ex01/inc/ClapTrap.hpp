/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 09:00:08 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/14 18:34:02 by dacortes         ###   ########.fr       */
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
/*                            COLORS                                          */
/******************************************************************************/

# define E "\033[m"                 //end
# define R "\033[1m\033[1;31m"    	//red
# define G "\033[1m\033[1;32m"    	//green
# define Y "\033[1m\033[1;33m"    	//yellow
# define B "\033[1;34m"    			//blue
# define T "\033[1m\033[1;35m"		//Turquesa
# define C "\033[1;36m"				//Cyan
# define O "\033[1m\033[38;5;208m"	//orange
# define F "\033[38;5;128m"			//purple

/******************************************************************************/
/*                            CLASS                                           */
/******************************************************************************/

class	ClapTrap
{
	protected:
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
		ClapTrap(std::string _name);
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
