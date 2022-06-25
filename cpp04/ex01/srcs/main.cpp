/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:59:26 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/25 15:33:13 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

# define NUM_OF_ANIMALS 4

int main()
{
	{
		Animal *animals[NUM_OF_ANIMALS];

		for (int i = 0; i < NUM_OF_ANIMALS; i++)
		{
			if (i < NUM_OF_ANIMALS / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			std::cout << animals[i]->getType() << std::endl;
		}
		
		for (int i = 0; i < NUM_OF_ANIMALS; i++)
			delete animals[i];
		std::cout << std::endl;
	}
	system("leaks animal01");
	return 0;
}
