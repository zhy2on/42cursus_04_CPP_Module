/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:33:05 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/22 19:26:29 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->type = type;
}

const std::string	&Weapon::getType( void ) const
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