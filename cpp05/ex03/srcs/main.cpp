/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:18:19 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/26 14:51:36 by jihoh            ###   ########.fr       */
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

	form = intern.makeForm("asfasdfsad", "some target");
	delete(form);

	form = intern.makeForm("presidential pardon", "Peter");
	delete(form);

	form = intern.makeForm("robotomy request", "Marvin");
	delete(form);

	form = intern.makeForm("shrubbery creation", "home");
	andy.signForm(*form);
	andy.executeForm(*form);
	delete(form);

	// system("leaks intern");
}