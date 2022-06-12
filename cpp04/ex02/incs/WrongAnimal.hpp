/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:52:34 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/10 17:52:12 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_H
# define WRONGANIMAL_CLASS_H

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &rhs);
	~WrongAnimal(void);

	WrongAnimal &operator=(const WrongAnimal &rhs);

	void makeSound(void) const;
	const std::string &getType(void) const;
};

#endif