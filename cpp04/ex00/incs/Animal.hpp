/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:32:14 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/10 17:50:04 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal(void);
	Animal(const Animal &rhs);
	~Animal(void);

	Animal &operator=(const Animal &rhs);

	virtual void makeSound(void) const;
	const std::string &getType(void) const;
};

#endif