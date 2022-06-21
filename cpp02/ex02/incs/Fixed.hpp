/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:45:24 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/03 15:48:36 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int					fixed_point_value;
	static const int	nb_of_fractional_bits = 8;

public:
	Fixed();
	Fixed( const int value );
	Fixed( const float value );
	Fixed( const Fixed &fixed );
	~Fixed();

	Fixed	&operator=( const Fixed &fixed );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool	operator>( const Fixed &fixed ) const;
	bool	operator<( const Fixed &fixed ) const;
	bool	operator>=( const Fixed &fixed ) const;
	bool	operator<=( const Fixed &fixed ) const;
	bool	operator==( const Fixed &fixed ) const;
	bool	operator!=( const Fixed &fixed ) const;

	Fixed	operator+( const Fixed &fixed ) const;
	Fixed	operator-( const Fixed &fixed ) const;
	Fixed	operator*( const Fixed &fixed ) const;
	Fixed	operator/( const Fixed &fixed ) const;

	Fixed	&operator++( void );
	Fixed	operator++( int );
	Fixed	&operator--( void );
	Fixed	operator--( int );

	static Fixed		&min( Fixed &a, Fixed &b);
	static const Fixed	&min( const Fixed &a, const Fixed &b);
	static Fixed		&max( Fixed &a, Fixed &b);
	static const Fixed	&max( const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<( std::ostream &os, const Fixed &fixed );

#endif