/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 08:58:21 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/11 17:30:11 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	foo;

	foo.setName("foo");
	foo.attack("eralonso");
	std::cout << "Energy: " << foo.getEnergy() << std::endl;
	std::cout << "Hit points: " << foo.getHits() << std::endl;
	foo.beRepaired(2);
	std::cout << "Energy: " << foo.getEnergy() << std::endl;
	foo.beRepaired(10);
	foo.beRepaired(10);
	foo.beRepaired(10);
	foo.beRepaired(10);
	foo.beRepaired(10);
	foo.beRepaired(10);
	foo.beRepaired(10);
	foo.beRepaired(10);
	foo.beRepaired(10);
	foo.beRepaired(10);
	foo.beRepaired(10);
	foo.beRepaired(10);
	foo.beRepaired(10);
	foo.beRepaired(10);
	std::cout << "Hit points: " << foo.getHits() << std::endl;
	std::cout << "Energy: " << foo.getEnergy() << std::endl;
	return (EXIT_SUCCESS);
}
