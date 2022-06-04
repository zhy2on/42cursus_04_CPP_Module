/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:54:49 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/04 19:59:59 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point	p1(0, 0), p2(5, 0), p3(2.5, 5);
	Point	check(2.6, 0.01);

	std::cout << "It is ";
	if (!bsp(p1, p2, p3, check))
		std::cout << "not ";
	std::cout << "insde of a triangle" << std::endl;

	return (0);
}