/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:02:40 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/31 20:34:57 by jihoh            ###   ########.fr       */
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