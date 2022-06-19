/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:18:19 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/19 17:34:24 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern intern;
	Bureaucrat andy("Andy", 10);
	Form *form = NULL;

	form = intern.makeForm("a file doesn't exist", "some target");
	delete(form);

	form = intern.makeForm("presidential pardon", "Peter");
	delete(form);

	form = intern.makeForm("robotomy request", "Mark");
	delete(form);

	form = intern.makeForm("shrubbery creation", "home");
	{
		andy.signForm(*form);
		andy.executeForm(*form);
	}
	delete(form);

	// system("leaks intern");
}