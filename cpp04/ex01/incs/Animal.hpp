/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:32:14 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/12 16:39:56 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H

# include <iostream>
# include <string>

# include "Brain.hpp"

class Animal
{
protected:
	std::string type;

public:
	Animal(void);
	Animal(const Animal &rhs);
	virtual ~Animal(void);

	virtual Animal &operator=(const Animal &rhs);

	virtual void makeSound(void) const;
	const std::string &getType(void) const;
	virtual Brain *getBrain(void) const = 0;
	virtual const std::string &getBrainIdea(int idx) const = 0;
	virtual void setBrainIdea(int idx, std::string idea) = 0;
};

#endif