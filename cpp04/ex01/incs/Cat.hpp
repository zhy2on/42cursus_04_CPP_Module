/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:11:46 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/25 15:36:05 by jihoh            ###   ########.fr       */
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

	void makeSound(void) const;
	Brain *getBrain(void) const;
};

#endif