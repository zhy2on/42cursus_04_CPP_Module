/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:34:43 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/09 15:28:39 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int	main()
{
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
	std::cout << std::endl;
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