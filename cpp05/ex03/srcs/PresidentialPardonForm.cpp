/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:08:44 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/19 16:51:09 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	: Form::Form("PresidentialPardonForm", 25, 5), target("")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: Form::Form("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->target = rhs.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() && (executor.getGrade() <= this->getGradeToExecute()))
	{
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox."
		<< std::endl;
	}
	else
	{
		std::cerr << executor.getName() << " ";
		throw Form::CantExecuteForm();
	}
}