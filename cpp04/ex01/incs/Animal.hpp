/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:32:14 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/25 15:34:17 by jihoh            ###   ########.fr       */
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

	virtual void makeSound(void) const;
	const std::string &getType(void) const;
};

#endif