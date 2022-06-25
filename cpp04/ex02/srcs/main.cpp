/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:59:26 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/25 15:39:13 by jihoh            ###   ########.fr       */
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
	}
	{
		std::cout << "###---Test Deep copy---###" << std::endl;

		Dog d1;
		Cat c1;

		d1.setBrainIdea(99, "Wanna go outside!");
		c1.setBrainIdea(0, "Wanna go home");
		Dog d2 = d1;
		Cat c2 = c1;

		std::cout << "# Brain memory" << std::endl
				  << "Dog: " << d1.getBrain() << std::endl
				  << "Copied dog: " << d2.getBrain() << std::endl
				  << "Cat: " << c1.getBrain() << std::endl
				  << "Copied cat: " << c2.getBrain() << std::endl;

		std::cout << "# Ideas" << std::endl
				  << "Dog: " << d1.getBrainIdea(99) << std::endl
				  << "Copied dog: " << d1.getBrainIdea(99) << std::endl
				  << "Cat: " << c1.getBrainIdea(0) << std::endl
				  << "Copied cat: " << c2.getBrainIdea(0) << std::endl;
		std::cout << std::endl;
	}
	system("leaks animal02");
	return 0;
}