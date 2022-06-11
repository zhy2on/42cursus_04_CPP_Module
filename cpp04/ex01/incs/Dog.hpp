/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:26:51 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/11 16:51:50 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_H
# define DOG_CLASS_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;

public:
	Dog(void);
	Dog(const Dog &rhs);
	~Dog(void);

	Dog &operator=(const Dog &rhs);

	void makeSound(void) const;
	Brain *getBrain(void) const;
	const std::string &getBrainIdea(int idx) const;
	void setBrainIdea(int idx, std::string idea);
};

#endif