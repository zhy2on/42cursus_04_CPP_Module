/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:30:22 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/31 20:16:56 by jihoh            ###   ########.fr       */
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
	std::string	getType( void ) const;
	void		setType( std::string type );
};

#endif