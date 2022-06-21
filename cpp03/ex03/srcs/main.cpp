/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:34:43 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/09 20:44:41 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int	main()
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