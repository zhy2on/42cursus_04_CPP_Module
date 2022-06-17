/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:57:01 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/17 18:16:15 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
	: name(""), grade(Bureaucrat::highestGrade)
{
	checkGrade();
}

Bureaucrat::Bureaucrat(const std::string name, const int grade)
	: name(name), grade(grade)
{
	checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
	: name(rhs.name), grade(rhs.grade)
{
	checkGrade();
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->grade = rhs.grade;
	std::cout << "Warning: name can not be copied. Only grade is copied." << std::endl;
	checkGrade();
	return *this;
}

const std::string &Bureaucrat::getName(void) const
{
	return (this->name);
}

const int &Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade(const int n)
{
	this->grade -= n;
	checkGrade();
}

void Bureaucrat::decrementGrade(const int n)
{
	this->grade += n;
	checkGrade();
}

void Bureaucrat::checkGrade(void) const
{
	if (this->grade < Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<< (std::ostream &os, const Bureaucrat &rhs)
{
	os << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade();
	return os;
}