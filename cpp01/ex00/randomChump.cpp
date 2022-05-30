/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:22:22 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/30 20:46:10 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::randomChump( std::string name )
{
	Zombie	*new_zombie;

	new_zombie = Zombie::newZombie(name);
	new_zombie->announce();
	new_zombie->~Zombie();
}