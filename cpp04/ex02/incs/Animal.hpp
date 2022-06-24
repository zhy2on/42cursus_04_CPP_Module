/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:32:14 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/24 19:48:12 by jihoh            ###   ########.fr       */
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

	Animal &operator=(const Animal &rhs);

	virtual void makeSound(void) const = 0;
	const std::string &getType(void) const;
	virtual Brain *getBrain(void) const = 0;
	virtual const std::string &getBrainIdea(int idx) const = 0;
	virtual void setBrainIdea(int idx, std::string idea) = 0;
};

#endif