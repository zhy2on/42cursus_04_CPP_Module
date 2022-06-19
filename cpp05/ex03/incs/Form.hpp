/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 20:25:24 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/19 16:50:14 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_H
# define FORM_CLASS_H

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;

	static const int highestGrade = 1;
	static const int lowestGrade = 150;

	Form(void);
	void checkGrade(void) const;

public:
	Form(const std::string name, const int gradeToSign, const int gradeToExecute);
	Form(const Form &rhs);
	virtual ~Form(void);

	Form &operator=(const Form &rhs);

	const std::string &getName(void) const;
	bool getIsSigned(void) const;
	int getGradeToSign(void) const;
	int getGradeToExecute(void) const;
	bool beSigned(const Bureaucrat &rhs);
	virtual void execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Grade is too high");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Grade is too low");
		}
	};
	class CantExecuteForm : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("can not execute form");
		}
	};
};

std::ostream &operator<<(std::ostream &os, const Form &rhs);

#endif