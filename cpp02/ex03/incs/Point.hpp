/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:06:55 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/04 19:39:05 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_H
# define POINT_CLASS_H

# include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;

public:
	Point();
	Point( const float x, const float y );
	Point( const Point &rhs );
	~Point();

	Point	&operator=( const Point &rhs );

	Fixed	getX( void ) const;
	Fixed	getY( void ) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif