/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:33:05 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/31 20:17:52 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->type = type;
}

std::string	Weapon::getType( void ) const
{
	return (this->type);
}

void	Weapon::setType( std::string type )
{
	this->type = type;
}

Weapon::Weapon()
{
	
}

Weapon::~Weapon()
{
}