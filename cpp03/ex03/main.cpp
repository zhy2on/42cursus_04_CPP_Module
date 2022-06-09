/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:34:43 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/09 18:48:25 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int	main()
{
	{
		DiamondTrap di4mondTP("di4mondTP");

		di4mondTP.attack("Calypso Twins");
		di4mondTP.takeDamage(60);
		di4mondTP.beRepaired(4);
		di4mondTP.takeDamage(30);
		di4mondTP.highFivesGuys();
		di4mondTP.whoAmI();
		di4mondTP.beRepaired(20);
		di4mondTP.takeDamage(40);
	}
	std::cout << std::endl << "+------+------+------+------+------+------+" << std::endl << std::endl;
	{
		FragTrap fr4gTP("fr4gTP");

		fr4gTP.attack("Calypso Twins");
		fr4gTP.takeDamage(60);
		fr4gTP.beRepaired(4);
		fr4gTP.takeDamage(30);
		fr4gTP.highFivesGuys();
		fr4gTP.beRepaired(20);
		fr4gTP.takeDamage(40);
	}
	std::cout << std::endl << "+------+------+------+------+------+------+" << std::endl << std::endl;
	{
		ScavTrap sc4vTP("sc4vTP");

		sc4vTP.attack("Calypso Twins");
		sc4vTP.takeDamage(60);
		sc4vTP.beRepaired(4);
		sc4vTP.takeDamage(30);
		sc4vTP.guardGate();
		sc4vTP.beRepaired(20);
		sc4vTP.takeDamage(40);
	}
	std::cout << std::endl << "+------+------+------+------+------+------+" << std::endl << std::endl;
	{
		ClapTrap cl4pTP("cl4pTP");

		cl4pTP.attack("Calypso Twins");
		cl4pTP.takeDamage(6);
		cl4pTP.beRepaired(4);
		cl4pTP.takeDamage(3);
		cl4pTP.beRepaired(8);
		cl4pTP.takeDamage(17);
	}
}