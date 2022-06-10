/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:59:26 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/10 20:19:59 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << "\033[0;32m";
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); // will output the cat sound!
		j->makeSound();
		std::cout << "\033[0m";

		delete j;
		delete i;

		system("leaks animalBrain");
	}
	{
		const Animal *animals[6];

		for (int i = 0; i < 3; i++)
			animals[i] = new Dog();
		for (int i = 3; i < 6; i++)
			animals[i] = new Cat();

		for (int i = 0; i < 6; i++)
			delete animals[i];

		system("leaks animalBrain");
	}
	{
		Dog dog = Dog();
		Cat cat = Cat();
		Dog copiedDog = dog;
		Cat copiedCat = cat;

		std::cout << "\033[0;32m"
				  << "# Brain memory" << std::endl
				  << "Dog: " << dog.getBrain() << std::endl
				  << "Copied dog: " << copiedDog.getBrain() << std::endl
				  << "Cat: " << cat.getBrain() << std::endl
				  << "Copied cat: " << copiedCat.getBrain() << std::endl
				  << "\033[0m";
	}
	return 0;
}