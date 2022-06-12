/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:59:26 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/12 17:02:04 by jihoh            ###   ########.fr       */
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

		system("leaks animalSound01");
	}
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

		animals[0]->setBrainIdea(0, "I'm hungry");
		animals[2]->setBrainIdea(0, "I'm thirsty");
		*animals[1] = *animals[0];
		*animals[3] = *animals[2];

		std::cout << "\033[0;32m"
				  << "# Brain memory" << std::endl
				  << "Dog: " << animals[0]->getBrain() << std::endl
				  << "Copied dog: " << animals[1]->getBrain() << std::endl
				  << "Cat: " << animals[2]->getBrain() << std::endl
				  << "Copied cat: " << animals[3]->getBrain() << std::endl
				  << "\033[0m";

		std::cout << "\033[0;32m"
				  << "# Ideas" << std::endl
				  << "Dog: " << animals[0]->getBrainIdea(0) << std::endl
				  << "Copied dog: " << animals[1]->getBrainIdea(0) << std::endl
				  << "Cat: " << animals[2]->getBrainIdea(0) << std::endl
				  << "Copied cat: " << animals[3]->getBrainIdea(0) << std::endl
				  << "\033[0m";
		
		for (int i = 0; i < NUM_OF_ANIMALS; i++)
			delete animals[i];
		system("leaks animalSound01");
	}
	return 0;
}