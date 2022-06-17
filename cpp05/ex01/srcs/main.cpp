/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:18:19 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/17 18:29:56 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Form f("form", 1, 0);

		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat mark = Bureaucrat("mark", 1);
		Form f("form", 150, 150);

		std::cout << mark << std::endl;
		std::cout << f << std::endl;
		mark.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat peter = Bureaucrat("peter", 10);
		Form f("form", 1, 1);

		std::cout << peter << std::endl;
		std::cout << f << std::endl;
		peter.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}