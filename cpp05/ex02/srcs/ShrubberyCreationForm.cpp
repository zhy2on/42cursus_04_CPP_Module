/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:08:44 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/26 15:15:14 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: Form::Form("ShrubberyCreationForm", 145, 137), target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: Form::Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
	: Form::Form(rhs), target(rhs.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		this->target = rhs.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() && (executor.getGrade() <= this->getGradeToExecute()))
	{
		std::ofstream ofs;

		ofs.open(this->target + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
		ofs << "    ###" << std::endl
			<< "   #o###" << std::endl
			<< " #####o###" << std::endl
			<< "#o#\\#|#/###" << std::endl
			<< " ###\\|/#o#" << std::endl
			<< "  # }|{  #" << std::endl
			<< "    }|{" << std::endl;
		std::cout << "Create shrubbery file" << std::endl;
	}
	else
	{
		std::cerr << executor.getName() << " ";
		throw Form::CantExecuteForm();
	}
}