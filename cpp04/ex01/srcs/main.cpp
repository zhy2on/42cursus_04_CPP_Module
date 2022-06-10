/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:59:26 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/10 20:49:31 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

# define NUM_OF_ANIMALS 6

int main()
{
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		delete j;
		delete i;

		system("leaks animalBrain");
	}
	{
		const Animal *animals[NUM_OF_ANIMALS];

		for (int i = 0; i < NUM_OF_ANIMALS / 2; i++)
			animals[i] = new Dog();
		for (int i = NUM_OF_ANIMALS / 2; i < NUM_OF_ANIMALS; i++)
			animals[i] = new Cat();

		for (int i = 0; i < 6; i++)
			delete animals[i];

		system("leaks animalBrain");
	}
	{
		Dog *dog = new Dog();
		Cat *cat = new Cat();
		Dog *copiedDog = new Dog(*dog);
		Cat *copiedCat = new Cat(*cat);

		std::cout << "\033[0;32m"
				  << "# Brain memory" << std::endl
				  << "Dog: " << dog->getBrain() << std::endl
				  << "Copied dog: " << copiedDog->getBrain() << std::endl
				  << "Cat: " << cat->getBrain() << std::endl
				  << "Copied cat: " << copiedCat->getBrain() << std::endl
				  << "\033[0m";
		delete dog;
		delete cat;
		delete copiedDog;
		delete copiedCat;

		system("leaks animalBrain");
	}
	return 0;
}