/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:30:22 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/22 19:26:34 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H
# include <iostream>
# include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon();
	~Weapon();
	Weapon( std::string type );
	const std::string	&getType( void ) const;
	void		setType( std::string type );
};

#endif