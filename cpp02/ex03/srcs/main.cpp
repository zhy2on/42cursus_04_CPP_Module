/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:54:49 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/23 13:57:06 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	{
		Point	a(5, 0), b(2.5, 5), c(0, 0);
		Point	point(0.5, 0.5);

		std::cout << "It is ";
		if (!bsp(a, b, c, point))
			std::cout << "not ";
		std::cout << "insde of a triangle" << std::endl;
	}
	{
		Point	a(5, 0), b(2.5, 5), c(0, 0);
		Point	point(1, 2);

		std::cout << "It is ";
		if (!bsp(a, b, c, point))
			std::cout << "not ";
		std::cout << "insde of a triangle" << std::endl;
	}
	{
		Point	a(5, 0), b(2.5, 5), c(0, 0);
		Point	point(5, 0);

		std::cout << "It is ";
		if (!bsp(a, b, c, point))
			std::cout << "not ";
		std::cout << "insde of a triangle" << std::endl;
	}

	return (0);
}