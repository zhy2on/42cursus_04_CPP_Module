/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:55:36 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/06 22:12:32 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_H
#define CLAPTRAP_CLASS_H

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;

public:
	ClapTrap(void);
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &rhs);
	~ClapTrap(void);

	ClapTrap &operator=(const ClapTrap &rhs);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void displayPoints(void);
};

#endif