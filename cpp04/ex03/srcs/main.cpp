/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:09:25 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/24 16:51:07 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	{
		std::cout << "###--- Test1 ---###" << std::endl;
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");

		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter *bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;

		std::cout << std::endl;
	}
	{
		std::cout << "###--- Test2 ---###" << std::endl;
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");
		AMateria *tmp;

		for (int i = 0; i < 4; i++)
		{
			tmp = src->createMateria("ice");
			me->equip(tmp);
		}
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter *bob = new Character("bob");
		me->use(3, *bob);

		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->use(3, *bob);

		tmp = src->createMateria("anyting");
		me->equip(tmp);
		me->use(3, *bob);

		delete bob;
		delete me;
		delete src;

		std::cout << std::endl;
	}
	{
		std::cout << "###--- Deep copy test ---###" << std::endl;

		Character jihoh("Jihoh");
		IMateriaSource *src = new MateriaSource();
		AMateria *tmp;

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		tmp = src->createMateria("ice");
		jihoh.equip(tmp);
		tmp = src->createMateria("cure");
		jihoh.equip(tmp);

		Character bob(jihoh);
		bob.use(0, jihoh);
		bob.use(1, jihoh);

		jihoh.use(0, bob);
		jihoh.use(1, bob);

		delete src;

		std::cout << std::endl;
	}
	system("leaks materia");
	return 0;
}