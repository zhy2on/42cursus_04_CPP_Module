/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:26:51 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/24 15:14:09 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_H
# define DOG_CLASS_H

# include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain *brain;

public:
	Dog(void);
	Dog(const Dog &rhs);
	~Dog(void);

	Dog &operator=(const Dog &rhs);
	Animal &operator=(const Animal &rhs);

	void makeSound(void) const;
	Brain *getBrain(void) const;
	const std::string &getBrainIdea(int idx) const;
	void setBrainIdea(int idx, std::string idea);
};

#endif