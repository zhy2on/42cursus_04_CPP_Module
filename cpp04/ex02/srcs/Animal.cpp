/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:05:23 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/12 17:39:22 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	this->type = rhs.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	this->type = rhs.type;
	std::cout << "Animal assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal default destructor called" << std::endl;
}

const std::string &Animal::getType(void) const
{
	return (this->type);
}