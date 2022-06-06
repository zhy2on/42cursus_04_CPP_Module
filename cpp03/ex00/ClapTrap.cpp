/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:56:13 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/06 20:37:53 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
	: name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	*this = rhs;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	this->name = rhs.name;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;

	std::cout << "Assignement operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks "
				  << target << ", causing " << this->attack_damage
				  << " points of damage!" << std::endl
				  << std::endl;
		this->energy_points--;
	}
	else
	{
		std::cout << "ClapTrap " << this->name
				  << " is out of points" << std::endl
				  << "Can't attack " << target << std::endl << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << "ClapTrap " << this->name << " took "
			  << amount << " points of damage" << std::endl;
	ClapTrap::displayPoints();
	if (!this->hit_points || !this->energy_points)
	{
		std::cout << "Nooo.. " << this->name
				  << " now can't do anything 0<----<" << std::endl;
	}
	else
	{
		std::cout << "Now " << this->name << " has only "
				  << this->hit_points << " hit points" << std::endl;
	}
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		this->hit_points += amount;
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " took "
				  << amount << " hit points" << std::endl;
		ClapTrap::displayPoints();
		std::cout << "Now " << this->name << " has "
				  << this->hit_points << " hit points" << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name
				  << " is out of points" << std::endl
				  << "Can't be repaired" << std::endl << std::endl;
	}
}

void ClapTrap::displayPoints(void)
{
	std::cout << "hit points	: \033[1;31m";
	for (int i = 0; i < this->hit_points; i++)
		std::cout << "| ";
	std::cout << "\033[0m" << std::endl;
	std::cout << "energy		: \033[1;32m";
	for (int i = 0; i < this->energy_points; i++)
		std::cout << "| ";
	std::cout << "\033[0m" << std::endl;
}
