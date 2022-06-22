/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:59:39 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/22 16:54:36 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	zombie;
	Zombie	*zombies;
	std::string name[] = {"Bob", "Alice", "John", "Andy", "Peter", "Mark"};

	for (int i = 0; i < 6; i++)
	{
		zombies = zombie.zombieHorde(i + 1, name[i]);
		delete[] zombies;
	}
	// system("leaks zombieHord");
	return (0);
}