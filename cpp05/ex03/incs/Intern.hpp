/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:07:20 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/19 17:23:42 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_H
# define INTERN_CLASS_H

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	typedef struct s_formList
	{
		std::string formName;
		Form *formType;
	} t_formList;

public:
	Intern(void);
	Intern(const Intern &rhs);
	~Intern(void);

	Intern &operator=(const Intern &rhs);

	Form *makeForm(const std::string &formName, const std::string &target) const;
};

#endif