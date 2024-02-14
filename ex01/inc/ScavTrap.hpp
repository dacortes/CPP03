/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:11:38 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/13 18:57:13 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

/******************************************************************************/
/*                            INCLUDES                                        */
/******************************************************************************/

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		/*
		 * Orthodox Canonical Form
		*/
		ScavTrap(void);
		ScavTrap(const ScavTrap &obj);
		ScavTrap(std::string name);
		ScavTrap &operator=(const ScavTrap &obj);
		~ScavTrap(void);
		/*
		 * Members funtions
		*/
		void	guardGate();
		void 	attack(const std::string &target);
};

std::ostream	&operator<<(std::ostream &os, const ScavTrap &obj);
#endif

