/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:08:44 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/26 15:08:38 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
	: Form::Form("RobotomyRequestForm", 72, 45), target("")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: Form::Form("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		this->target = rhs.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() && (executor.getGrade() <= this->getGradeToExecute()))
	{
		std::cout << "Drrrr... Drrrr...." << std::endl;
		srand(time(NULL));
		if (std::rand() % 2)
			std::cout << this->target << " has been robotomized successfully" << std::endl;
		else
			std::cout << this->target << " failed to robotomize" << std::endl;
	}
	else
	{
		std::cerr << executor.getName() << " ";
		throw Form::CantExecuteForm();
	}
}