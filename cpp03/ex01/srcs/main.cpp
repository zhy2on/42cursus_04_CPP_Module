/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:34:43 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/09 20:41:22 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int	main()
{
	ScavTrap t("sc4vTP");
	ScavTrap sc4vTP(t);

	sc4vTP.attack("Calypso Twins");
	sc4vTP.takeDamage(60);
	sc4vTP.beRepaired(4);
	sc4vTP.takeDamage(30);
	sc4vTP.guardGate();
	sc4vTP.beRepaired(20);
	sc4vTP.takeDamage(40);
}