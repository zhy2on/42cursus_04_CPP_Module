/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:34:43 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/06 20:38:17 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main()
{
	ClapTrap ai("AI");

	ai.attack("jihoh");
	ai.takeDamage(6);
	ai.beRepaired(4);
	ai.takeDamage(3);
	ai.beRepaired(8);
	ai.takeDamage(17);
	ai.attack("jihoh");
	ai.beRepaired(1);
}