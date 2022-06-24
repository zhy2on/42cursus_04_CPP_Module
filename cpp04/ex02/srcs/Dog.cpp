/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:28:50 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/24 14:38:51 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &rhs) : Animal(rhs)
{
	this->brain = new Brain(*rhs.getBrain());
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*rhs.getBrain());
		std::cout << "Dog assignment operatior called" << std::endl;
	}
	return (*this);
}

Dog::~Dog()
{
	delete brain;
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

Brain *Dog::getBrain(void) const
{
	return (this->brain);
}

const std::string &Dog::getBrainIdea(int idx) const
{
	return (this->brain->getIdea(idx));
}

void Dog::setBrainIdea(int idx, std::string idea)
{
	this->brain->setIdea(idx, idea);
}
