/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:18:19 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/26 15:16:54 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Form *form;
	Bureaucrat mark = Bureaucrat("Mark", 1);
	Bureaucrat peter = Bureaucrat("Peter", 150);

	try
	{
		form = new ShrubberyCreationForm("home");
		mark.signForm(*form);
		mark.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		form = new RobotomyRequestForm("Marvin");
		mark.signForm(*form);
		mark.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		form = new PresidentialPardonForm("Bob");
		mark.signForm(*form);
		mark.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		form = new PresidentialPardonForm("Bob");
		mark.signForm(*form);
		peter.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		PresidentialPardonForm a("A");
		PresidentialPardonForm b(a);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		mark.signForm(a);
		b = a;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		mark.executeForm(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}