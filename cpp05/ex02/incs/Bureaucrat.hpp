/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:01:51 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/25 19:02:14 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_H
# define BUREAUCRAT_CLASS_H

# include <iostream>
# include <string>

# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grade;

	static const int lowestGrade = 150;
	static const int highestGrade = 1;

	Bureaucrat(void);
	void checkGrade(void) const;
	
public:
	Bureaucrat(const std::string name, const int grade);
	Bureaucrat(const Bureaucrat &rhs);
	~Bureaucrat(void);

	Bureaucrat &operator=(const Bureaucrat &rhs);

	const std::string &getName(void) const;
	const int &getGrade(void) const;

	void incrementGrade(const int n);
	void decrementGrade(const int n);
	void signForm(Form &form) const;
	void executeForm(Form &form) const;

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs);

#endif