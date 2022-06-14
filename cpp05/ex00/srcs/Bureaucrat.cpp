/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:57:01 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/14 18:16:47 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
	: name(""), grade(1)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
	this->name = rhs.name;
	this->grade = rhs.grade;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->name = rhs.name;
	this->grade = rhs.grade;
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

std::ostream &operator<< (std::ostream &os, const Bureaucrat &rhs)
{
	os << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade();
	return os;
}