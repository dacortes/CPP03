/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 09:49:30 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/16 16:57:07 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

/******************************************************************************/
/*                            INCLUDES                                        */
/******************************************************************************/
# include "ClapTrap.hpp" 
# include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		/*
		 * Orthodox Canonical Form
		*/
		FragTrap(void);
		FragTrap(const FragTrap &obj);
		FragTrap(std::string name);
		FragTrap &operator=(const FragTrap &obj);
		~FragTrap(void);
		/*
		 * Members funtions
		*/
		void	highFivesGuys(void);
};

std::ostream &operator<<(std::ostream &os, const FragTrap &obj);
#endif
