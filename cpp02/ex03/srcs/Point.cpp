/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:07:00 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/04 19:48:26 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
	: x(Fixed(0)), y(Fixed(0))
{
}

Point::Point( const float x, const float y )
	: x(Fixed(x)), y(Fixed(y))
{
}

Point::Point( const Point &rhs )
	: x(rhs.x), y(rhs.y)
{
}

Point	&Point::operator=( const Point &rhs )
{
	(void) rhs;
	return (*this);
}

Point::~Point()
{
}

Fixed	Point::getX( void ) const
{
	return (this->x);
}

Fixed	Point::getY( void ) const
{
	return (this->y);
}