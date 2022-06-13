/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:51:16 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/13 15:38:14 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_H
# define CURE_CLASS_H

# include "AMateria.hpp"

class Cure : public AMateria
{
protected:

public:
	Cure(void);
	Cure(const Cure &rhs);
	~Cure(void);

	Cure &operator=(const Cure &rhs);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif