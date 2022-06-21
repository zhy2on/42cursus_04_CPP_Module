/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:51:01 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/30 21:16:07 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie	*zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombies[i].set_name(name);
		zombies[i].announce();
	}
	return (zombies);
}