/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:51:16 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/13 15:29:24 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_H
# define ICE_CLASS_H

# include "AMateria.hpp"

class Ice : public AMateria
{
protected:

public:
	Ice(void);
	Ice(const Ice &rhs);
	~Ice(void);

	Ice &operator=(const Ice &rhs);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif