/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:59:26 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/11 16:54:54 by jihoh            ###   ########.fr       */
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

		delete j;
		delete i;

		system("leaks animalSound01");
	}
	{
		Dog *dog = new Dog();
		Cat *cat = new Cat();

		dog->setBrainIdea(0, "I'm hungry");
		cat->setBrainIdea(0, "I'm thirsty");
		Dog *copiedDog = new Dog(*dog);
		Cat *copiedCat = new Cat(*cat);

		std::cout << "\033[0;32m"
				  << "# Brain memory" << std::endl
				  << "Dog: " << dog->getBrain() << std::endl
				  << "Copied dog: " << copiedDog->getBrain() << std::endl
				  << "Cat: " << cat->getBrain() << std::endl
				  << "Copied cat: " << copiedCat->getBrain() << std::endl
				  << "\033[0m";

		std::cout << "\033[0;32m"
				  << "# Ideas" << std::endl
				  << "Dog: " << dog->getBrainIdea(0) << std::endl
				  << "Copied dog: " << copiedDog->getBrainIdea(0) << std::endl
				  << "Cat: " << cat->getBrainIdea(0) << std::endl
				  << "Copied cat: " << copiedCat->getBrainIdea(0) << std::endl
				  << "\033[0m";
		delete dog;
		delete cat;
		delete copiedDog;
		delete copiedCat;

		system("leaks animalSound01");
	}
	return 0;
}