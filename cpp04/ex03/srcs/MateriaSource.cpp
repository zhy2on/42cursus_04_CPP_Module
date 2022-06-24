/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:13:48 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/24 16:48:14 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
	: n_of_learned(0)
{
	for (int i = 0; i < MateriaSource::materias_size; i++)
		this->materias[i] = NULL;
	// std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	for (int i = 0; i < MateriaSource::materias_size; i++)
	{
		if (rhs.materias[i])
			this->materias[i] = (rhs.materias[i])->clone();
		else
			this->materias[i] = NULL;
	}
	// std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < MateriaSource::materias_size; i++)
		delete this->materias[i];
	// std::cout << "MateriaSource default destructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < MateriaSource::materias_size; i++)
		{
			if (this->materias[i])
				delete this->materias[i];
			if (rhs.materias[i])
				this->materias[i] = (rhs.materias[i])->clone();
			else
				this->materias[i] = NULL;
		}
	}
	// std::cout << "MateriaSource assignment operator called" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->n_of_learned < MateriaSource::materias_size)
		this->materias[this->n_of_learned++] = m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->n_of_learned; i++)
	{
		if (this->materias[i]->getType() == type)
			return (this->materias[i]->clone());
	}
	return (NULL);
}