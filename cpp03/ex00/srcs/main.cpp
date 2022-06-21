/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:34:43 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/09 14:55:13 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main()
{
	ClapTrap cl4pTP("cl4pTP");

	cl4pTP.attack("Calypso Twins");
	cl4pTP.takeDamage(6);
	cl4pTP.beRepaired(4);
	cl4pTP.takeDamage(3);
	cl4pTP.beRepaired(8);
	cl4pTP.takeDamage(17);
	cl4pTP.attack("Calypso Twins");
	cl4pTP.beRepaired(1);
}