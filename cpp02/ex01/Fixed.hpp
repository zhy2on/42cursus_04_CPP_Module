/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:45:24 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/02 20:26:08 by jihoh            ###   ########.fr       */
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

	Fixed & operator=( const Fixed &fixed );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream& operator<<( std::ostream &os, const Fixed &fixed );

#endif