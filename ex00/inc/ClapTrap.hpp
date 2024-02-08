/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 09:00:08 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/08 18:59:49 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

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
		ClapTrap(ClapTrap &obj);
		ClapTrap(const ClapTrap &obj);
		ClapTrap &operator=(const ClapTrap &obj)
		~ClapTrao(void);
		/*
		 * Set Methods 
		*/

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

#endif
