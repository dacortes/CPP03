/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 08:58:21 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/13 18:56:01 by dacortes         ###   ########.fr       */
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

void	test_init_constructor(ClapTrap &clap, ScavTrap &Scav)
{
	std::cout << "----------------------------------" << std::endl;
	std::cout << T << "Test init" << E << std::endl;
	std::cout << clap << std::endl;
	std::cout << Scav << std::endl;
	std::cout << "----------------------------------" << std::endl;
}

void	combat_knife(ClapTrap &clap, ScavTrap &scav)
{
	std::cout << "----------------------------------" << std::endl;
	std::cout << T << "Combat_knife" << E << std::endl;
	clap.setAttack(50);
	
	clap.attack(scav.getName());
	scav.setHits(clap.getAttack());
	std::cout << O << "current hits points: " << scav.getName() << E
		<< " " << scav.getHits() << std::endl;
	scav.attack(clap.getName());
	clap.setHits(scav.getAttack());
	std::cout << Y << "current hits points: " << clap.getName() << E
		<< " " << clap.getHits() << std::endl;
	std::cout << "----------------------------------" << std::endl;
}

int	main(void)
{
	ClapTrap	foo("eralonso");
	ScavTrap	fooo("frankgar");

	test_init_constructor(foo, fooo);
	combat_knife(foo, fooo);
	return (EXIT_SUCCESS);
}
