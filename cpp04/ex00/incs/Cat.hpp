/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:11:46 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/10 16:21:31 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
# define CAT_CLASS_H

# include "Animal.hpp"

class Cat : public Animal
{
private:

public:
	Cat(void);
	Cat(const Cat &rhs);
	~Cat();

	Cat &operator=(const Cat &rhs);

	void makeSound(void) const;
};

#endif