/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:02:40 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/22 19:29:23 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H
# include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon	*weapon;

public:
	HumanB();
	~HumanB();
	HumanB( std::string name );
	void	attack( void );
	void	setWeapon( Weapon &weapon );
};

#endif