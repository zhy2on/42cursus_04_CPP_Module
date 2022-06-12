/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:52:37 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/10 19:15:51 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_H
# define WRONGCAT_CLASS_H

# include "WrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat : public WrongAnimal
{
private:
	Brain *brain;

public:
	WrongCat(void);
	WrongCat(const WrongCat &rhs);
	~WrongCat();

	WrongCat &operator=(const WrongCat &rhs);

	void makeSound(void) const;
};

#endif