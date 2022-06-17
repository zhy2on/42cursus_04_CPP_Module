/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 20:26:19 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/17 18:29:06 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
	: name(""), isSigned(false), gradeToSign(Form::lowestGrade), gradeToExecute(Form::lowestGrade)
{
	checkGrade();
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute)
	: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	checkGrade();
}

Form::Form(const Form &rhs)
	: name(rhs.name), isSigned(rhs.isSigned), gradeToSign(rhs.gradeToSign), gradeToExecute(rhs.gradeToExecute)
{
	checkGrade();
}

Form::~Form()
{
}

Form &Form::operator=(const Form &rhs)
{
	this->isSigned = rhs.isSigned;
	std::cout << "Warning: Only isSigned can be copied." << std::endl;
	checkGrade();
	return *this;
}

const std::string &Form::getName(void) const
{
	return this->name;
}

bool Form::getIsSigned(void) const
{
	return this->isSigned;
}

int Form::getGradeToSign(void) const
{
	return this->gradeToSign;
}

int Form::getGradeToExecute(void) const
{
	return this->gradeToExecute;
}

bool Form::beSigned(const Bureaucrat &rhs)
{
	if (rhs.getGrade() <= this->gradeToSign)
		this->isSigned = true;
	else
		this->isSigned = false;
	if (rhs.getGrade() > Form::lowestGrade)
		throw Form::GradeTooLowException();
	return this->isSigned;
}

void Form::checkGrade(void) const
{
	if (this->gradeToSign < Form::highestGrade || this->gradeToExecute < Form:: highestGrade)
		throw Form::GradeTooHighException();
	else if (this->gradeToSign > Form::lowestGrade || this->gradeToExecute > Form::lowestGrade)
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &rhs)
{
	os << rhs.getName()
	   << ", Required grade to sign " << rhs.getGradeToSign()
	   << ", Required grade to execute " << rhs.getGradeToExecute()
	   << ", Is signed ";
	if (rhs.getIsSigned())
		std::cout << "true";
	else
		std::cout << "false";
	return os;
}