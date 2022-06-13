/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:25:44 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/13 19:46:22 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	// std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &rhs) : AMateria("ice")
{
	this->type = rhs.type;
	// std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice(void)
{
	// std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &rhs)
{
	this->type = rhs.type;
	// std::cout << "Ice assignment operator called" << std::endl;
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
			  << " *" << std::endl;
}