/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:10:17 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/09 20:35:33 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "Parameter FragTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs) : ClapTrap(rhs), FragTrap(rhs), ScavTrap(rhs)
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	this->name = rhs.name;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;

	std::cout << "DiamondTrap assignement operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap My name is " << this->name << std::endl
			  << "And my ClapTrap name is " << ClapTrap::name
			  << std::endl
			  << std::endl;
}