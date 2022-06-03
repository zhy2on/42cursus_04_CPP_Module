/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:07:00 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/03 17:56:51 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	this->x = Fixed(0);
	this->y = Fixed(0);
}

Point::Point( const float x, const float y )
{
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point( const Point &rhs )
{
	this->x = rhs.x;
	this->y = rhs.y;
}

Point	&Point::operator=( const Point &rhs )
{
	this->x = rhs.x;
	this->y = rhs.y;
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

void	Point::setX( float x )
{
	this->x = Fixed(x);
}

void	Point::setY( float y )
{
	this->y = Fixed(y);
}