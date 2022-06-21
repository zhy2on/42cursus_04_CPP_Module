/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:34:43 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/09 20:42:43 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int	main()
{
	FragTrap t("fr4gTP");
	FragTrap fr4gTP(t);

	fr4gTP.attack("Calypso Twins");
	fr4gTP.takeDamage(60);
	fr4gTP.beRepaired(4);
	fr4gTP.takeDamage(30);
	fr4gTP.highFivesGuys();
	fr4gTP.beRepaired(20);
	fr4gTP.takeDamage(40);
}