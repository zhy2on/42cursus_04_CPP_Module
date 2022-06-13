/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:51:39 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/13 19:45:51 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
	: type(type)
{
	// std::cout << "AMateria parameter constructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->type);
}
