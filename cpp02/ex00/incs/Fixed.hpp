/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:45:24 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/23 13:34:43 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H
# include <iostream>
# include <string>

class Fixed
{
private:
	int					fixed_point_value;
	static const int	nb_of_fractional_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed &operator=(const Fixed &fixed);

	int getRawBits( void ) const;
	void setRawBits(  int const raw );
};

#endif