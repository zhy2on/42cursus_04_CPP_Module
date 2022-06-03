/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:06:55 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/03 17:56:01 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_H
# define POINT_CLASS_H

# include "Fixed.hpp"

class Point
{
private:
	Fixed	x;
	Fixed	y;

public:
	Point();
	Point( const float x, const float y );
	Point( const Point &rhs );
	~Point();

	Point	&operator=( const Point &rhs );

	Fixed	getX( void ) const;
	Fixed	getY( void ) const;

	void	setX( float x );
	void	setY( float y );
};

bool	isInTriangle( Point check, Point v1, Point v2, Point v3 );

#endif