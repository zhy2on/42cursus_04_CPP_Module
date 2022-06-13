/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:42:43 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/13 17:21:46 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_H
# define CHARACTER_CLASS_H

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	static const int inventory_size = 4;
	AMateria *inventory[Character::inventory_size];
	int n_of_equip;

	Character(void);

public:
	Character(std::string name);
	Character(const Character &rhs);
	~Character();

	Character &operator=(const Character &rhs);

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif