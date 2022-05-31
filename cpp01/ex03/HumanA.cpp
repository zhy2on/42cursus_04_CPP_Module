/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:02:27 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/31 20:37:22 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
{
	this->name = name;
	this->weapon = &weapon;
}

void	HumanA::attack( void )
{
	std::cout << this->name << "attacks with their " << this->weapon->getType() << std::endl;
}

HumanA::HumanA()
{
	
}

HumanA::~HumanA()
{
}