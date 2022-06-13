/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:10:57 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/13 19:19:12 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_H
# define MATERIASOURCE_CLASS_H

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	static const int materias_size = 4;
	int	n_of_learned;
	AMateria *materias[MateriaSource::materias_size];

public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &rhs);
	~MateriaSource(void);

	MateriaSource &operator=(const MateriaSource &rhs);

	void learnMateria(AMateria *m);
	AMateria *createMateria(std::string const &type);
};

#endif