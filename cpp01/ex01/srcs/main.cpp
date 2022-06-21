/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:59:39 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/30 21:19:39 by jihoh            ###   ########.fr       */
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
		zombies = zombie.zombieHorde(i, name[i]);
		delete[] zombies;
	}
	// system("leaks zombieHord");
	return (0);
}