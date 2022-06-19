/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:09:52 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/20 02:45:09 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeConversion.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			TypeConversion tc = TypeConversion(av[1]);

			tc.literalToChar();
			tc.literalToInt();
			tc.literalToFloat();
			tc.literalToDobule();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
	{
		std::cout << "Usage: ./convert [numeric or character value]" << std::endl;
	}
	return 0;
}