/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:59:26 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/24 14:14:49 by jihoh            ###   ########.fr       */
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

		system("leaks animal01");
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
		system("leaks animal01");

		std::cout << "-----------Deep copy Test-----------" << std::endl;
		Dog d1;
		Dog d2 = d1;
		Dog d3;
//		d3 = d1;
		d1.getBrain()->setIdea(0, "idea 99");
		d3 = d1;

		std::cout << std::endl;
		for (int index = 0; index < 100; index++)
			std::cout << d1.getBrain()->getIdea(index) << " ";
		std::cout << std::endl << std::endl;
		for (int index = 0; index < 100; index++)
			std::cout << d2.getBrain()->getIdea(index) << " ";
		std::cout << std::endl << std::endl;
		for (int index = 0; index < 100; index++)
			std::cout << d3.getBrain()->getIdea(index) << " ";
		std::cout << std::endl << std::endl;
		system("leaks animal01");
	}
	return 0;
}
