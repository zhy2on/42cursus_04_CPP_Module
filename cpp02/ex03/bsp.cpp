/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:19:45 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/04 19:49:59 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	sign( Point p1, Point p2, Point p3 )
{
	return (
	(p1.getX().toFloat() - p3.getX().toFloat()) *
	(p2.getY().toFloat() - p3.getY().toFloat()) -
	(p2.getX().toFloat() - p3.getX().toFloat()) *
	(p1.getY().toFloat() - p3.getY().toFloat())
	);
}

bool	bsp( Point a, Point b, Point c, Point point )
{
	float	d1, d2, d3;
	bool	has_neg, has_pos;

	d1 = sign(a, b, point);
	d2 = sign(b, c, point);
	d3 = sign(c, a, point);

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}