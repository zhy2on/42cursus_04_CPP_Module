/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:28:50 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/12 16:52:48 by jihoh            ###   ########.fr       */
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
	*(this->brain) = *(rhs.getBrain());
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	Animal::operator=(rhs);
	*(this->brain) = *(rhs.getBrain());
	std::cout << "Dog assignment operatior called" << std::endl;
	return (*this);
}

Animal &Dog::operator=(const Animal &rhs)
{
	Animal::operator=(rhs);
	*(this->brain) = *(rhs.getBrain());
	std::cout << "Dog assignment operatior called" << std::endl;
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