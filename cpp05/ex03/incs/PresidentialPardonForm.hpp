/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:52:52 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/19 16:34:53 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_H
# define PRESIDENTIALPARDONFORM_CLASS_H

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;

	PresidentialPardonForm(void);

public:
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm(void);

	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

	void execute(Bureaucrat const &executor) const;
};

#endif