/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:14:19 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/24 14:38:45 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &rhs) : Animal(rhs)
{
	this->brain = new Brain(*rhs.getBrain());
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*rhs.getBrain());
		std::cout << "Cat assignment operatior called" << std::endl;
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
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

Brain *Cat::getBrain(void) const
{
	return (this->brain);
}

const std::string &Cat::getBrainIdea(int idx) const
{
	return (this->brain->getIdea(idx));
}

void Cat::setBrainIdea(int idx, std::string idea)
{
	this->brain->setIdea(idx, idea);
}
