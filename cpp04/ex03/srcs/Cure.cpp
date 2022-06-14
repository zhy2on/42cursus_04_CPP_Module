/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:37:09 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/14 13:01:17 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	// std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &rhs) : AMateria("cure")
{
	this->type = rhs.type;
	// std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure(void)
{
	// std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &rhs)
{
	this->type = rhs.type;
	// std::cout << "Cure assignment operator called" << std::endl;
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName()
			  << "'s wounds *" << std::endl;
}