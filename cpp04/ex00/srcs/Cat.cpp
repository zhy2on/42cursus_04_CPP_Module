/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:14:19 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/10 18:36:04 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &rhs)
{
	this->type = rhs.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout
	<< "  \\    /\\ " << std::endl
    << "   )  ( ')  " << std::endl
    << "   (  /  )  " << std::endl
	<< "   \\ (__)|   " << std::endl;
	std::cout << "> Meeeeow" << std::endl;
}
