/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:11:46 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/12 16:40:15 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
# define CAT_CLASS_H

# include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain *brain;

public:
	Cat(void);
	Cat(const Cat &rhs);
	~Cat();

	Cat &operator=(const Cat &rhs);
	Animal &operator=(const Animal &rhs);

	void makeSound(void) const;
	Brain *getBrain(void) const;
	const std::string &getBrainIdea(int idx) const;
	void setBrainIdea(int idx, std::string idea);
};

#endif