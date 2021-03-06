/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:28:50 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/10 19:52:49 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &rhs)
{
	this->type = rhs.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	this->type = rhs.type;
	std::cout << "Dog assignment operatior called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout
	<<"       __" << std::endl
    <<"     /\\/'-," << std::endl
    <<" ,--\'\'\'\'  /" << std::endl
	<<"_,'. )   \\__" << std::endl
	<<"\"\"----\"\"\" --" << std::endl;
	std::cout << "> Wouf Wouf!" << std::endl;
}