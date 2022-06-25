/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:18:19 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/25 18:41:39 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat jihoh = Bureaucrat("jihoh", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat jihoh = Bureaucrat("jihoh", 10);
		std::cout << jihoh << std::endl;
		jihoh.incrementGrade(9);
		std::cout << jihoh << std::endl;
		jihoh.decrementGrade(149);
		std::cout << jihoh << std::endl;
		jihoh.decrementGrade(100);
		std::cout << jihoh << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat jihoh = Bureaucrat("jihoh", 150);
		Bureaucrat test = Bureaucrat("test", 10);
		test = jihoh;
		std::cout << test << std::endl;
		test.incrementGrade(100);
		std::cout << test << std::endl;
		test.incrementGrade(100);
		std::cout << test << std::endl;
		test.incrementGrade(100);
		std::cout << test << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// system("leaks bureaucrat");
}