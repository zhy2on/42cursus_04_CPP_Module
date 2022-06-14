/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:46:17 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/14 13:03:49 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
	: name(""), n_of_equip(0)
{
	for (int i = 0; i < Character::inventory_size; i++)
		this->inventory[i] = NULL;
	// std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name)
	: name(name), n_of_equip(0)
{
	for (int i = 0; i < Character::inventory_size; i++)
		this->inventory[i] = NULL;
	// std::cout << "Character parameter constructor called" << std::endl;
}

Character::Character(const Character &rhs)
{
	this->name = rhs.name;
	this->n_of_equip = rhs.n_of_equip;

	for (int i = 0; i < Character::inventory_size; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = rhs.inventory[i];
	}
	// std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < Character::inventory_size; i++)
		delete this->inventory[i];
	// std::cout << "Character destructor called" << std::endl;
}

Character &Character::operator=(const Character &rhs)
{
	this->name = rhs.name;
	this->n_of_equip = rhs.n_of_equip;

	for (int i = 0; i < Character::inventory_size; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = rhs.inventory[i];
	}
	// std::cout << "Character assignment operator called" << std::endl;
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	if (this->n_of_equip < Character::inventory_size)
	{
		for (int i = 0; i < Character::inventory_size; i++)
		{
			if (!this->inventory[i])
			{
				this->inventory[i] = m;
				break ;
			}
		}
	}
}

void Character::unequip(int idx)
{
	int i;

	if (idx < 0 || idx >= this->n_of_equip || !this->inventory[idx])
		return ;
	for (i = idx; i < this->n_of_equip - 1; i++)
		this->inventory[i] = this->inventory[i + 1];
	this->n_of_equip--;
	this->inventory[i] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= this->n_of_equip || !this->inventory[idx])
		return ;
	this->inventory[idx]->use(target);
}