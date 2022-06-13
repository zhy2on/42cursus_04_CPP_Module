/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:51:16 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/13 19:41:03 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_H
# define AMATERIA_CLASS_H

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string type;

public:
	AMateria(std::string const &type);
	virtual ~AMateria(void) {}

	std::string const &getType() const; // Returns the materia type

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target) { (void) target; }
};

#endif