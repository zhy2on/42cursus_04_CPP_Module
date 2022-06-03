/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:54:49 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/03 18:11:55 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point	p1(0, 0), p2(2.5, 5), p3(5.5, 3);
	Point	check(1.5, 2);

	std::cout << "It is ";
	if (!isInTriangle(check, p1, p2, p3))
		std::cout << "not ";
	std::cout << "insde of a triangle" << std::endl;

	return (0);
}