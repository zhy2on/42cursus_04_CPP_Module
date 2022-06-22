/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:03:14 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/22 19:29:35 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->name = name;
}

void	HumanB::attack( void )
{
	std::cout << this->name << "attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
}

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}