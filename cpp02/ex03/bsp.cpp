/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:19:45 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/03 18:28:45 by jihoh            ###   ########.fr       */
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

bool	isInTriangle( Point check, Point v1, Point v2, Point v3 )
{
	float	d1, d2, d3;
	bool	has_neg, has_pos;

	d1 = sign(check, v1, v2);
	d2 = sign(check, v2, v3);
	d3 = sign(check, v3, v1);

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}