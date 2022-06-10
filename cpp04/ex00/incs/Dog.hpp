/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:26:51 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/10 16:42:42 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_H
# define DOG_CLASS_H

# include "Animal.hpp"

class Dog : public Animal
{
private:

public:
	Dog(void);
	Dog(const Dog &rhs);
	~Dog(void);

	Dog &operator=(const Dog &rhs);

	void makeSound(void) const;
};

#endif