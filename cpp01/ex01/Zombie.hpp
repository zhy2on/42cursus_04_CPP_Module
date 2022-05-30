/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:48:37 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/30 21:05:41 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H
# include <iostream>
# include <string.h>

class Zombie
{
private:
	std::string	name;

public:
	Zombie();
	Zombie( std::string name );
	~Zombie();
	void	announce( void );
	void	set_name( std::string name );
	Zombie* zombieHorde( int N, std::string name );
};


#endif