/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:01:53 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/22 19:29:04 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H
# include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon	*weapon;

public:
	HumanA();
	~HumanA();
	HumanA( std::string name, Weapon &weapon );
	void	attack( void );
};

#endif