/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:54:49 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/06 16:32:23 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point	p1(5, 0), p2(2.5, 5), p3(0, 0);
	Point	check(0.5, 0.5);

	std::cout << "It is ";
	if (!bsp(p1, p2, p3, check))
		std::cout << "not ";
	std::cout << "insde of a triangle" << std::endl;

	return (0);
}