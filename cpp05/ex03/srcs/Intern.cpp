/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:12:32 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/19 17:25:13 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern &rhs)
{
	*this = rhs;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return *this;
}

Form *Intern::makeForm(const std::string &formName, const std::string &target) const
{
	t_formList forms[] = {
		{"presidential pardon", new PresidentialPardonForm(target)},
		{"robotomy request", new RobotomyRequestForm(target)},
		{"shrubbery creation", new ShrubberyCreationForm(target)},
		{"", NULL}};
	Form *resultForm = NULL;
	for (int i = 0; forms[i].formType != NULL; i++)
	{
		if (forms[i].formName == formName)
			resultForm = forms[i].formType;
		else
			delete forms[i].formType;
	}
	if (resultForm == NULL)
		std::cout << "Intern coudln't find the form " << formName << std::endl;
	else
		std::cout << "Intern creates " << formName << std::endl;
	return resultForm;
}