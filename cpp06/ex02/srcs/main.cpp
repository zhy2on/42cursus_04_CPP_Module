/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:53:17 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/23 17:00:47 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int p = rand() % 3;
	if (p == 0)
		return new A();
	else if (p == 1)
		return new B();
	else if (p == 2)
		return new C();
	else
		throw new std::exception();
}

void identify(Base *p)
{
	if (A *a = dynamic_cast<A *>(p))
	{
		std::cout << "A" << std::endl;
	}
	else if (B *b = dynamic_cast<B *>(p))
	{
		std::cout << "B" << std::endl;
	}
	else if (C *c = dynamic_cast<C *>(p))
	{
		std::cout << "C" << std::endl;
	}
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(const std::exception& e) {}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch(const std::exception& e) {}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch(const std::exception& e) {}
}

int main(void)
{
	Base	*base;

	std::cout << "Identifying with pointers" << std::endl;
	for (int i = 0; i < 9; i++)
	{
		base = generate();
		identify(base);
		delete base;
	}

	std::cout << std::endl << "Identifying with references" << std::endl;
	for (int i = 0; i < 9; i++)
	{
		base = generate();
		identify(*base);
		delete base;
	}
	// system("leaks identify");
}