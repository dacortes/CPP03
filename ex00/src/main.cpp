/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 08:58:21 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/10 18:17:21 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	foo;

	foo.setName("foo");
	foo.attack("eralonso");
	std::cout << "Energy: " << foo.getEnergy() << std::endl;
	foo.takeDamage(1);
	foo.takeDamage(10);
	foo.takeDamage(10);
	foo.takeDamage(10);
	foo.takeDamage(10);
	foo.takeDamage(10);
	foo.takeDamage(10);
	return (EXIT_SUCCESS);
}
