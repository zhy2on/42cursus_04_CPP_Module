/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:45:18 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/09 20:25:35 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "Parameter ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
	this->name = rhs.name;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;
	std::cout << "Copy ScavTrap constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	this->name = rhs.name;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;

	std::cout << "ScavTrap assignement operator called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks "
				  << target << ", causing " << this->attack_damage
				  << " points of damage!" << std::endl
				  << std::endl;
		this->energy_points--;
	}
	else
	{
		std::cout << "ScavTrap " << this->name
				  << " is out of points" << std::endl
				  << "Can't attack " << target << std::endl << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << "##### ----- ##### ----- ##### ----- #####" << std::endl
			  << "ScavTrap " << this->name
			  << " is now in Gatekeeper mode!" << std::endl
			  << "##### ----- ##### ----- ##### ----- #####"
			  << std::endl
			  << std::endl;
}