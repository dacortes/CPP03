/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 08:58:21 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/13 18:17:38 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

void	test_energy_consumption_beRepaired(ClapTrap &obj)
{
	std::cout << O << "current energy: " << E << obj.getEnergy() << std::endl;
	for (int i = 0; i < 11; i++)
		obj.beRepaired(i);
	std::cout << O << "Energy: " << E << obj.getEnergy() << std::endl;
}

void	test_takeDamage(ClapTrap &obj)
{
	std::cout << O << "current hits points: " << E << obj.getHits()
		<< std::endl;
	for (int i = 0; i < 11; i++)
		obj.takeDamage(i);
	std::cout << O << "current hits points: " << E << obj.getHits()
		<< std::endl;
}

int	main(void)
{
	/*ClapTrap	foo;

	foo.setName("foo");
	foo.attack("eralonso");
	test_energy_consumption_beRepaired(foo);
	test_takeDamage(foo);
	foo.attack("eralonso");
	test_energy_consumption_beRepaired(foo);*/
	ScavTrap foo("frankgar");

	std::cout << foo << std::endl;
	return (EXIT_SUCCESS);
}
