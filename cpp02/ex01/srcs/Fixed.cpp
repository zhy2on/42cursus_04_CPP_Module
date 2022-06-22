/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:45:59 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/22 19:47:39 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_value = 0;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = value << this->nb_of_fractional_bits;
}

Fixed::Fixed( const float value )
{
	int	power = 1;

	std::cout << "Float constructor called" << std::endl;
	for (int i = 0; i < this->nb_of_fractional_bits; i++)
		power *= 2;
	this->fixed_point_value = roundf(value * power);
}

Fixed::Fixed( const Fixed &fixed )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
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

float	Fixed::toFloat( void ) const
{
	int	power = 1;

	for (int i = 0; i < this->nb_of_fractional_bits; i++)
		power *= 2;
	return ((float)this->fixed_point_value / power);
}

int		Fixed::toInt( void ) const
{
	return (this->fixed_point_value >> this->nb_of_fractional_bits);
}

std::ostream& operator<<( std::ostream &os, const Fixed &fixed )
{
	os << fixed.toFloat();
	return (os);
}