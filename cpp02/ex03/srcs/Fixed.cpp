/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:45:59 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/23 13:54:27 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_point_value = 0;
}

Fixed::Fixed( const int value )
{
	this->fixed_point_value = value << this->nb_of_fractional_bits;
}

Fixed::Fixed( const float value )
{
	int	power = 1;

	for (int i = 0; i < this->nb_of_fractional_bits; i++)
		power *= 2;
	this->fixed_point_value = roundf(value * power);
}

Fixed::Fixed( const Fixed &fixed )
{
	this->fixed_point_value = fixed.fixed_point_value;
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	this->fixed_point_value = fixed.fixed_point_value;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (this->fixed_point_value);
}

void	Fixed::setRawBits( int const raw )
{
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

bool	Fixed::operator>(const Fixed &fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return (!(*this < fixed));
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return (!(*this > fixed));
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return (!(*this == fixed));
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	Fixed	f(this->toFloat() + fixed.toFloat());

	return (f);
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	Fixed	f(this->toFloat() - fixed.toFloat());

	return (f);
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	Fixed	f(this->toFloat() * fixed.toFloat());

	return (f);
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	Fixed	f(this->toFloat() / fixed.toFloat());

	return (f);
}

Fixed	&Fixed::operator++( void )
{
	this->fixed_point_value++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	before(*this);

	this->fixed_point_value++;
	return (before);
}

Fixed	&Fixed::operator--( void )
{
	this->fixed_point_value--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	before(*this);

	this->fixed_point_value--;
	return (before);
}

Fixed	&Fixed::min( Fixed &a, Fixed &b)
{
	return (!(b < a) ? a : b);
}

const Fixed	&Fixed::min( const Fixed &a, const Fixed &b)
{
	return (!(b < a) ? a : b);
}

Fixed	&Fixed::max( Fixed &a, Fixed &b)
{
	return ((a < b) ? b : a);  
}

const Fixed	&Fixed::max( const Fixed &a, const Fixed &b)
{
	return ((a < b) ? b : a);  
}

std::ostream	&operator<<( std::ostream &os, const Fixed &fixed )
{
	os << fixed.toFloat();
	return (os);
}