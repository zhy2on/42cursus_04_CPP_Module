/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:24:20 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/30 20:45:39 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string name[] = {"Bob", "Alice", "John", "Andy", "Peter", "Mark"};
	Zombie	zombie("Foo");

	for (int i = 0; i < 6; i++)
		zombie.randomChump(name[i]);
	zombie.announce();
	return (0);
}