/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:59:26 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/10 18:31:36 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << "\033[0;32m";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "\033[0m";

	const WrongAnimal *metaWrong = new WrongAnimal();
	const WrongAnimal *catWrong = new WrongCat();

	std::cout << "\033[0;32m";
	std::cout << catWrong->getType() << std::endl;
	catWrong->makeSound();
	metaWrong->makeSound();
	std::cout << "\033[0m";
	// system("leaks animalSound");
	return 0;
}