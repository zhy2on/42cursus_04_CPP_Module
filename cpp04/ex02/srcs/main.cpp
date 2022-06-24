/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:59:26 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/24 17:06:26 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

# define NUM_OF_ANIMALS 4

int main()
{
	{
		Animal *animals[3];

		animals[0] = new Cat();
		animals[1] = new Dog();
		animals[2] = new Dog();
		// animals[2] = new Animal(); // cannot instantiate abstract class

		for (int i = 0; i < 3; i++)
		{
			std::cout << animals[i]->getType() << std::endl;
			animals[i]->makeSound();
			delete animals[i];
		}
		system("leaks animal02");
	}
	return 0;
}