/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:59:26 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/24 17:04:43 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

# define NUM_OF_ANIMALS 4

int main()
{
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		delete j;
		delete i;
	}
	{
		std::cout << "########################################" << std::endl;
		std::cout << "###---Test with Base class pointer---###" << std::endl;
		std::cout << "########################################" << std::endl;

		Animal *animals[NUM_OF_ANIMALS];

		for (int i = 0; i < NUM_OF_ANIMALS; i++)
		{
			if (i < NUM_OF_ANIMALS / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			std::cout << animals[i]->getType() << std::endl;
		}

		animals[0]->setBrainIdea(0, "I'm hungry");
		animals[2]->setBrainIdea(0, "I'm thirsty");
		*animals[1] = *animals[0];
		*animals[3] = *animals[2];

		std::cout << "# Brain memory" << std::endl
				  << "Dog: " << animals[0]->getBrain() << std::endl
				  << "Copied dog: " << animals[1]->getBrain() << std::endl
				  << "Cat: " << animals[2]->getBrain() << std::endl
				  << "Copied cat: " << animals[3]->getBrain() << std::endl;

		std::cout << "# Ideas" << std::endl
				  << "Dog: " << animals[0]->getBrainIdea(0) << std::endl
				  << "Copied dog: " << animals[1]->getBrainIdea(0) << std::endl
				  << "Cat: " << animals[2]->getBrainIdea(0) << std::endl
				  << "Copied cat: " << animals[3]->getBrainIdea(0) << std::endl;
		
		for (int i = 0; i < NUM_OF_ANIMALS; i++)
			delete animals[i];
		std::cout << std::endl;
	}
	{
		std::cout << "##########################################" << std::endl;
		std::cout << "###---Test with Derived class object---###" << std::endl;
		std::cout << "##########################################" << std::endl;

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
	system("leaks animal01");
	return 0;
}
