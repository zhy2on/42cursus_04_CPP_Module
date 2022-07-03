/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:27:35 by jihoh             #+#    #+#             */
/*   Updated: 2022/07/03 16:58:56 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp(5);
		sp.addNumber(INT_MIN);
		sp.addNumber(INT_MIN + 1);
		sp.addNumber(INT_MAX);
		sp.randomFill();
		std::vector<int> tmp = sp.getStorage();
		for (int i = 0; i < 5; i++)
			std::cout << tmp[i] << " ";
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp(10000);
		std::cout << sp.size() << std::endl;
		sp.randomFill();
		std::cout << sp.size() << std::endl;
	}
	{
		Span sp(1);
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			sp.addNumber(1);
			std::cout << "add 1" << std::endl;
			sp.addNumber(2);
			std::cout << "add 2" << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	return 0;
}