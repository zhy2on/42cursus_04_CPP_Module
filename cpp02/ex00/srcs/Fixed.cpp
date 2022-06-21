/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:45:59 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/02 19:04:35 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_value = fixed.fixed_point_value;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point_value = fixed.fixed_point_value;
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_value);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_value = raw;
}